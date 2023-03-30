// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerStart;
class ASpawnableItemBase;
class UMaterialInstance;
struct FInteractableItemEntity;
#ifdef REPLICATIONSAMPLE_InteractionPlayerController_generated_h
#error "InteractionPlayerController.generated.h already included, missing '#pragma once' in InteractionPlayerController.h"
#endif
#define REPLICATIONSAMPLE_InteractionPlayerController_generated_h

#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_12_DELEGATE \
struct _Script_ReplicationSample_eventItemsContainerStateUpdate_Parms \
{ \
	TEnumAsByte<EInteractableItemType> EntityType; \
	int32 UpdatedAmount; \
}; \
static inline void FItemsContainerStateUpdate_DelegateWrapper(const FMulticastScriptDelegate& ItemsContainerStateUpdate, EInteractableItemType EntityType, int32 UpdatedAmount) \
{ \
	_Script_ReplicationSample_eventItemsContainerStateUpdate_Parms Parms; \
	Parms.EntityType=EntityType; \
	Parms.UpdatedAmount=UpdatedAmount; \
	ItemsContainerStateUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_13_DELEGATE \
struct _Script_ReplicationSample_eventItemsContainerSelectionOperate_Parms \
{ \
	int32 NewIndex; \
}; \
static inline void FItemsContainerSelectionOperate_DelegateWrapper(const FMulticastScriptDelegate& ItemsContainerSelectionOperate, int32 NewIndex) \
{ \
	_Script_ReplicationSample_eventItemsContainerSelectionOperate_Parms Parms; \
	Parms.NewIndex=NewIndex; \
	ItemsContainerSelectionOperate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_SPARSE_DATA
#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_RPC_WRAPPERS \
	virtual void SwitchSelected_Implementation(bool bNext) const; \
	virtual void OperateItemsContainer_Implementation(EInteractableItemType operateEntityType, int32 accum) const; \
	virtual void SetupEntitiesRepresentation_Implementation(TArray<FInteractableItemEntity> const& Data); \
	virtual void SetInitialSpawnPoint_Implementation(APlayerStart* Start); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSelectedSpawnActor); \
	DECLARE_FUNCTION(execGetSelectedType); \
	DECLARE_FUNCTION(execGetSelectedMaterialInstance); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execSwitchSelected); \
	DECLARE_FUNCTION(execOperateItemsContainer); \
	DECLARE_FUNCTION(execGetItemsRepresentation); \
	DECLARE_FUNCTION(execSetupEntitiesRepresentation); \
	DECLARE_FUNCTION(execSetInitialSpawnPoint); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSelected);


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SwitchSelected_Implementation(bool bNext) const; \
	virtual void OperateItemsContainer_Implementation(EInteractableItemType operateEntityType, int32 accum) const; \
	virtual void SetupEntitiesRepresentation_Implementation(TArray<FInteractableItemEntity> const& Data); \
	virtual void SetInitialSpawnPoint_Implementation(APlayerStart* Start); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSelectedSpawnActor); \
	DECLARE_FUNCTION(execGetSelectedType); \
	DECLARE_FUNCTION(execGetSelectedMaterialInstance); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execSwitchSelected); \
	DECLARE_FUNCTION(execOperateItemsContainer); \
	DECLARE_FUNCTION(execGetItemsRepresentation); \
	DECLARE_FUNCTION(execSetupEntitiesRepresentation); \
	DECLARE_FUNCTION(execSetInitialSpawnPoint); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSelected);


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_ACCESSORS
#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionPlayerController(); \
	friend struct Z_Construct_UClass_AInteractionPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInteractionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(AInteractionPlayerController) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemsContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemsContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionPlayerController(); \
	friend struct Z_Construct_UClass_AInteractionPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInteractionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(AInteractionPlayerController) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemsContainer=NETFIELD_REP_START, \
		NETFIELD_REP_END=ItemsContainer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionPlayerController(AInteractionPlayerController&&); \
	NO_API AInteractionPlayerController(const AInteractionPlayerController&); \
public: \
	NO_API virtual ~AInteractionPlayerController();


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionPlayerController(AInteractionPlayerController&&); \
	NO_API AInteractionPlayerController(const AInteractionPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionPlayerController) \
	NO_API virtual ~AInteractionPlayerController();


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_15_PROLOG
#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_RPC_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_INCLASS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATIONSAMPLE_API UClass* StaticClass<class AInteractionPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ReplicationSample_Source_ReplicationSample_InteractionPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
