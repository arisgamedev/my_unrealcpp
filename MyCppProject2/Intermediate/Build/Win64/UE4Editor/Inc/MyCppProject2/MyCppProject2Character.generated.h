// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCPPPROJECT2_MyCppProject2Character_generated_h
#error "MyCppProject2Character.generated.h already included, missing '#pragma once' in MyCppProject2Character.h"
#endif
#define MYCPPPROJECT2_MyCppProject2Character_generated_h

#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_SPARSE_DATA
#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_RPC_WRAPPERS \
	virtual void ServerInstantShoot_Implementation(); \
	virtual void ServerShoot_Implementation(); \
 \
	DECLARE_FUNCTION(execServerInstantShoot); \
	DECLARE_FUNCTION(execServerShoot);


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerInstantShoot_Implementation(); \
	virtual void ServerShoot_Implementation(); \
 \
	DECLARE_FUNCTION(execServerInstantShoot); \
	DECLARE_FUNCTION(execServerShoot);


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_EVENT_PARMS
#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_CALLBACK_WRAPPERS
#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCppProject2Character(); \
	friend struct Z_Construct_UClass_AMyCppProject2Character_Statics; \
public: \
	DECLARE_CLASS(AMyCppProject2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCppProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyCppProject2Character)


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyCppProject2Character(); \
	friend struct Z_Construct_UClass_AMyCppProject2Character_Statics; \
public: \
	DECLARE_CLASS(AMyCppProject2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyCppProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyCppProject2Character)


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCppProject2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCppProject2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCppProject2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCppProject2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCppProject2Character(AMyCppProject2Character&&); \
	NO_API AMyCppProject2Character(const AMyCppProject2Character&); \
public:


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCppProject2Character(AMyCppProject2Character&&); \
	NO_API AMyCppProject2Character(const AMyCppProject2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCppProject2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCppProject2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCppProject2Character)


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyCppProject2Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyCppProject2Character, FollowCamera); }


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_11_PROLOG \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_EVENT_PARMS


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_SPARSE_DATA \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_RPC_WRAPPERS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_CALLBACK_WRAPPERS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_INCLASS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_PRIVATE_PROPERTY_OFFSET \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_SPARSE_DATA \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_CALLBACK_WRAPPERS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_INCLASS_NO_PURE_DECLS \
	MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPPPROJECT2_API UClass* StaticClass<class AMyCppProject2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyCppProject2_Source_MyCppProject2_MyCppProject2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
