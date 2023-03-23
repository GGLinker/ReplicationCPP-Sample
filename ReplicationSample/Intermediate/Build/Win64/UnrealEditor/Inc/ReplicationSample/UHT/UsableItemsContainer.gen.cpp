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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_ASpawnableItemBase_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_UsableItemsContainer();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_UsableItemsContainer_NoRegister();
	REPLICATIONSAMPLE_API UEnum* Z_Construct_UEnum_ReplicationSample_EInteractableItemType();
	REPLICATIONSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableItemEntity();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractableItemType;
	static UEnum* EInteractableItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractableItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractableItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReplicationSample_EInteractableItemType, Z_Construct_UPackage__Script_ReplicationSample(), TEXT("EInteractableItemType"));
		}
		return Z_Registration_Info_UEnum_EInteractableItemType.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UEnum* StaticEnum<EInteractableItemType>()
	{
		return EInteractableItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enumerators[] = {
		{ "RedHuge", (int64)RedHuge },
		{ "GreenMedium", (int64)GreenMedium },
		{ "BlueSmall", (int64)BlueSmall },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BlueSmall.Name", "BlueSmall" },
		{ "GreenMedium.Name", "GreenMedium" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
		{ "RedHuge.Name", "RedHuge" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReplicationSample,
		nullptr,
		"EInteractableItemType",
		"EInteractableItemType",
		Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReplicationSample_EInteractableItemType()
	{
		if (!Z_Registration_Info_UEnum_EInteractableItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractableItemType.InnerSingleton, Z_Construct_UEnum_ReplicationSample_EInteractableItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractableItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractableItemEntity;
class UScriptStruct* FInteractableItemEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableItemEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractableItemEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableItemEntity, Z_Construct_UPackage__Script_ReplicationSample(), TEXT("InteractableItemEntity"));
	}
	return Z_Registration_Info_UScriptStruct_InteractableItemEntity.OuterSingleton;
}
template<> REPLICATIONSAMPLE_API UScriptStruct* StaticStruct<FInteractableItemEntity>()
{
	return FInteractableItemEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractableItemEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entityType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_entityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorSpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorSpawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemsAmount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_itemsAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableItemEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_entityType_MetaData[] = {
		{ "Category", "InteractableItemEntity" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_entityType = { "entityType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableItemEntity, entityType), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_entityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_entityType_MetaData)) }; // 668409034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_material_MetaData[] = {
		{ "Category", "InteractableItemEntity" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableItemEntity, material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_actorSpawnClass_MetaData[] = {
		{ "Category", "InteractableItemEntity" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_actorSpawnClass = { "actorSpawnClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableItemEntity, actorSpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpawnableItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_actorSpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_actorSpawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_itemsAmount_MetaData[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_itemsAmount = { "itemsAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractableItemEntity, itemsAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_itemsAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_itemsAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_entityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_actorSpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewProp_itemsAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
		nullptr,
		&NewStructOps,
		"InteractableItemEntity",
		sizeof(FInteractableItemEntity),
		alignof(FInteractableItemEntity),
		Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractableItemEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractableItemEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractableItemEntity.InnerSingleton, Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractableItemEntity.InnerSingleton;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execGetSelectedSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ASpawnableItemBase> *)Z_Param__Result=P_THIS->GetSelectedSpawnActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execGetSelectedMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstance**)Z_Param__Result=P_THIS->GetSelectedMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execGetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EInteractableItemType>*)Z_Param__Result=P_THIS->GetSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execSwitchSelected)
	{
		P_GET_UBOOL(Z_Param_bNext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SwitchSelected(Z_Param_bNext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execOperateEntities)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OperateEntityType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Accum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->OperateEntities(EInteractableItemType(Z_Param_OperateEntityType),Z_Param_Accum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execGetRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractableItemEntity>*)Z_Param__Result=P_THIS->GetRepresentation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UsableItemsContainer::execSetParams)
	{
		P_GET_TARRAY(FInteractableItemEntity,Z_Param_Representation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParams(Z_Param_Representation);
		P_NATIVE_END;
	}
	void UsableItemsContainer::StaticRegisterNativesUsableItemsContainer()
	{
		UClass* Class = UsableItemsContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRepresentation", &UsableItemsContainer::execGetRepresentation },
			{ "GetSelected", &UsableItemsContainer::execGetSelected },
			{ "GetSelectedMaterial", &UsableItemsContainer::execGetSelectedMaterial },
			{ "GetSelectedSpawnActor", &UsableItemsContainer::execGetSelectedSpawnActor },
			{ "OperateEntities", &UsableItemsContainer::execOperateEntities },
			{ "SetParams", &UsableItemsContainer::execSetParams },
			{ "SwitchSelected", &UsableItemsContainer::execSwitchSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics
	{
		struct sableItemsContainer_eventGetRepresentation_Parms
		{
			TArray<FInteractableItemEntity> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractableItemEntity, METADATA_PARAMS(nullptr, 0) }; // 4164129374
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventGetRepresentation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4164129374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "GetRepresentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::sableItemsContainer_eventGetRepresentation_Parms), Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_GetRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_GetRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics
	{
		struct sableItemsContainer_eventGetSelected_Parms
		{
			TEnumAsByte<EInteractableItemType> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventGetSelected_Parms, ReturnValue), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "GetSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::sableItemsContainer_eventGetSelected_Parms), Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_GetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_GetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics
	{
		struct sableItemsContainer_eventGetSelectedMaterial_Parms
		{
			UMaterialInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventGetSelectedMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "GetSelectedMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::sableItemsContainer_eventGetSelectedMaterial_Parms), Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics
	{
		struct sableItemsContainer_eventGetSelectedSpawnActor_Parms
		{
			TSubclassOf<ASpawnableItemBase>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventGetSelectedSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpawnableItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "GetSelectedSpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::sableItemsContainer_eventGetSelectedSpawnActor_Parms), Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics
	{
		struct sableItemsContainer_eventOperateEntities_Parms
		{
			TEnumAsByte<EInteractableItemType> OperateEntityType;
			int32 Accum;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperateEntityType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Accum;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_OperateEntityType = { "OperateEntityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventOperateEntities_Parms, OperateEntityType), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_Accum = { "Accum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventOperateEntities_Parms, Accum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventOperateEntities_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_OperateEntityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_Accum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "OperateEntities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::sableItemsContainer_eventOperateEntities_Parms), Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_OperateEntities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_OperateEntities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics
	{
		struct sableItemsContainer_eventSetParams_Parms
		{
			TArray<FInteractableItemEntity> Representation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Representation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Representation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Representation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation_Inner = { "Representation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractableItemEntity, METADATA_PARAMS(nullptr, 0) }; // 4164129374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation = { "Representation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventSetParams_Parms, Representation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation_MetaData)) }; // 4164129374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::NewProp_Representation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//SETUP\n" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
		{ "ToolTip", "SETUP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "SetParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::sableItemsContainer_eventSetParams_Parms), Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_SetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_SetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics
	{
		struct sableItemsContainer_eventSwitchSelected_Parms
		{
			bool bNext;
			int32 ReturnValue;
		};
		static void NewProp_bNext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNext;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_bNext_SetBit(void* Obj)
	{
		((sableItemsContainer_eventSwitchSelected_Parms*)Obj)->bNext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_bNext = { "bNext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(sableItemsContainer_eventSwitchSelected_Parms), &Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_bNext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(sableItemsContainer_eventSwitchSelected_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_bNext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UsableItemsContainer, nullptr, "SwitchSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::sableItemsContainer_eventSwitchSelected_Parms), Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UsableItemsContainer_SwitchSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UsableItemsContainer_SwitchSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UsableItemsContainer);
	UClass* Z_Construct_UClass_UsableItemsContainer_NoRegister()
	{
		return UsableItemsContainer::StaticClass();
	}
	struct Z_Construct_UClass_UsableItemsContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntitiesRepresentation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntitiesRepresentation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EntitiesRepresentation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UsableItemsContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UsableItemsContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UsableItemsContainer_GetRepresentation, "GetRepresentation" }, // 1011118552
		{ &Z_Construct_UFunction_UsableItemsContainer_GetSelected, "GetSelected" }, // 3613297422
		{ &Z_Construct_UFunction_UsableItemsContainer_GetSelectedMaterial, "GetSelectedMaterial" }, // 1315529434
		{ &Z_Construct_UFunction_UsableItemsContainer_GetSelectedSpawnActor, "GetSelectedSpawnActor" }, // 1284472
		{ &Z_Construct_UFunction_UsableItemsContainer_OperateEntities, "OperateEntities" }, // 4084687618
		{ &Z_Construct_UFunction_UsableItemsContainer_SetParams, "SetParams" }, // 2096177116
		{ &Z_Construct_UFunction_UsableItemsContainer_SwitchSelected, "SwitchSelected" }, // 293364942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UsableItemsContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UsableItems/UsableItemsContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation_Inner = { "EntitiesRepresentation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractableItemEntity, METADATA_PARAMS(nullptr, 0) }; // 4164129374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "UsableItems/UsableItemsContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation = { "EntitiesRepresentation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsableItemsContainer, EntitiesRepresentation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation_MetaData)) }; // 4164129374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UsableItemsContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UsableItemsContainer_Statics::NewProp_EntitiesRepresentation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UsableItemsContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UsableItemsContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UsableItemsContainer_Statics::ClassParams = {
		&UsableItemsContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UsableItemsContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UsableItemsContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UsableItemsContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UsableItemsContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UsableItemsContainer()
	{
		if (!Z_Registration_Info_UClass_UsableItemsContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UsableItemsContainer.OuterSingleton, Z_Construct_UClass_UsableItemsContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UsableItemsContainer.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UClass* StaticClass<UsableItemsContainer>()
	{
		return UsableItemsContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UsableItemsContainer);
	UsableItemsContainer::~UsableItemsContainer() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::EnumInfo[] = {
		{ EInteractableItemType_StaticEnum, TEXT("EInteractableItemType"), &Z_Registration_Info_UEnum_EInteractableItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 668409034U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ScriptStructInfo[] = {
		{ FInteractableItemEntity::StaticStruct, Z_Construct_UScriptStruct_FInteractableItemEntity_Statics::NewStructOps, TEXT("InteractableItemEntity"), &Z_Registration_Info_UScriptStruct_InteractableItemEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractableItemEntity), 4164129374U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UsableItemsContainer, UsableItemsContainer::StaticClass, TEXT("UsableItemsContainer"), &Z_Registration_Info_UClass_UsableItemsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UsableItemsContainer), 684491769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_628808713(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
