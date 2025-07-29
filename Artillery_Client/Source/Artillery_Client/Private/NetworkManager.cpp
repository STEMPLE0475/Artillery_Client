// Fill out your copyright notice in the Description page of Project Settings.

#include "NetworkManager.h"
#include "Networking.h"
#include "Engine/Engine.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"

// Sets default values
ANetworkManager::ANetworkManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANetworkManager::StartServer()
{
    ConnectToServer();
}

// Called when the game starts or when spawned
void ANetworkManager::BeginPlay()
{
	Super::BeginPlay();
	

    //위젯 생성
    if (NetworkStatusWidgetClass)
    {
        NetworkStatusWidget = CreateWidget<UUserWidget>(GetWorld(), NetworkStatusWidgetClass);
        if (NetworkStatusWidget)
        {
            NetworkStatusWidget->AddToViewport();

            // 텍스트 블록 가져오기
            UWidget* FoundWidget = NetworkStatusWidget->GetWidgetFromName(TEXT("StatusText"));
            if (FoundWidget)
            {
                StatusTextBlock = Cast<UTextBlock>(FoundWidget);
            }
        }
    }
}

// Called every frame
void ANetworkManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANetworkManager::ConnectToServer()
{
    //출력
    auto PrintToUI = [this](const FString& Msg)
    {
        if (StatusTextBlock)
        {
            StatusTextBlock->SetText(FText::FromString(Msg));
            UE_LOG(LogTemp, Error, TEXT("StatusTextBlock is null! 이름 확인 필요"));
        }
    };

    // 1. 소켓 서브시스템 가져오기
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem)
    {
        PrintToUI(TEXT("소켓 서브시스템 초기화 실패"));
        return;
    }

    // 2. IP 주소 설정
    TSharedRef<FInternetAddr> RemoteAddr = SocketSubsystem->CreateInternetAddr();
    bool bIsValid = false;
    RemoteAddr->SetIp(TEXT("127.0.0.1"), bIsValid); // 로컬 서버 IP
    RemoteAddr->SetPort(12345); // 서버 포트 (맞게 설정할 것)

    if (!bIsValid)
    {
        PrintToUI(TEXT("잘못된 IP 주소"));
        return;
    }

    // 3. TCP 소켓 생성
    ClientSocket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("TCPClientSocket"), false);

    // 4. 서버에 연결 시도
    if (ClientSocket->Connect(*RemoteAddr))
    {
        PrintToUI(TEXT("서버 접속 성공"));;

        // 5. 서버로부터 메시지 수신 시도
        uint8 Buffer[256];
        FMemory::Memzero(Buffer, sizeof(Buffer));
        int32 BytesRead = 0;

        if (ClientSocket->Recv(Buffer, sizeof(Buffer), BytesRead))
        {
            FString ReceivedMsg = ANSI_TO_TCHAR(reinterpret_cast<const char*>(Buffer));
            PrintToUI(FString::Printf(TEXT("서버 응답: %s"), *ReceivedMsg));
        }
        else
        {
            PrintToUI(TEXT("서버 응답 없음"));;
        }
    }
    else
    {
        PrintToUI(TEXT("서버 접속 실패"));;
    }

    // 6. 소켓 정리
    if (ClientSocket)
    {
        ClientSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(ClientSocket);
    }
}

