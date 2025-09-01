// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define CROSSROAD_MyPlayerController_generated_h

#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_SPARSE_DATA
#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_RPC_WRAPPERS
#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossRoad"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET
#define CrossRoad_Source_CrossRoad_MyPlayerController_h_15_PROLOG
#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_RPC_WRAPPERS \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_INCLASS \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrossRoad_Source_CrossRoad_MyPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_SPARSE_DATA \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	CrossRoad_Source_CrossRoad_MyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrossRoad_Source_CrossRoad_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
