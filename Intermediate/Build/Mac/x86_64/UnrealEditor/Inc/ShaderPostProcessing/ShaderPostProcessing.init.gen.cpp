// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPostProcessing_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShaderPostProcessing;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShaderPostProcessing()
	{
		if (!Z_Registration_Info_UPackage__Script_ShaderPostProcessing.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShaderPostProcessing",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x285BA6E8,
				0xCD84863D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShaderPostProcessing.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShaderPostProcessing.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShaderPostProcessing(Z_Construct_UPackage__Script_ShaderPostProcessing, TEXT("/Script/ShaderPostProcessing"), Z_Registration_Info_UPackage__Script_ShaderPostProcessing, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x285BA6E8, 0xCD84863D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
