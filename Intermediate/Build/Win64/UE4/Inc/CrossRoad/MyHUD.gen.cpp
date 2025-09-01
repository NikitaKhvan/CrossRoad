// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/MyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_AMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	CROSSROAD_API UEnum* Z_Construct_UEnum_CrossRoad_ECrossTheRoad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameWidgets_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameWidgets_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_ValueProp = { "GameWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_Key_KeyProp = { "GameWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CrossRoad_ECrossTheRoad, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets = { "GameWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, GameWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_PlayerHUDWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_PlayerHUDWidget = { "PlayerHUDWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, PlayerHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_PlayerHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_PlayerHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::NewProp_PauseWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyHUD_Statics::NewProp_PauseWidget = { "PauseWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyHUD, PauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::NewProp_PauseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::NewProp_PauseWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_GameWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_PlayerHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyHUD_Statics::NewProp_PauseWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHUD, 3099754180);
	template<> CROSSROAD_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHUD(Z_Construct_UClass_AMyHUD, &AMyHUD::StaticClass, TEXT("/Script/CrossRoad"), TEXT("AMyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
