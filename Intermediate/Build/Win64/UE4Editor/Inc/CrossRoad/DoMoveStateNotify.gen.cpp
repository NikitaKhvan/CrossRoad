// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/DoMoveStateNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoMoveStateNotify() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_UDoMoveStateNotify_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_UDoMoveStateNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
// End Cross Module References
	void UDoMoveStateNotify::StaticRegisterNativesUDoMoveStateNotify()
	{
	}
	UClass* Z_Construct_UClass_UDoMoveStateNotify_NoRegister()
	{
		return UDoMoveStateNotify::StaticClass();
	}
	struct Z_Construct_UClass_UDoMoveStateNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoMoveStateNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoMoveStateNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DoMoveStateNotify.h" },
		{ "ModuleRelativePath", "DoMoveStateNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoMoveStateNotify_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// ????? ????????\n" },
		{ "ModuleRelativePath", "DoMoveStateNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoMoveStateNotify_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoMoveStateNotify, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_UDoMoveStateNotify_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoMoveStateNotify_Statics::NewProp_MoveDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoMoveStateNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoMoveStateNotify_Statics::NewProp_MoveDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoMoveStateNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoMoveStateNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoMoveStateNotify_Statics::ClassParams = {
		&UDoMoveStateNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoMoveStateNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoMoveStateNotify_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDoMoveStateNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoMoveStateNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoMoveStateNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoMoveStateNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoMoveStateNotify, 3268150877);
	template<> CROSSROAD_API UClass* StaticClass<UDoMoveStateNotify>()
	{
		return UDoMoveStateNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoMoveStateNotify(Z_Construct_UClass_UDoMoveStateNotify, &UDoMoveStateNotify::StaticClass, TEXT("/Script/CrossRoad"), TEXT("UDoMoveStateNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoMoveStateNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
