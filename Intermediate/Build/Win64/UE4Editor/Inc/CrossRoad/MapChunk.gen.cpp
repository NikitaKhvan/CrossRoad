// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/MapChunk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapChunk() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_AMapChunk_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_AMapChunk();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void AMapChunk::StaticRegisterNativesAMapChunk()
	{
	}
	UClass* Z_Construct_UClass_AMapChunk_NoRegister()
	{
		return AMapChunk::StaticClass();
	}
	struct Z_Construct_UClass_AMapChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapChunk.h" },
		{ "ModuleRelativePath", "MapChunk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapChunk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMapChunk_Statics::ClassParams = {
		&AMapChunk::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMapChunk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapChunk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapChunk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMapChunk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMapChunk, 1035488385);
	template<> CROSSROAD_API UClass* StaticClass<AMapChunk>()
	{
		return AMapChunk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapChunk(Z_Construct_UClass_AMapChunk, &AMapChunk::StaticClass, TEXT("/Script/CrossRoad"), TEXT("AMapChunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapChunk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
