// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalkingGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WalkingGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WalkingGame()
	{
		if (!Z_Registration_Info_UPackage__Script_WalkingGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WalkingGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBEEF9E51,
				0x9E29CDCC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WalkingGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WalkingGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WalkingGame(Z_Construct_UPackage__Script_WalkingGame, TEXT("/Script/WalkingGame"), Z_Registration_Info_UPackage__Script_WalkingGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBEEF9E51, 0x9E29CDCC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
