// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/CrossTheRoadMenuGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossTheRoadMenuGameModeBase() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossTheRoadMenuGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void ACrossTheRoadMenuGameModeBase::StaticRegisterNativesACrossTheRoadMenuGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_NoRegister()
	{
		return ACrossTheRoadMenuGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrossTheRoadMenuGameModeBase.h" },
		{ "ModuleRelativePath", "CrossTheRoadMenuGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossTheRoadMenuGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::ClassParams = {
		&ACrossTheRoadMenuGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossTheRoadMenuGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossTheRoadMenuGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossTheRoadMenuGameModeBase, 458224450);
	template<> CROSSROAD_API UClass* StaticClass<ACrossTheRoadMenuGameModeBase>()
	{
		return ACrossTheRoadMenuGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossTheRoadMenuGameModeBase(Z_Construct_UClass_ACrossTheRoadMenuGameModeBase, &ACrossTheRoadMenuGameModeBase::StaticClass, TEXT("/Script/CrossRoad"), TEXT("ACrossTheRoadMenuGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossTheRoadMenuGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
