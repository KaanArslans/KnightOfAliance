// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KnightOfAlliance/Public/Items/Items.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItems() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	KNIGHTOFALLIANCE_API UClass* Z_Construct_UClass_AItems();
	KNIGHTOFALLIANCE_API UClass* Z_Construct_UClass_AItems_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KnightOfAlliance();
// End Cross Module References
	void AItems::StaticRegisterNativesAItems()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItems);
	UClass* Z_Construct_UClass_AItems_NoRegister()
	{
		return AItems::StaticClass();
	}
	struct Z_Construct_UClass_AItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KnightOfAlliance,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Items.h" },
		{ "ModuleRelativePath", "Public/Items/Items.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItems>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItems_Statics::ClassParams = {
		&AItems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::Class_MetaDataParams), Z_Construct_UClass_AItems_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AItems()
	{
		if (!Z_Registration_Info_UClass_AItems.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItems.OuterSingleton, Z_Construct_UClass_AItems_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItems.OuterSingleton;
	}
	template<> KNIGHTOFALLIANCE_API UClass* StaticClass<AItems>()
	{
		return AItems::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItems);
	AItems::~AItems() {}
	struct Z_CompiledInDeferFile_FID_Users_Kenik_OneDrive_Belgeler_Unreal_Projects_KnightOfAlliance_Source_KnightOfAlliance_Public_Items_Items_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kenik_OneDrive_Belgeler_Unreal_Projects_KnightOfAlliance_Source_KnightOfAlliance_Public_Items_Items_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItems, AItems::StaticClass, TEXT("AItems"), &Z_Registration_Info_UClass_AItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItems), 1236274186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kenik_OneDrive_Belgeler_Unreal_Projects_KnightOfAlliance_Source_KnightOfAlliance_Public_Items_Items_h_4254821495(TEXT("/Script/KnightOfAlliance"),
		Z_CompiledInDeferFile_FID_Users_Kenik_OneDrive_Belgeler_Unreal_Projects_KnightOfAlliance_Source_KnightOfAlliance_Public_Items_Items_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kenik_OneDrive_Belgeler_Unreal_Projects_KnightOfAlliance_Source_KnightOfAlliance_Public_Items_Items_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
