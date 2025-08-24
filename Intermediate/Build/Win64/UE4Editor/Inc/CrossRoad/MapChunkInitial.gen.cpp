// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/MapChunkInitial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapChunkInitial() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_AMapChunkInitial_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_AMapChunkInitial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void AMapChunkInitial::StaticRegisterNativesAMapChunkInitial()
	{
	}
	UClass* Z_Construct_UClass_AMapChunkInitial_NoRegister()
	{
		return AMapChunkInitial::StaticClass();
	}
	struct Z_Construct_UClass_AMapChunkInitial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapChunkInitial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapChunkInitial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapChunkInitial.h" },
		{ "ModuleRelativePath", "MapChunkInitial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapChunkInitial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapChunkInitial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapChunkInitial_Statics::ClassParams = {
		&AMapChunkInitial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapChunkInitial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapChunkInitial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapChunkInitial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapChunkInitial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapChunkInitial, 1903319087);
	template<> CROSSROAD_API UClass* StaticClass<AMapChunkInitial>()
	{
		return AMapChunkInitial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapChunkInitial(Z_Construct_UClass_AMapChunkInitial, &AMapChunkInitial::StaticClass, TEXT("/Script/CrossRoad"), TEXT("AMapChunkInitial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapChunkInitial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
