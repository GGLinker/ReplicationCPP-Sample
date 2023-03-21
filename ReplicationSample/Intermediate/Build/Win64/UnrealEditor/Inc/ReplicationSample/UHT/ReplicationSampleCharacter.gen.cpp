// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationSample/ReplicationSampleCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationSampleCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AReplicationSampleCharacter();
	REPLICATIONSAMPLE_API UClass* Z_Construct_UClass_AReplicationSampleCharacter_NoRegister();
	REPLICATIONSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FOverlapElem();
	UPackage* Z_Construct_UPackage__Script_ReplicationSample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlapElem;
class UScriptStruct* FOverlapElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlapElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlapElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlapElem, Z_Construct_UPackage__Script_ReplicationSample(), TEXT("OverlapElem"));
	}
	return Z_Registration_Info_UScriptStruct_OverlapElem.OuterSingleton;
}
template<> REPLICATIONSAMPLE_API UScriptStruct* StaticStruct<FOverlapElem>()
{
	return FOverlapElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOverlapElem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlapElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOverlapElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlapElem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlapElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
		nullptr,
		&NewStructOps,
		"OverlapElem",
		sizeof(FOverlapElem),
		alignof(FOverlapElem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlapElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlapElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOverlapElem()
	{
		if (!Z_Registration_Info_UScriptStruct_OverlapElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlapElem.InnerSingleton, Z_Construct_UScriptStruct_FOverlapElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OverlapElem.InnerSingleton;
	}
	DEFINE_FUNCTION(AReplicationSampleCharacter::execOnTriggerSphereEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerSphereEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReplicationSampleCharacter::execOnTriggerSphereBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AReplicationSampleCharacter::StaticRegisterNativesAReplicationSampleCharacter()
	{
		UClass* Class = AReplicationSampleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerSphereBeginOverlap", &AReplicationSampleCharacter::execOnTriggerSphereBeginOverlap },
			{ "OnTriggerSphereEndOverlap", &AReplicationSampleCharacter::execOnTriggerSphereEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics
	{
		struct ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms), &Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationSampleCharacter, nullptr, "OnTriggerSphereBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::ReplicationSampleCharacter_eventOnTriggerSphereBeginOverlap_Parms), Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics
	{
		struct ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms), &Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReplicationSampleCharacter, nullptr, "OnTriggerSphereEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::ReplicationSampleCharacter_eventOnTriggerSphereEndOverlap_Parms), Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReplicationSampleCharacter);
	UClass* Z_Construct_UClass_AReplicationSampleCharacter_NoRegister()
	{
		return AReplicationSampleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AReplicationSampleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingStaticMeshClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShootingStaticMeshClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlappedItemsContainer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedItemsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappedItemsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldNormalizedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoldNormalizedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingImpulseIntense_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingImpulseIntense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectItemAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectItemAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicationSampleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationSample,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReplicationSampleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereBeginOverlap, "OnTriggerSphereBeginOverlap" }, // 823362814
		{ &Z_Construct_UFunction_AReplicationSampleCharacter_OnTriggerSphereEndOverlap, "OnTriggerSphereEndOverlap" }, // 1440003166
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ReplicationSampleCharacter.h" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_TriggerSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_TriggerSphere = { "TriggerSphere", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, TriggerSphere), Z_Construct_UClass_ATriggerSphere_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_TriggerSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_TriggerSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingStaticMeshClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Shooting SM */" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Shooting SM" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingStaticMeshClass = { "ShootingStaticMeshClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, ShootingStaticMeshClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingStaticMeshClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingStaticMeshClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer_Inner = { "OverlappedItemsContainer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOverlapElem, METADATA_PARAMS(nullptr, 0) }; // 889368574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer_MetaData[] = {
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer = { "OverlappedItemsContainer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, OverlappedItemsContainer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer_MetaData)) }; // 889368574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_HoldNormalizedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ReplicationSampleCharacter" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_HoldNormalizedThreshold = { "HoldNormalizedThreshold", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, HoldNormalizedThreshold), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_HoldNormalizedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_HoldNormalizedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingImpulseIntense_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ReplicationSampleCharacter" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingImpulseIntense = { "ShootingImpulseIntense", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, ShootingImpulseIntense), METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingImpulseIntense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingImpulseIntense_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_PickupAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_PickupAction = { "PickupAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, PickupAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_PickupAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_PickupAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_SelectItemAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_SelectItemAction = { "SelectItemAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, SelectItemAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_SelectItemAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_SelectItemAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ReplicationSampleCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReplicationSampleCharacter, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReplicationSampleCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_TriggerSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingStaticMeshClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_OverlappedItemsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_HoldNormalizedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootingImpulseIntense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_PickupAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_SelectItemAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicationSampleCharacter_Statics::NewProp_ShootAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicationSampleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicationSampleCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicationSampleCharacter_Statics::ClassParams = {
		&AReplicationSampleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReplicationSampleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReplicationSampleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicationSampleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicationSampleCharacter()
	{
		if (!Z_Registration_Info_UClass_AReplicationSampleCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplicationSampleCharacter.OuterSingleton, Z_Construct_UClass_AReplicationSampleCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReplicationSampleCharacter.OuterSingleton;
	}
	template<> REPLICATIONSAMPLE_API UClass* StaticClass<AReplicationSampleCharacter>()
	{
		return AReplicationSampleCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicationSampleCharacter);
	AReplicationSampleCharacter::~AReplicationSampleCharacter() {}
	struct Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ScriptStructInfo[] = {
		{ FOverlapElem::StaticStruct, Z_Construct_UScriptStruct_FOverlapElem_Statics::NewStructOps, TEXT("OverlapElem"), &Z_Registration_Info_UScriptStruct_OverlapElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlapElem), 889368574U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReplicationSampleCharacter, AReplicationSampleCharacter::StaticClass, TEXT("AReplicationSampleCharacter"), &Z_Registration_Info_UClass_AReplicationSampleCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicationSampleCharacter), 4036506608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_3803581186(TEXT("/Script/ReplicationSample"),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
