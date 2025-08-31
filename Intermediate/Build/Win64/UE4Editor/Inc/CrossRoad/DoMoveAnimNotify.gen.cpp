// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/DoMoveAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoMoveAnimNotify() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_UDoMoveAnimNotify_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_UDoMoveAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void UDoMoveAnimNotify::StaticRegisterNativesUDoMoveAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UDoMoveAnimNotify_NoRegister()
	{
		return UDoMoveAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UDoMoveAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoMoveAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoMoveAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DoMoveAnimNotify.h" },
		{ "ModuleRelativePath", "DoMoveAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoMoveAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoMoveAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoMoveAnimNotify_Statics::ClassParams = {
		&UDoMoveAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDoMoveAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoMoveAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoMoveAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoMoveAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoMoveAnimNotify, 304428718);
	template<> CROSSROAD_API UClass* StaticClass<UDoMoveAnimNotify>()
	{
		return UDoMoveAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoMoveAnimNotify(Z_Construct_UClass_UDoMoveAnimNotify, &UDoMoveAnimNotify::StaticClass, TEXT("/Script/CrossRoad"), TEXT("UDoMoveAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoMoveAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
