// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/CrossRoadGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossRoadGameModeBase() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossRoadGameModeBase_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossRoadGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void ACrossRoadGameModeBase::StaticRegisterNativesACrossRoadGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACrossRoadGameModeBase_NoRegister()
	{
		return ACrossRoadGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACrossRoadGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossRoadGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossRoadGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrossRoadGameModeBase.h" },
		{ "ModuleRelativePath", "CrossRoadGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossRoadGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossRoadGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossRoadGameModeBase_Statics::ClassParams = {
		&ACrossRoadGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossRoadGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossRoadGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossRoadGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossRoadGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossRoadGameModeBase, 1599619145);
	template<> CROSSROAD_API UClass* StaticClass<ACrossRoadGameModeBase>()
	{
		return ACrossRoadGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossRoadGameModeBase(Z_Construct_UClass_ACrossRoadGameModeBase, &ACrossRoadGameModeBase::StaticClass, TEXT("/Script/CrossRoad"), TEXT("ACrossRoadGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossRoadGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
