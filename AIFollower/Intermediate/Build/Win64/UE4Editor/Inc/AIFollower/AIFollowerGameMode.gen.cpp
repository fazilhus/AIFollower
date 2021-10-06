// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIFollower/AIFollowerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIFollowerGameMode() {}
// Cross Module References
	AIFOLLOWER_API UClass* Z_Construct_UClass_AAIFollowerGameMode_NoRegister();
	AIFOLLOWER_API UClass* Z_Construct_UClass_AAIFollowerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIFollower();
// End Cross Module References
	void AAIFollowerGameMode::StaticRegisterNativesAAIFollowerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAIFollowerGameMode_NoRegister()
	{
		return AAIFollowerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAIFollowerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIFollowerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIFollower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIFollowerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIFollowerGameMode.h" },
		{ "ModuleRelativePath", "AIFollowerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIFollowerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIFollowerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIFollowerGameMode_Statics::ClassParams = {
		&AAIFollowerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAIFollowerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIFollowerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIFollowerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIFollowerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIFollowerGameMode, 309090031);
	template<> AIFOLLOWER_API UClass* StaticClass<AAIFollowerGameMode>()
	{
		return AAIFollowerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIFollowerGameMode(Z_Construct_UClass_AAIFollowerGameMode, &AAIFollowerGameMode::StaticClass, TEXT("/Script/AIFollower"), TEXT("AAIFollowerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIFollowerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
