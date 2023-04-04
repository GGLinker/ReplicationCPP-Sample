// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSample_init() {}
	REPLICATIONSAMPLE_API UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature();
	REPLICATIONSAMPLE_API UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature();
	REPLICATIONSAMPLE_API UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ServerSetupComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ReplicationSample;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ReplicationSample()
	{
		if (!Z_Registration_Info_UPackage__Script_ReplicationSample.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ReplicationSample_ServerSetupComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ReplicationSample",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0A5B9D96,
				0xEFAF2EAB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ReplicationSample.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ReplicationSample.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ReplicationSample(Z_Construct_UPackage__Script_ReplicationSample, TEXT("/Script/ReplicationSample"), Z_Registration_Info_UPackage__Script_ReplicationSample, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0A5B9D96, 0xEFAF2EAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
