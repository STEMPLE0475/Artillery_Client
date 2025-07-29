// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"

#include "NetworkManager.generated.h"

UCLASS()
class ARTILLERY_CLIENT_API ANetworkManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetworkManager();
	UFUNCTION(BlueprintCallable)
	void StartServer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void ConnectToServer();
	//void UpdateStatusText(const FString& message, const FColor& Color = FColor::White);

	FSocket* ClientSocket;

	//UI ฐüทร
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> NetworkStatusWidgetClass;

	UPROPERTY()
	UUserWidget* NetworkStatusWidget;

	UPROPERTY()
	class UTextBlock* StatusTextBlock;
};
