// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARTILLERY_CLIENT_NetworkManager_generated_h
#error "NetworkManager.generated.h already included, missing '#pragma once' in NetworkManager.h"
#endif
#define ARTILLERY_CLIENT_NetworkManager_generated_h

#define FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartServer);


#define FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkManager(); \
	friend struct Z_Construct_UClass_ANetworkManager_Statics; \
public: \
	DECLARE_CLASS(ANetworkManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Artillery_Client"), NO_API) \
	DECLARE_SERIALIZER(ANetworkManager)


#define FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetworkManager(ANetworkManager&&); \
	ANetworkManager(const ANetworkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkManager) \
	NO_API virtual ~ANetworkManager();


#define FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_14_PROLOG
#define FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARTILLERY_CLIENT_API UClass* StaticClass<class ANetworkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHubs_Artillery_Client_Artillery_Client_Source_Artillery_Client_Public_NetworkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
