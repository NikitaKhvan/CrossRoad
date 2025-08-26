// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_CrossPauseWidget_generated_h
#error "CrossPauseWidget.generated.h already included, missing '#pragma once' in CrossPauseWidget.h"
#endif
#define CROSSROAD_CrossPauseWidget_generated_h

#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMainMenu); \
	DECLARE_FUNCTION(execOnRestart); \
	DECLARE_FUNCTION(execOnClearPause);


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMainMenu); \
	DECLARE_FUNCTION(execOnRestart); \
	DECLARE_FUNCTION(execOnClearPause);


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrossPauseWidget(); \
	friend struct Z_Construct_UClass_UCrossPauseWidget_Statics; \
public: \
	DECLARE_CLASS(UCrossPauseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossPauseWidget)


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCrossPauseWidget(); \
	friend struct Z_Construct_UClass_UCrossPauseWidget_Statics; \
public: \
	DECLARE_CLASS(UCrossPauseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UCrossPauseWidget)


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossPauseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossPauseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossPauseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossPauseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossPauseWidget(UCrossPauseWidget&&); \
	NO_API UCrossPauseWidget(const UCrossPauseWidget&); \
public:


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossPauseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrossPauseWidget(UCrossPauseWidget&&); \
	NO_API UCrossPauseWidget(const UCrossPauseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossPauseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossPauseWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossPauseWidget)


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClearPauseButton() { return STRUCT_OFFSET(UCrossPauseWidget, ClearPauseButton); } \
	FORCEINLINE static uint32 __PPO__RestartButton() { return STRUCT_OFFSET(UCrossPauseWidget, RestartButton); } \
	FORCEINLINE static uint32 __PPO__MainMenuButton() { return STRUCT_OFFSET(UCrossPauseWidget, MainMenuButton); } \
	FORCEINLINE static uint32 __PPO__MenuTitle() { return STRUCT_OFFSET(UCrossPauseWidget, MenuTitle); }


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_15_PROLOG
#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_INCLASS \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_CrossPauseWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class UCrossPauseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_CrossPauseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
