// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CROSSROAD_FroggoCharacter_generated_h
#error "FroggoCharacter.generated.h already included, missing '#pragma once' in FroggoCharacter.h"
#endif
#define CROSSROAD_FroggoCharacter_generated_h

#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFroggoCharacter(); \
	friend struct Z_Construct_UClass_AFroggoCharacter_Statics; \
public: \
	DECLARE_CLASS(AFroggoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AFroggoCharacter)


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFroggoCharacter(); \
	friend struct Z_Construct_UClass_AFroggoCharacter_Statics; \
public: \
	DECLARE_CLASS(AFroggoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AFroggoCharacter)


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFroggoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFroggoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFroggoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFroggoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFroggoCharacter(AFroggoCharacter&&); \
	NO_API AFroggoCharacter(const AFroggoCharacter&); \
public:


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFroggoCharacter(AFroggoCharacter&&); \
	NO_API AFroggoCharacter(const AFroggoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFroggoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFroggoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFroggoCharacter)


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProcessedComponents() { return STRUCT_OFFSET(AFroggoCharacter, ProcessedComponents); }


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_10_PROLOG
#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_INCLASS \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_FroggoCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class AFroggoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_FroggoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
