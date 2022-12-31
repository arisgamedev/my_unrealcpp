// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCppProject2/MyCppProject2Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCppProject2Character() {}
// Cross Module References
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_AMyCppProject2Character_NoRegister();
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_AMyCppProject2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyCppProject2();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYCPPPROJECT2_API UClass* Z_Construct_UClass_ABullet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyCppProject2Character::execServerInstantShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInstantShoot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCppProject2Character::execServerShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerShoot_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMyCppProject2Character_ServerInstantShoot = FName(TEXT("ServerInstantShoot"));
	void AMyCppProject2Character::ServerInstantShoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCppProject2Character_ServerInstantShoot),NULL);
	}
	static FName NAME_AMyCppProject2Character_ServerShoot = FName(TEXT("ServerShoot"));
	void AMyCppProject2Character::ServerShoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyCppProject2Character_ServerShoot),NULL);
	}
	void AMyCppProject2Character::StaticRegisterNativesAMyCppProject2Character()
	{
		UClass* Class = AMyCppProject2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerInstantShoot", &AMyCppProject2Character::execServerInstantShoot },
			{ "ServerShoot", &AMyCppProject2Character::execServerShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCppProject2Character, nullptr, "ServerInstantShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCppProject2Character, nullptr, "ServerShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCppProject2Character_ServerShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCppProject2Character_ServerShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCppProject2Character_NoRegister()
	{
		return AMyCppProject2Character::StaticClass();
	}
	struct Z_Construct_UClass_AMyCppProject2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Bullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstaShotRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstaShotRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCppProject2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCppProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCppProject2Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCppProject2Character_ServerInstantShoot, "ServerInstantShoot" }, // 983426420
		{ &Z_Construct_UFunction_AMyCppProject2Character_ServerShoot, "ServerShoot" }, // 1443632989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCppProject2Character.h" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_Bullet_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//esto es para sacar una referencia a un actor. Todav?a se tiene que asignar el actor en el blueprint del character!!!\n" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
		{ "ToolTip", "esto es para sacar una referencia a un actor. Todav?a se tiene que asignar el actor en el blueprint del character!!!" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, Bullet), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_Bullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_InstaShotRange_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_InstaShotRange = { "InstaShotRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, InstaShotRange), METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_InstaShotRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_InstaShotRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "MyCppProject2Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCppProject2Character, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_TraceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCppProject2Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_Bullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_InstaShotRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCppProject2Character_Statics::NewProp_TraceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCppProject2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCppProject2Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCppProject2Character_Statics::ClassParams = {
		&AMyCppProject2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCppProject2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCppProject2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProject2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCppProject2Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCppProject2Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCppProject2Character, 351679734);
	template<> MYCPPPROJECT2_API UClass* StaticClass<AMyCppProject2Character>()
	{
		return AMyCppProject2Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCppProject2Character(Z_Construct_UClass_AMyCppProject2Character, &AMyCppProject2Character::StaticClass, TEXT("/Script/MyCppProject2"), TEXT("AMyCppProject2Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCppProject2Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
