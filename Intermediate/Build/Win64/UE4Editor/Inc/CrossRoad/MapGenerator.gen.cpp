// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/MapGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapGenerator() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_AMapGenerator_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_AMapGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSROAD_API UClass* Z_Construct_UClass_AMapChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AMapGenerator::StaticRegisterNativesAMapGenerator()
	{
	}
	UClass* Z_Construct_UClass_AMapGenerator_NoRegister()
	{
		return AMapGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AMapGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChunkClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedRoads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedRoads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapGenerator.h" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_ChunkClass_MetaData[] = {
		{ "Category", "MapGenerator" },
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_ChunkClass = { "ChunkClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, ChunkClass), Z_Construct_UClass_AMapChunk_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_ChunkClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_ChunkClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads_Inner = { "SpawnedRoads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads_MetaData[] = {
		{ "ModuleRelativePath", "MapGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads = { "SpawnedRoads", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapGenerator, SpawnedRoads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_ChunkClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapGenerator_Statics::NewProp_SpawnedRoads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapGenerator_Statics::ClassParams = {
		&AMapGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMapGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapGenerator, 2431426202);
	template<> CROSSROAD_API UClass* StaticClass<AMapGenerator>()
	{
		return AMapGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapGenerator(Z_Construct_UClass_AMapGenerator, &AMapGenerator::StaticClass, TEXT("/Script/CrossRoad"), TEXT("AMapGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
