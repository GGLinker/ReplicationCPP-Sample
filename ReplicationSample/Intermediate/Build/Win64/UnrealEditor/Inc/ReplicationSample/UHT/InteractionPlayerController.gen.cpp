// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/InteractionPlayerController.h"
#include "ReplicationSample/UsableItems/UsableItemsContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AInteractionPlayerController();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AInteractionPlayerController_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_ASpawnableItemBase_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_UsableItemsContainer_NoRegister();
	REPLICATIONSAMPLE_API UEnum* Z_Construct_UEnum_ReplicationSample_EInteractableItemType();
	REPLICATIONSAMPLE_API UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature();
	REPLICATIONSAMPLE_API UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature();
	REPLICATIONSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableItemEntity();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics
	{
		struct _Script_ReplicationSample_eventItemsContainerStateUpdate_Parms
		{
			TEnumAsByte<EInteractableItemType> EntityType;
			int32 UpdatedAmount;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntityType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UpdatedAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReplicationSample_eventItemsContainerStateUpdate_Parms, EntityType), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::NewProp_UpdatedAmount = { "UpdatedAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReplicationSample_eventItemsContainerStateUpdate_Parms, UpdatedAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::NewProp_EntityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::NewProp_UpdatedAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicationSample, nullptr, "ItemsContainerStateUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::_Script_ReplicationSample_eventItemsContainerStateUpdate_Parms), Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics
	{
		struct _Script_ReplicationSample_eventItemsContainerSelectionOperate_Parms
		{
			int32 NewIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReplicationSample_eventItemsContainerSelectionOperate_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReplicationSample, nullptr, "ItemsContainerSelectionOperate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::_Script_ReplicationSample_eventItemsContainerSelectionOperate_Parms), Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execGetSelectedSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ASpawnableItemBase> *)Z_Param__Result=P_THIS->GetSelectedSpawnActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execGetSelectedType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EInteractableItemType>*)Z_Param__Result=P_THIS->GetSelectedType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execGetSelectedMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstance**)Z_Param__Result=P_THIS->GetSelectedMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execSwitchSelected)
	{
		P_GET_UBOOL(Z_Param_bNext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchSelected_Implementation(Z_Param_bNext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execOperateItemsContainer)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_operateEntityType);
		P_GET_PROPERTY(FIntProperty,Z_Param_accum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OperateItemsContainer_Implementation(EInteractableItemType(Z_Param_operateEntityType),Z_Param_accum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execGetItemsRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractableItemEntity>*)Z_Param__Result=P_THIS->GetItemsRepresentation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execSetupEntitiesRepresentation)
	{
		P_GET_TARRAY(FInteractableItemEntity,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupEntitiesRepresentation_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execSetInitialSpawnPoint)
	{
		P_GET_OBJECT(APlayerStart,Z_Param_Start);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialSpawnPoint_Implementation(Z_Param_Start);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionPlayerController::execGetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EInteractableItemType>*)Z_Param__Result=P_THIS->GetSelected();
		P_NATIVE_END;
	}
	struct InteractionPlayerController_eventOperateItemsContainer_Parms
	{
		TEnumAsByte<EInteractableItemType> operateEntityType;
		int32 accum;
	};
	struct InteractionPlayerController_eventSetInitialSpawnPoint_Parms
	{
		APlayerStart* Start;
	};
	struct InteractionPlayerController_eventSetupEntitiesRepresentation_Parms
	{
		TArray<FInteractableItemEntity> Data;
	};
	struct InteractionPlayerController_eventSwitchSelected_Parms
	{
		bool bNext;
	};
	static FName NAME_AInteractionPlayerController_Init = FName(TEXT("Init"));
	void AInteractionPlayerController::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractionPlayerController_Init),NULL);
	}
	static FName NAME_AInteractionPlayerController_OperateItemsContainer = FName(TEXT("OperateItemsContainer"));
	void AInteractionPlayerController::OperateItemsContainer(EInteractableItemType operateEntityType, int32 accum) const
	{
		InteractionPlayerController_eventOperateItemsContainer_Parms Parms;
		Parms.operateEntityType=operateEntityType;
		Parms.accum=accum;
		const_cast<AInteractionPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AInteractionPlayerController_OperateItemsContainer),&Parms);
	}
	static FName NAME_AInteractionPlayerController_SetInitialSpawnPoint = FName(TEXT("SetInitialSpawnPoint"));
	void AInteractionPlayerController::SetInitialSpawnPoint(APlayerStart* Start)
	{
		InteractionPlayerController_eventSetInitialSpawnPoint_Parms Parms;
		Parms.Start=Start;
		ProcessEvent(FindFunctionChecked(NAME_AInteractionPlayerController_SetInitialSpawnPoint),&Parms);
	}
	static FName NAME_AInteractionPlayerController_SetupEntitiesRepresentation = FName(TEXT("SetupEntitiesRepresentation"));
	void AInteractionPlayerController::SetupEntitiesRepresentation(TArray<FInteractableItemEntity> const& Data)
	{
		InteractionPlayerController_eventSetupEntitiesRepresentation_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_AInteractionPlayerController_SetupEntitiesRepresentation),&Parms);
	}
	static FName NAME_AInteractionPlayerController_SwitchSelected = FName(TEXT("SwitchSelected"));
	void AInteractionPlayerController::SwitchSelected(bool bNext) const
	{
		InteractionPlayerController_eventSwitchSelected_Parms Parms;
		Parms.bNext=bNext ? true : false;
		const_cast<AInteractionPlayerController*>(this)->ProcessEvent(FindFunctionChecked(NAME_AInteractionPlayerController_SwitchSelected),&Parms);
	}
	void AInteractionPlayerController::StaticRegisterNativesAInteractionPlayerController()
	{
		UClass* Class = AInteractionPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemsRepresentation", &AInteractionPlayerController::execGetItemsRepresentation },
			{ "GetSelected", &AInteractionPlayerController::execGetSelected },
			{ "GetSelectedMaterialInstance", &AInteractionPlayerController::execGetSelectedMaterialInstance },
			{ "GetSelectedSpawnActor", &AInteractionPlayerController::execGetSelectedSpawnActor },
			{ "GetSelectedType", &AInteractionPlayerController::execGetSelectedType },
			{ "Init", &AInteractionPlayerController::execInit },
			{ "OperateItemsContainer", &AInteractionPlayerController::execOperateItemsContainer },
			{ "SetInitialSpawnPoint", &AInteractionPlayerController::execSetInitialSpawnPoint },
			{ "SetupEntitiesRepresentation", &AInteractionPlayerController::execSetupEntitiesRepresentation },
			{ "Shoot", &AInteractionPlayerController::execShoot },
			{ "SwitchSelected", &AInteractionPlayerController::execSwitchSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics
	{
		struct InteractionPlayerController_eventGetItemsRepresentation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractableItemEntity, METADATA_PARAMS(nullptr, 0) }; // 3100447343
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventGetItemsRepresentation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3100447343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "GetItemsRepresentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::InteractionPlayerController_eventGetItemsRepresentation_Parms), Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics
	{
		struct InteractionPlayerController_eventGetSelected_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventGetSelected_Parms, ReturnValue), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "GetSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::InteractionPlayerController_eventGetSelected_Parms), Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_GetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_GetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics
	{
		struct InteractionPlayerController_eventGetSelectedMaterialInstance_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventGetSelectedMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "GetSelectedMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::InteractionPlayerController_eventGetSelectedMaterialInstance_Parms), Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics
	{
		struct InteractionPlayerController_eventGetSelectedSpawnActor_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventGetSelectedSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpawnableItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "GetSelectedSpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::InteractionPlayerController_eventGetSelectedSpawnActor_Parms), Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics
	{
		struct InteractionPlayerController_eventGetSelectedType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventGetSelectedType_Parms, ReturnValue), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "GetSelectedType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::InteractionPlayerController_eventGetSelectedType_Parms), Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_operateEntityType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_accum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::NewProp_operateEntityType = { "operateEntityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventOperateItemsContainer_Parms, operateEntityType), Z_Construct_UEnum_ReplicationSample_EInteractableItemType, METADATA_PARAMS(nullptr, 0) }; // 668409034
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::NewProp_accum = { "accum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventOperateItemsContainer_Parms, accum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::NewProp_operateEntityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::NewProp_accum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "OperateItemsContainer", nullptr, nullptr, sizeof(InteractionPlayerController_eventOperateItemsContainer_Parms), Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Start;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventSetInitialSpawnPoint_Parms, Start), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "SetInitialSpawnPoint", nullptr, nullptr, sizeof(InteractionPlayerController_eventSetInitialSpawnPoint_Parms), Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInteractableItemEntity, METADATA_PARAMS(nullptr, 0) }; // 3100447343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractionPlayerController_eventSetupEntitiesRepresentation_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data_MetaData)) }; // 3100447343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "SetupEntitiesRepresentation", nullptr, nullptr, sizeof(InteractionPlayerController_eventSetupEntitiesRepresentation_Parms), Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics
	{
		struct InteractionPlayerController_eventShoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionPlayerController_eventShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InteractionPlayerController_eventShoot_Parms), &Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Returns true if there's an item to shoot\n" },
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
		{ "ToolTip", "Returns true if there's an item to shoot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "Shoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::InteractionPlayerController_eventShoot_Parms), Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics
	{
		static void NewProp_bNext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::NewProp_bNext_SetBit(void* Obj)
	{
		((InteractionPlayerController_eventSwitchSelected_Parms*)Obj)->bNext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::NewProp_bNext = { "bNext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InteractionPlayerController_eventSwitchSelected_Parms), &Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::NewProp_bNext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::NewProp_bNext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionPlayerController, nullptr, "SwitchSelected", nullptr, nullptr, sizeof(InteractionPlayerController_eventSwitchSelected_Parms), Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionPlayerController);
	UClass* Z_Construct_UClass_AInteractionPlayerController_NoRegister()
	{
		return AInteractionPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemsContainerStateUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemsContainerStateUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedItemSwitch_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedItemSwitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionPlayerController_GetItemsRepresentation, "GetItemsRepresentation" }, // 3816580398
		{ &Z_Construct_UFunction_AInteractionPlayerController_GetSelected, "GetSelected" }, // 556844722
		{ &Z_Construct_UFunction_AInteractionPlayerController_GetSelectedMaterialInstance, "GetSelectedMaterialInstance" }, // 2232665896
		{ &Z_Construct_UFunction_AInteractionPlayerController_GetSelectedSpawnActor, "GetSelectedSpawnActor" }, // 3332232099
		{ &Z_Construct_UFunction_AInteractionPlayerController_GetSelectedType, "GetSelectedType" }, // 1630400925
		{ &Z_Construct_UFunction_AInteractionPlayerController_Init, "Init" }, // 3359777966
		{ &Z_Construct_UFunction_AInteractionPlayerController_OperateItemsContainer, "OperateItemsContainer" }, // 3566272911
		{ &Z_Construct_UFunction_AInteractionPlayerController_SetInitialSpawnPoint, "SetInitialSpawnPoint" }, // 1821673684
		{ &Z_Construct_UFunction_AInteractionPlayerController_SetupEntitiesRepresentation, "SetupEntitiesRepresentation" }, // 1846740996
		{ &Z_Construct_UFunction_AInteractionPlayerController_Shoot, "Shoot" }, // 3372537794
		{ &Z_Construct_UFunction_AInteractionPlayerController_SwitchSelected, "SwitchSelected" }, // 376543703
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "InteractionPlayerController.h" },
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_SpawnPS_MetaData[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_SpawnPS = { "SpawnPS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractionPlayerController, SpawnPS), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_SpawnPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_SpawnPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_ItemsContainer_MetaData[] = {
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_ItemsContainer = { "ItemsContainer", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractionPlayerController, ItemsContainer), Z_Construct_UClass_UsableItemsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_ItemsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_ItemsContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnItemsContainerStateUpdate_MetaData[] = {
		{ "Comment", "//**UI update delegate**//\n//Update items consistency\n" },
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
		{ "ToolTip", "/UI update delegate*/\nUpdate items consistency" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnItemsContainerStateUpdate = { "OnItemsContainerStateUpdate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractionPlayerController, OnItemsContainerStateUpdate), Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerStateUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnItemsContainerStateUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnItemsContainerStateUpdate_MetaData)) }; // 1533068288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnSelectedItemSwitch_MetaData[] = {
		{ "Comment", "//Update selected item\n" },
		{ "ModuleRelativePath", "InteractionPlayerController.h" },
		{ "ToolTip", "Update selected item" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnSelectedItemSwitch = { "OnSelectedItemSwitch", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractionPlayerController, OnSelectedItemSwitch), Z_Construct_UDelegateFunction_ReplicationSample_ItemsContainerSelectionOperate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnSelectedItemSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnSelectedItemSwitch_MetaData)) }; // 2371701465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_SpawnPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_ItemsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnItemsContainerStateUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionPlayerController_Statics::NewProp_OnSelectedItemSwitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionPlayerController_Statics::ClassParams = {
		&AInteractionPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractionPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionPlayerController_Statics::PropPointers),
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

	void AInteractionPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ItemsContainer(TEXT("ItemsContainer"));

		const bool bIsValid = true
			&& Name_ItemsContainer == ClassReps[(int32)ENetFields_Private::ItemsContainer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AInteractionPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionPlayerController);
	AInteractionPlayerController::~AInteractionPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionPlayerController, AInteractionPlayerController::StaticClass, TEXT("AInteractionPlayerController"), &Z_Registration_Info_UClass_AInteractionPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionPlayerController), 1004898212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_78466145(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
