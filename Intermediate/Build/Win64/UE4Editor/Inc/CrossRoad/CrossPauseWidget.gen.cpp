// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossRoad/CrossPauseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossPauseWidget() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossPauseWidget_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_UCrossPauseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CrossRoad();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCrossPauseWidget::execOnMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossPauseWidget::execOnRestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrossPauseWidget::execOnClearPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClearPause();
		P_NATIVE_END;
	}
	void UCrossPauseWidget::StaticRegisterNativesUCrossPauseWidget()
	{
		UClass* Class = UCrossPauseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClearPause", &UCrossPauseWidget::execOnClearPause },
			{ "OnMainMenu", &UCrossPauseWidget::execOnMainMenu },
			{ "OnRestart", &UCrossPauseWidget::execOnRestart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossPauseWidget, nullptr, "OnClearPause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrossPauseWidget_OnClearPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrossPauseWidget_OnClearPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossPauseWidget, nullptr, "OnMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrossPauseWidget, nullptr, "OnRestart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrossPauseWidget_OnRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrossPauseWidget_OnRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrossPauseWidget_NoRegister()
	{
		return UCrossPauseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCrossPauseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearPauseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClearPauseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrossPauseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossRoad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrossPauseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrossPauseWidget_OnClearPause, "OnClearPause" }, // 2205861272
		{ &Z_Construct_UFunction_UCrossPauseWidget_OnMainMenu, "OnMainMenu" }, // 2026197168
		{ &Z_Construct_UFunction_UCrossPauseWidget_OnRestart, "OnRestart" }, // 1360206856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPauseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrossPauseWidget.h" },
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_ClearPauseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_ClearPauseButton = { "ClearPauseButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossPauseWidget, ClearPauseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_ClearPauseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_ClearPauseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossPauseWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_RestartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossPauseWidget, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MenuTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrossPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MenuTitle = { "MenuTitle", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrossPauseWidget, MenuTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MenuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MenuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrossPauseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_ClearPauseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_RestartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrossPauseWidget_Statics::NewProp_MenuTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrossPauseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossPauseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrossPauseWidget_Statics::ClassParams = {
		&UCrossPauseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrossPauseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrossPauseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrossPauseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrossPauseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrossPauseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrossPauseWidget, 3084546543);
	template<> CROSSROAD_API UClass* StaticClass<UCrossPauseWidget>()
	{
		return UCrossPauseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrossPauseWidget(Z_Construct_UClass_UCrossPauseWidget, &UCrossPauseWidget::StaticClass, TEXT("/Script/CrossRoad"), TEXT("UCrossPauseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrossPauseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
