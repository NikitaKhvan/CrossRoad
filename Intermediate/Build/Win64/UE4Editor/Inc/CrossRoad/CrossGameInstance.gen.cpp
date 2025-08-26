// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/CrossGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossGameInstance() {}
// Cross Module References
	CROSSROAD_API UEnum* Z_Construct_UEnum_CrossRoad_ECrossTheRoad();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossGameInstance_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	static UEnum* ECrossTheRoad_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CrossRoad_ECrossTheRoad, Z_Construct_UPackage__Script_CrossRoad(), TEXT("ECrossTheRoad"));
		}
		return Singleton;
	}
	template<> CROSSROAD_API UEnum* StaticEnum<ECrossTheRoad>()
	{
		return ECrossTheRoad_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrossTheRoad(ECrossTheRoad_StaticEnum, TEXT("/Script/CrossRoad"), TEXT("ECrossTheRoad"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CrossRoad_ECrossTheRoad_Hash() { return 3828396102U; }
	UEnum* Z_Construct_UEnum_CrossRoad_ECrossTheRoad()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CrossRoad();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrossTheRoad"), 0, Get_Z_Construct_UEnum_CrossRoad_ECrossTheRoad_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECrossTheRoad::WaitingToStart", (int64)ECrossTheRoad::WaitingToStart },
				{ "ECrossTheRoad::InProgress", (int64)ECrossTheRoad::InProgress },
				{ "ECrossTheRoad::Pause", (int64)ECrossTheRoad::Pause },
				{ "ECrossTheRoad::GameOver", (int64)ECrossTheRoad::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "GameOver.Comment", "/**\n * \n */" },
				{ "GameOver.Name", "ECrossTheRoad::GameOver" },
				{ "InProgress.Comment", "/**\n * \n */" },
				{ "InProgress.Name", "ECrossTheRoad::InProgress" },
				{ "ModuleRelativePath", "CrossGameInstance.h" },
				{ "Pause.Comment", "/**\n * \n */" },
				{ "Pause.Name", "ECrossTheRoad::Pause" },
				{ "WaitingToStart.Comment", "/**\n * \n */" },
				{ "WaitingToStart.Name", "ECrossTheRoad::WaitingToStart" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CrossRoad,
				nullptr,
				"ECrossTheRoad",
				"ECrossTheRoad",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCrossGameInstance::StaticRegisterNativesUCrossGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UCrossGameInstance_NoRegister()
	{
		return UCrossGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCrossGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MainMenuLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrossGameInstance.h" },
		{ "ModuleRelativePath", "CrossGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_MainMenuLevelName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CrossGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_MainMenuLevelName = { "MainMenuLevelName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossGameInstance, MainMenuLevelName), METADATA_PARAMS(Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_MainMenuLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_MainMenuLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_StartLevelName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "CrossGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_StartLevelName = { "StartLevelName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossGameInstance, StartLevelName), METADATA_PARAMS(Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_StartLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_StartLevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_MainMenuLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossGameInstance_Statics::NewProp_StartLevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrossGameInstance_Statics::ClassParams = {
		&UCrossGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrossGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCrossGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrossGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrossGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrossGameInstance, 3611471643);
	template<> CROSSROAD_API UClass* StaticClass<UCrossGameInstance>()
	{
		return UCrossGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrossGameInstance(Z_Construct_UClass_UCrossGameInstance, &UCrossGameInstance::StaticClass, TEXT("/Script/CrossRoad"), TEXT("UCrossGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
