// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplicationSampleCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef REPLICATIONSAMPLE_ReplicationSampleCharacter_generated_h
#error "ReplicationSampleCharacter.generated.h already included, missing '#pragma once' in ReplicationSampleCharacter.h"
#endif
#define REPLICATIONSAMPLE_ReplicationSampleCharacter_generated_h

#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverlapElem_Statics; \
	REPLICATIONSAMPLE_API static class UScriptStruct* StaticStruct();


template<> REPLICATIONSAMPLE_API UScriptStruct* StaticStruct<struct FOverlapElem>();

#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_SPARSE_DATA
#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_RPC_WRAPPERS \
	virtual bool Shoot_Server_Validate(FVector const& , const float ); \
	virtual void Shoot_Server_Implementation(FVector const& ForwardDirection, const float HoldTime_InSec); \
 \
	DECLARE_FUNCTION(execOnTriggerSphereEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerSphereBeginOverlap); \
	DECLARE_FUNCTION(execShoot_Server);


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Shoot_Server_Validate(FVector const& , const float ); \
	virtual void Shoot_Server_Implementation(FVector const& ForwardDirection, const float HoldTime_InSec); \
 \
	DECLARE_FUNCTION(execOnTriggerSphereEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerSphereBeginOverlap); \
	DECLARE_FUNCTION(execShoot_Server);


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_ACCESSORS
#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_CALLBACK_WRAPPERS
#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplicationSampleCharacter(); \
	friend struct Z_Construct_UClass_AReplicationSampleCharacter_Statics; \
public: \
	DECLARE_CLASS(AReplicationSampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(AReplicationSampleCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappedItemsContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappedItemsContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAReplicationSampleCharacter(); \
	friend struct Z_Construct_UClass_AReplicationSampleCharacter_Statics; \
public: \
	DECLARE_CLASS(AReplicationSampleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(AReplicationSampleCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappedItemsContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappedItemsContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReplicationSampleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplicationSampleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplicationSampleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplicationSampleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplicationSampleCharacter(AReplicationSampleCharacter&&); \
	NO_API AReplicationSampleCharacter(const AReplicationSampleCharacter&); \
public: \
	NO_API virtual ~AReplicationSampleCharacter();


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplicationSampleCharacter(AReplicationSampleCharacter&&); \
	NO_API AReplicationSampleCharacter(const AReplicationSampleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplicationSampleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplicationSampleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplicationSampleCharacter) \
	NO_API virtual ~AReplicationSampleCharacter();


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_37_PROLOG
#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_RPC_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_CALLBACK_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_INCLASS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_CALLBACK_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_INCLASS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATIONSAMPLE_API UClass* StaticClass<class AReplicationSampleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ReplicationSample_Source_ReplicationSample_ReplicationSampleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
