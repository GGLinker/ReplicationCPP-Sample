// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/InteractionPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AInteractionPlayerController();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AInteractionPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	void AInteractionPlayerController::StaticRegisterNativesAInteractionPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionPlayerController);
	UClass* Z_Construct_UClass_AInteractionPlayerController_NoRegister()
	{
		return AInteractionPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "InteractionPlayerController.h" },
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionPlayerController_Statics::ClassParams = {
		&AInteractionPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionPlayerController()
	{
		if (!Z_Registration_Info_UClass_AInteractionPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionPlayerController.OuterSingleton, Z_Construct_UClass_AInteractionPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractionPlayerController.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UClass* StaticClass<AInteractionPlayerController>()
	{
		return AInteractionPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionPlayerController);
	AInteractionPlayerController::~AInteractionPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionPlayerController, AInteractionPlayerController::StaticClass, TEXT("AInteractionPlayerController"), &Z_Registration_Info_UClass_AInteractionPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionPlayerController), 617425651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_1416001892(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
