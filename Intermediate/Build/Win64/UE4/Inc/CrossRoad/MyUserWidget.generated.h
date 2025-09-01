// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_MyUserWidget_generated_h
#error "MyUserWidget.generated.h already included, missing '#pragma once' in MyUserWidget.h"
#endif
#define CROSSROAD_MyUserWidget_generated_h

#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoadsCount);


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoadsCount);


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public:


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget)


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define CrossRoad_Source_CrossRoad_MyUserWidget_h_12_PROLOG
#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_INCLASS \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_MyUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MyUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class UMyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_MyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
