// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderPostProcessing/ShaderPostProcessingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPostProcessingGameMode() {}
// Cross Module References
	SHADERPOSTPROCESSING_API UClass* Z_Construct_UClass_AShaderPostProcessingGameMode_NoRegister();
	SHADERPOSTPROCESSING_API UClass* Z_Construct_UClass_AShaderPostProcessingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShaderPostProcessing();
// End Cross Module References
	void AShaderPostProcessingGameMode::StaticRegisterNativesAShaderPostProcessingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShaderPostProcessingGameMode);
	UClass* Z_Construct_UClass_AShaderPostProcessingGameMode_NoRegister()
	{
		return AShaderPostProcessingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShaderPostProcessingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderPostProcessing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShaderPostProcessingGameMode.h" },
		{ "ModuleRelativePath", "ShaderPostProcessingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShaderPostProcessingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::ClassParams = {
		&AShaderPostProcessingGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShaderPostProcessingGameMode()
	{
		if (!Z_Registration_Info_UClass_AShaderPostProcessingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShaderPostProcessingGameMode.OuterSingleton, Z_Construct_UClass_AShaderPostProcessingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShaderPostProcessingGameMode.OuterSingleton;
	}
	template<> SHADERPOSTPROCESSING_API UClass* StaticClass<AShaderPostProcessingGameMode>()
	{
		return AShaderPostProcessingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShaderPostProcessingGameMode);
	struct Z_CompiledInDeferFile_FID_ShaderPostProcessing_Source_ShaderPostProcessing_ShaderPostProcessingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShaderPostProcessing_Source_ShaderPostProcessing_ShaderPostProcessingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShaderPostProcessingGameMode, AShaderPostProcessingGameMode::StaticClass, TEXT("AShaderPostProcessingGameMode"), &Z_Registration_Info_UClass_AShaderPostProcessingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShaderPostProcessingGameMode), 3107227969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShaderPostProcessing_Source_ShaderPostProcessing_ShaderPostProcessingGameMode_h_2144229032(TEXT("/Script/ShaderPostProcessing"),
		Z_CompiledInDeferFile_FID_ShaderPostProcessing_Source_ShaderPostProcessing_ShaderPostProcessingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShaderPostProcessing_Source_ShaderPostProcessing_ShaderPostProcessingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
