// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYCPPPROJECT2_Trigger_generated_h
#error "Trigger.generated.h already included, missing '#pragma once' in Trigger.h"
#endif
#define MYCPPPROJECT2_Trigger_generated_h

#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_SPARSE_DATA
#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrigger(); \
	friend struct Z_Construct_UClass_ATrigger_Statics; \
public: \
	DECLARE_CLASS(ATrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ATrigger)


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATrigger(); \
	friend struct Z_Construct_UClass_ATrigger_Statics; \
public: \
	DECLARE_CLASS(ATrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCppProject2"), NO_API) \
	DECLARE_SERIALIZER(ATrigger)


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrigger(ATrigger&&); \
	NO_API ATrigger(const ATrigger&); \
public:


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrigger(ATrigger&&); \
	NO_API ATrigger(const ATrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrigger)


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_PRIVATE_PROPERTY_OFFSET
#define MyCppProject2_Source_MyCppProject2_Trigger_h_9_PROLOG
#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_PRIVATE_PROPERTY_OFFSET \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_SPARSE_DATA \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_RPC_WRAPPERS \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_INCLASS \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCppProject2_Source_MyCppProject2_Trigger_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_PRIVATE_PROPERTY_OFFSET \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_SPARSE_DATA \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_INCLASS_NO_PURE_DECLS \
	MyCppProject2_Source_MyCppProject2_Trigger_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPPPROJECT2_API UClass* StaticClass<class ATrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCppProject2_Source_MyCppProject2_Trigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
