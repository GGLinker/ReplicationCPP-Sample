// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/ReplicationSampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AReplicationSampleGameMode();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AReplicationSampleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	void AReplicationSampleGameMode::StaticRegisterNativesAReplicationSampleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReplicationSampleGameMode);
	UClass* Z_Construct_UClass_AReplicationSampleGameMode_NoRegister()
	{
		return AReplicationSampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AReplicationSampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicationSampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ReplicationSampleGameMode.h" },
		{ "ModuleRelativePath", "ReplicationSampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicationSampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicationSampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicationSampleGameMode_Statics::ClassParams = {
		&AReplicationSampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicationSampleGameMode()
	{
		if (!Z_Registration_Info_UClass_AReplicationSampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplicationSampleGameMode.OuterSingleton, Z_Construct_UClass_AReplicationSampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReplicationSampleGameMode.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UClass* StaticClass<AReplicationSampleGameMode>()
	{
		return AReplicationSampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicationSampleGameMode);
	AReplicationSampleGameMode::~AReplicationSampleGameMode() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReplicationSampleGameMode, AReplicationSampleGameMode::StaticClass, TEXT("AReplicationSampleGameMode"), &Z_Registration_Info_UClass_AReplicationSampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicationSampleGameMode), 1982477641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleGameMode_h_3500618220(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
