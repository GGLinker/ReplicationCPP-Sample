// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UsableItems/UsableItemsContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASpawnableItemBase;
class UMaterialInstance;
struct FInteractableItemEntity;
#ifdef REPLICATIONSAMPLE_UsableItemsContainer_generated_h
#error "UsableItemsContainer.generated.h already included, missing '#pragma once' in UsableItemsContainer.h"
#endif
#define REPLICATIONSAMPLE_UsableItemsContainer_generated_h

#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableItemEntity_Statics; \
	REPLICATIONSAMPLE_API static class UScriptStruct* StaticStruct();


template<> REPLICATIONSAMPLE_API UScriptStruct* StaticStruct<struct FInteractableItemEntity>();

#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_SPARSE_DATA
#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedSpawnActor); \
	DECLARE_FUNCTION(execGetSelectedMaterial); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSwitchSelected); \
	DECLARE_FUNCTION(execOperateEntities); \
	DECLARE_FUNCTION(execGetRepresentation); \
	DECLARE_FUNCTION(execSetParams);


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedSpawnActor); \
	DECLARE_FUNCTION(execGetSelectedMaterial); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSwitchSelected); \
	DECLARE_FUNCTION(execOperateEntities); \
	DECLARE_FUNCTION(execGetRepresentation); \
	DECLARE_FUNCTION(execSetParams);


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_ACCESSORS
#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUsableItemsContainer(); \
	friend struct Z_Construct_UClass_UsableItemsContainer_Statics; \
public: \
	DECLARE_CLASS(UsableItemsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(UsableItemsContainer)


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUsableItemsContainer(); \
	friend struct Z_Construct_UClass_UsableItemsContainer_Statics; \
public: \
	DECLARE_CLASS(UsableItemsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplicationSample"), NO_API) \
	DECLARE_SERIALIZER(UsableItemsContainer)


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UsableItemsContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UsableItemsContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UsableItemsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UsableItemsContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UsableItemsContainer(UsableItemsContainer&&); \
	NO_API UsableItemsContainer(const UsableItemsContainer&); \
public: \
	NO_API virtual ~UsableItemsContainer();


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UsableItemsContainer(UsableItemsContainer&&); \
	NO_API UsableItemsContainer(const UsableItemsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UsableItemsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UsableItemsContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UsableItemsContainer) \
	NO_API virtual ~UsableItemsContainer();


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_48_PROLOG
#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_RPC_WRAPPERS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_INCLASS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_SPARSE_DATA \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_ACCESSORS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_INCLASS_NO_PURE_DECLS \
	FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REPLICATIONSAMPLE_API UClass* StaticClass<class UsableItemsContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ReplicationSample_Source_ReplicationSample_UsableItems_UsableItemsContainer_h


#define FOREACH_ENUM_EINTERACTABLEITEMTYPE(op) \
	op(RedHuge) \
	op(GreenMedium) \
	op(BlueSmall) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
