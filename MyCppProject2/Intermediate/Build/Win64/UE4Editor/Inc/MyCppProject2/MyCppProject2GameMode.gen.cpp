// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCppProject2/MyCppProject2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCppProject2GameMode() {}
// Cross Module References
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_AMyCppProject2GameMode_NoRegister();
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_AMyCppProject2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyCppProject2();
// End Cross Module References
	void AMyCppProject2GameMode::StaticRegisterNativesAMyCppProject2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyCppProject2GameMode_NoRegister()
	{
		return AMyCppProject2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyCppProject2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCppProject2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCppProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyCppProject2GameMode.h" },
		{ "ModuleRelativePath", "MyCppProject2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCppProject2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCppProject2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCppProject2GameMode_Statics::ClassParams = {
		&AMyCppProject2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCppProject2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCppProject2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCppProject2GameMode, 3196000584);
	template<> MYCPPPROJECT2_API UClass* StaticClass<AMyCppProject2GameMode>()
	{
		return AMyCppProject2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCppProject2GameMode(Z_Construct_UClass_AMyCppProject2GameMode, &AMyCppProject2GameMode::StaticClass, TEXT("/Script/MyCppProject2"), TEXT("AMyCppProject2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCppProject2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
