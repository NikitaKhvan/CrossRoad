// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_CrossMenuWidget_generated_h
#error "CrossMenuWidget.generated.h already included, missing '#pragma once' in CrossMenuWidget.h"
#endif
#define CROSSROAD_CrossMenuWidget_generated_h

#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitGame); \
	DECLARE_FUNCTION(execOnGameStart);


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitGame); \
	DECLARE_FUNCTION(execOnGameStart);


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrossMenuWidget(); \
	friend struct Z_Construct_UClass_UCrossMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCrossMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossMenuWidget)


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCrossMenuWidget(); \
	friend struct Z_Construct_UClass_UCrossMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCrossMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossMenuWidget)


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossMenuWidget(UCrossMenuWidget&&); \
	NO_API UCrossMenuWidget(const UCrossMenuWidget&); \
public:


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossMenuWidget(UCrossMenuWidget&&); \
	NO_API UCrossMenuWidget(const UCrossMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossMenuWidget)


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGameButton() { return STRUCT_OFFSET(UCrossMenuWidget, StartGameButton); } \
	FORCEINLINE static uint32 __PPO__ExitGameButton() { return STRUCT_OFFSET(UCrossMenuWidget, ExitGameButton); }


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_16_PROLOG
#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_INCLASS \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class UCrossMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_CrossMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
