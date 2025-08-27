// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/CrossMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossMenuWidget() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossMenuWidget_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCrossMenuWidget::execOnExitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossMenuWidget::execOnGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStart();
		P_NATIVE_END;
	}
	void UCrossMenuWidget::StaticRegisterNativesUCrossMenuWidget()
	{
		UClass* Class = UCrossMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExitGame", &UCrossMenuWidget::execOnExitGame },
			{ "OnGameStart", &UCrossMenuWidget::execOnGameStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrossMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossMenuWidget, nullptr, "OnExitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrossMenuWidget_OnExitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrossMenuWidget_OnExitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrossMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossMenuWidget, nullptr, "OnGameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrossMenuWidget_OnGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrossMenuWidget_OnGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrossMenuWidget_NoRegister()
	{
		return UCrossMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCrossMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartBTN_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartBTN;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitBTN_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitBTN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrossMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrossMenuWidget_OnExitGame, "OnExitGame" }, // 3985965145
		{ &Z_Construct_UFunction_UCrossMenuWidget_OnGameStart, "OnGameStart" }, // 1423193754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrossMenuWidget.h" },
		{ "ModuleRelativePath", "CrossMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_StartBTN_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_StartBTN = { "StartBTN", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossMenuWidget, StartBTN), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_StartBTN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_StartBTN_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_QuitBTN_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_QuitBTN = { "QuitBTN", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossMenuWidget, QuitBTN), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_QuitBTN_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_QuitBTN_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_StartBTN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossMenuWidget_Statics::NewProp_QuitBTN,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrossMenuWidget_Statics::ClassParams = {
		&UCrossMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrossMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrossMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrossMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrossMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrossMenuWidget, 453319154);
	template<> CROSSROAD_API UClass* StaticClass<UCrossMenuWidget>()
	{
		return UCrossMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrossMenuWidget(Z_Construct_UClass_UCrossMenuWidget, &UCrossMenuWidget::StaticClass, TEXT("/Script/CrossRoad"), TEXT("UCrossMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
