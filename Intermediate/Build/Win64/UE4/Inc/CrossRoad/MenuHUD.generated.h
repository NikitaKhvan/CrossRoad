// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_MenuHUD_generated_h
#error "MenuHUD.generated.h already included, missing '#pragma once' in MenuHUD.h"
#endif
#define CROSSROAD_MenuHUD_generated_h

#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_RPC_WRAPPERS
#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuHUD(); \
	friend struct Z_Construct_UClass_AMenuHUD_Statics; \
public: \
	DECLARE_CLASS(AMenuHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMenuHUD)


#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMenuHUD(); \
	friend struct Z_Construct_UClass_AMenuHUD_Statics; \
public: \
	DECLARE_CLASS(AMenuHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMenuHUD)


#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenuHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuHUD(AMenuHUD&&); \
	NO_API AMenuHUD(const AMenuHUD&); \
public:


#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMenuHUD(AMenuHUD&&); \
	NO_API AMenuHUD(const AMenuHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenuHUD)


#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuWidgetClass() { return STRUCT_OFFSET(AMenuHUD, MenuWidgetClass); }


#define CrossRoad_Source_CrossRoad_MenuHUD_h_12_PROLOG
#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_INCLASS \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_MenuHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MenuHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class AMenuHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_MenuHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
