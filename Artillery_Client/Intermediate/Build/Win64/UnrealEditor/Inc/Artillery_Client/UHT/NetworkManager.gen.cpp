// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Artillery_Client/Public/NetworkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkManager() {}

// Begin Cross Module References
ARTILLERY_CLIENT_API UClass* Z_Construct_UClass_ANetworkManager();
ARTILLERY_CLIENT_API UClass* Z_Construct_UClass_ANetworkManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Artillery_Client();
// End Cross Module References

// Begin Class ANetworkManager Function StartServer
struct Z_Construct_UFunction_ANetworkManager_StartServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkManager_StartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkManager, nullptr, "StartServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkManager_StartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetworkManager_StartServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetworkManager_StartServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkManager_StartServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetworkManager::execStartServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartServer();
	P_NATIVE_END;
}
// End Class ANetworkManager Function StartServer

// Begin Class ANetworkManager
void ANetworkManager::StaticRegisterNativesANetworkManager()
{
	UClass* Class = ANetworkManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartServer", &ANetworkManager::execStartServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkManager);
UClass* Z_Construct_UClass_ANetworkManager_NoRegister()
{
	return ANetworkManager::StaticClass();
}
struct Z_Construct_UClass_ANetworkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NetworkManager.h" },
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkStatusWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkStatusWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusTextBlock_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NetworkStatusWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetworkStatusWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkManager_StartServer, "StartServer" }, // 3616982913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetworkManager_Statics::NewProp_NetworkStatusWidgetClass = { "NetworkStatusWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkManager, NetworkStatusWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkStatusWidgetClass_MetaData), NewProp_NetworkStatusWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkManager_Statics::NewProp_NetworkStatusWidget = { "NetworkStatusWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkManager, NetworkStatusWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkStatusWidget_MetaData), NewProp_NetworkStatusWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetworkManager_Statics::NewProp_StatusTextBlock = { "StatusTextBlock", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetworkManager, StatusTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusTextBlock_MetaData), NewProp_StatusTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkManager_Statics::NewProp_NetworkStatusWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkManager_Statics::NewProp_NetworkStatusWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkManager_Statics::NewProp_StatusTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Artillery_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkManager_Statics::ClassParams = {
	&ANetworkManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetworkManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetworkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetworkManager()
{
	if (!Z_Registration_Info_UClass_ANetworkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkManager.OuterSingleton, Z_Construct_UClass_ANetworkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetworkManager.OuterSingleton;
}
template<> ARTILLERY_CLIENT_API UClass* StaticClass<ANetworkManager>()
{
	return ANetworkManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkManager);
ANetworkManager::~ANetworkManager() {}
// End Class ANetworkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkManager, ANetworkManager::StaticClass, TEXT("ANetworkManager"), &Z_Registration_Info_UClass_ANetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkManager), 2589785641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_3244522283(TEXT("/Script/Artillery_Client"),
	Z_CompiledInDeferFile_FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
