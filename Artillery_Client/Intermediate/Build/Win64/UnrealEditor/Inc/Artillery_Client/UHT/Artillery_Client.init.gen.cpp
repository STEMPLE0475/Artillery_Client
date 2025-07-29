// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArtillery_Client_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Artillery_Client;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Artillery_Client()
	{
		if (!Z_Registration_Info_UPackage__Script_Artillery_Client.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Artillery_Client",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x10C874BC,
				0x9EF65990,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Artillery_Client.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Artillery_Client.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Artillery_Client(Z_Construct_UPackage__Script_Artillery_Client, TEXT("/Script/Artillery_Client"), Z_Registration_Info_UPackage__Script_Artillery_Client, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x10C874BC, 0x9EF65990));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
