// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/UsableItems/UsableItemsContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUsableItemsContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_UUsableItemsContainer();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_UUsableItemsContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	void UUsableItemsContainer::StaticRegisterNativesUUsableItemsContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsableItemsContainer);
	UClass* Z_Construct_UClass_UUsableItemsContainer_NoRegister()
	{
		return UUsableItemsContainer::StaticClass();
	}
	struct Z_Construct_UClass_UUsableItemsContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsableItemsContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsableItemsContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UsableItems/UsableItemsContainer.h" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsableItemsContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsableItemsContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsableItemsContainer_Statics::ClassParams = {
		&UUsableItemsContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsableItemsContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsableItemsContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsableItemsContainer()
	{
		if (!Z_Registration_Info_UClass_UUsableItemsContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsableItemsContainer.OuterSingleton, Z_Construct_UClass_UUsableItemsContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsableItemsContainer.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UClass* StaticClass<UUsableItemsContainer>()
	{
		return UUsableItemsContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsableItemsContainer);
	UUsableItemsContainer::~UUsableItemsContainer() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsableItemsContainer, UUsableItemsContainer::StaticClass, TEXT("UUsableItemsContainer"), &Z_Registration_Info_UClass_UUsableItemsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsableItemsContainer), 924692857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_2676245819(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
