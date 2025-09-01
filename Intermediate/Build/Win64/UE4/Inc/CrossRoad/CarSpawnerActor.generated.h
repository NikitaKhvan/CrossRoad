// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_CarSpawnerActor_generated_h
#error "CarSpawnerActor.generated.h already included, missing '#pragma once' in CarSpawnerActor.h"
#endif
#define CROSSROAD_CarSpawnerActor_generated_h

#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_RPC_WRAPPERS
#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarSpawnerActor(); \
	friend struct Z_Construct_UClass_ACarSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(ACarSpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarSpawnerActor)


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACarSpawnerActor(); \
	friend struct Z_Construct_UClass_ACarSpawnerActor_Statics; \
public: \
	DECLARE_CLASS(ACarSpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(ACarSpawnerActor)


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarSpawnerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarSpawnerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarSpawnerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarSpawnerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarSpawnerActor(ACarSpawnerActor&&); \
	NO_API ACarSpawnerActor(const ACarSpawnerActor&); \
public:


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarSpawnerActor(ACarSpawnerActor&&); \
	NO_API ACarSpawnerActor(const ACarSpawnerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarSpawnerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarSpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarSpawnerActor)


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorToSpawn() { return STRUCT_OFFSET(ACarSpawnerActor, ActorToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnInterval() { return STRUCT_OFFSET(ACarSpawnerActor, SpawnInterval); }


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_11_PROLOG
#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_INCLASS \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CarSpawnerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class ACarSpawnerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_CarSpawnerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
