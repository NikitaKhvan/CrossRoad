// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_CrossGameInstance_generated_h
#error "CrossGameInstance.generated.h already included, missing '#pragma once' in CrossGameInstance.h"
#endif
#define CROSSROAD_CrossGameInstance_generated_h

#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_RPC_WRAPPERS
#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrossGameInstance(); \
	friend struct Z_Construct_UClass_UCrossGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCrossGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossGameInstance)


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCrossGameInstance(); \
	friend struct Z_Construct_UClass_UCrossGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCrossGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossGameInstance)


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossGameInstance(UCrossGameInstance&&); \
	NO_API UCrossGameInstance(const UCrossGameInstance&); \
public:


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossGameInstance(UCrossGameInstance&&); \
	NO_API UCrossGameInstance(const UCrossGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossGameInstance)


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainMenuLevelName() { return STRUCT_OFFSET(UCrossGameInstance, MainMenuLevelName); } \
	FORCEINLINE static uint32 __PPO__StartLevelName() { return STRUCT_OFFSET(UCrossGameInstance, StartLevelName); }


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_20_PROLOG
#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_INCLASS \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossGameInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class UCrossGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_CrossGameInstance_h


#define FOREACH_ENUM_ECROSSTHEROAD(op) \
	op(ECrossTheRoad::WaitingToStart) \
	op(ECrossTheRoad::InProgress) \
	op(ECrossTheRoad::Pause) \
	op(ECrossTheRoad::GameOver) 

enum class ECrossTheRoad : uint8;
template<> CROSSROAD_API UEnum* StaticEnum<ECrossTheRoad>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
