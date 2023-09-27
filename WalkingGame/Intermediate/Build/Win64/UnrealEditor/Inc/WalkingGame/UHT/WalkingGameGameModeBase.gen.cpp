// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WalkingGame/WalkingGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalkingGameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WalkingGame();
	WALKINGGAME_API UClass* Z_Construct_UClass_AWalkingGameGameModeBase();
	WALKINGGAME_API UClass* Z_Construct_UClass_AWalkingGameGameModeBase_NoRegister();
// End Cross Module References
	void AWalkingGameGameModeBase::StaticRegisterNativesAWalkingGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWalkingGameGameModeBase);
	UClass* Z_Construct_UClass_AWalkingGameGameModeBase_NoRegister()
	{
		return AWalkingGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWalkingGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWalkingGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WalkingGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWalkingGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WalkingGameGameModeBase.h" },
		{ "ModuleRelativePath", "WalkingGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWalkingGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWalkingGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWalkingGameGameModeBase_Statics::ClassParams = {
		&AWalkingGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWalkingGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWalkingGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWalkingGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWalkingGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWalkingGameGameModeBase.OuterSingleton, Z_Construct_UClass_AWalkingGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWalkingGameGameModeBase.OuterSingleton;
	}
	template<> WALKINGGAME_API UClass* StaticClass<AWalkingGameGameModeBase>()
	{
		return AWalkingGameGameModeBase::StaticClass();
	}
	AWalkingGameGameModeBase::AWalkingGameGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWalkingGameGameModeBase);
	AWalkingGameGameModeBase::~AWalkingGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_danjb_Desktop_TheWalkingExperience_WalkingGame_Source_WalkingGame_WalkingGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danjb_Desktop_TheWalkingExperience_WalkingGame_Source_WalkingGame_WalkingGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWalkingGameGameModeBase, AWalkingGameGameModeBase::StaticClass, TEXT("AWalkingGameGameModeBase"), &Z_Registration_Info_UClass_AWalkingGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWalkingGameGameModeBase), 894539776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_danjb_Desktop_TheWalkingExperience_WalkingGame_Source_WalkingGame_WalkingGameGameModeBase_h_689931402(TEXT("/Script/WalkingGame"),
		Z_CompiledInDeferFile_FID_Users_danjb_Desktop_TheWalkingExperience_WalkingGame_Source_WalkingGame_WalkingGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_danjb_Desktop_TheWalkingExperience_WalkingGame_Source_WalkingGame_WalkingGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
