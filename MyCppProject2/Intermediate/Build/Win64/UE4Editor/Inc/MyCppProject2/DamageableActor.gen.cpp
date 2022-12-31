// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCppProject2/DamageableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageableActor() {}
// Cross Module References
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_ADamageableActor_NoRegister();
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_ADamageableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCppProject2();
// End Cross Module References
	static FName NAME_ADamageableActor_BpOnDestroyObj = FName(TEXT("BpOnDestroyObj"));
	void ADamageableActor::BpOnDestroyObj()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADamageableActor_BpOnDestroyObj),NULL);
	}
	static FName NAME_ADamageableActor_BpOnTakeDamage = FName(TEXT("BpOnTakeDamage"));
	void ADamageableActor::BpOnTakeDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADamageableActor_BpOnTakeDamage),NULL);
	}
	void ADamageableActor::StaticRegisterNativesADamageableActor()
	{
	}
	struct Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "Comment", "//creando un event para blueprints\n" },
		{ "ModuleRelativePath", "DamageableActor.h" },
		{ "ToolTip", "creando un event para blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageableActor, nullptr, "BpOnDestroyObj", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "Comment", "//creando un event para blueprints\n" },
		{ "ModuleRelativePath", "DamageableActor.h" },
		{ "ToolTip", "creando un event para blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageableActor, nullptr, "BpOnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADamageableActor_NoRegister()
	{
		return ADamageableActor::StaticClass();
	}
	struct Z_Construct_UClass_ADamageableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCppProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageableActor_BpOnDestroyObj, "BpOnDestroyObj" }, // 4169453236
		{ &Z_Construct_UFunction_ADamageableActor_BpOnTakeDamage, "BpOnTakeDamage" }, // 4229994882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageableActor.h" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageableActor_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageableActor, Health), METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageableActor_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageableActor_Statics::ClassParams = {
		&ADamageableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADamageableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageableActor, 3634973456);
	template<> MYCPPPROJECT2_API UClass* StaticClass<ADamageableActor>()
	{
		return ADamageableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageableActor(Z_Construct_UClass_ADamageableActor, &ADamageableActor::StaticClass, TEXT("/Script/MyCppProject2"), TEXT("ADamageableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
