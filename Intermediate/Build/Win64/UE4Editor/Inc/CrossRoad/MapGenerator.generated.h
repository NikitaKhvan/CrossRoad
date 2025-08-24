// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_MapGenerator_generated_h
#error "MapGenerator.generated.h already included, missing '#pragma once' in MapGenerator.h"
#endif
#define CROSSROAD_MapGenerator_generated_h

#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_RPC_WRAPPERS
#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapGenerator(); \
	friend struct Z_Construct_UClass_AMapGenerator_Statics; \
public: \
	DECLARE_CLASS(AMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMapGenerator)


#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMapGenerator(); \
	friend struct Z_Construct_UClass_AMapGenerator_Statics; \
public: \
	DECLARE_CLASS(AMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMapGenerator)


#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGenerator(AMapGenerator&&); \
	NO_API AMapGenerator(const AMapGenerator&); \
public:


#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapGenerator(AMapGenerator&&); \
	NO_API AMapGenerator(const AMapGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapGenerator)


#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChunkClass() { return STRUCT_OFFSET(AMapGenerator, ChunkClass); } \
	FORCEINLINE static uint32 __PPO__ChunkClassInitial() { return STRUCT_OFFSET(AMapGenerator, ChunkClassInitial); }


#define CrossRoad_Source_CrossRoad_MapGenerator_h_12_PROLOG
#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_INCLASS \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_MapGenerator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MapGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class AMapGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_MapGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
