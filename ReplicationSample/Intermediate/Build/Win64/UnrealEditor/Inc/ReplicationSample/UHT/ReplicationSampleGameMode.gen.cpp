// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/GameModes/ReplicationSampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSampleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UntakenTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UntakenTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UntakenPlayerStarts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UntakenPlayerStarts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UntakenPlayerStarts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "IncludePath", "GameModes/ReplicationSampleGameMode.h" },
		{ "ModuleRelativePath", "GameModes/ReplicationSampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenTag_MetaData[] = {
		{ "Category", "ReplicationSampleGameMode" },
		{ "ModuleRelativePath", "GameModes/ReplicationSampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenTag = { "UntakenTag", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleGameMode, UntakenTag), METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenTag_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts_Inner = { "UntakenPlayerStarts", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReplicationSampleGameMode" },
		{ "ModuleRelativePath", "GameModes/ReplicationSampleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts = { "UntakenPlayerStarts", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleGameMode, UntakenPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReplicationSampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleGameMode_Statics::NewProp_UntakenPlayerStarts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicationSampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicationSampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicationSampleGameMode_Statics::ClassParams = {
		&AReplicationSampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReplicationSampleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleGameMode_Statics::PropPointers),
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
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_GameModes_ReplicationSampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_GameModes_ReplicationSampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReplicationSampleGameMode, AReplicationSampleGameMode::StaticClass, TEXT("AReplicationSampleGameMode"), &Z_Registration_Info_UClass_AReplicationSampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicationSampleGameMode), 415647067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_GameModes_ReplicationSampleGameMode_h_3496709205(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_GameModes_ReplicationSampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_GameModes_ReplicationSampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
