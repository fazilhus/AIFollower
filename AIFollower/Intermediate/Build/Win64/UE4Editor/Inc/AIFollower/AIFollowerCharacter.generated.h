// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIFOLLOWER_AIFollowerCharacter_generated_h
#error "AIFollowerCharacter.generated.h already included, missing '#pragma once' in AIFollowerCharacter.h"
#endif
#define AIFOLLOWER_AIFollowerCharacter_generated_h

#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_SPARSE_DATA
#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_RPC_WRAPPERS
#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIFollowerCharacter(); \
	friend struct Z_Construct_UClass_AAIFollowerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAIFollowerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFollower"), NO_API) \
	DECLARE_SERIALIZER(AAIFollowerCharacter)


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAIFollowerCharacter(); \
	friend struct Z_Construct_UClass_AAIFollowerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAIFollowerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIFollower"), NO_API) \
	DECLARE_SERIALIZER(AAIFollowerCharacter)


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIFollowerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIFollowerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFollowerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFollowerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFollowerCharacter(AAIFollowerCharacter&&); \
	NO_API AAIFollowerCharacter(const AAIFollowerCharacter&); \
public:


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIFollowerCharacter(AAIFollowerCharacter&&); \
	NO_API AAIFollowerCharacter(const AAIFollowerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIFollowerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIFollowerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIFollowerCharacter)


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAIFollowerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AAIFollowerCharacter, FollowCamera); }


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_9_PROLOG
#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_SPARSE_DATA \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_RPC_WRAPPERS \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_INCLASS \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_SPARSE_DATA \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	AIFollower_Source_AIFollower_AIFollowerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIFOLLOWER_API UClass* StaticClass<class AAIFollowerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AIFollower_Source_AIFollower_AIFollowerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
