// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Public/PressableButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressableButton() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UNREALPROJECT_API UClass* Z_Construct_UClass_APressableButton();
UNREALPROJECT_API UClass* Z_Construct_UClass_APressableButton_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References

// Begin Class APressableButton Function SpawnActor
struct Z_Construct_UFunction_APressableButton_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/PressableButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APressableButton_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressableButton, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APressableButton_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APressableButton_SpawnActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APressableButton_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APressableButton_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APressableButton::execSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActor();
	P_NATIVE_END;
}
// End Class APressableButton Function SpawnActor

// Begin Class APressableButton
void APressableButton::StaticRegisterNativesAPressableButton()
{
	UClass* Class = APressableButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnActor", &APressableButton::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APressableButton);
UClass* Z_Construct_UClass_APressableButton_NoRegister()
{
	return APressableButton::StaticClass();
}
struct Z_Construct_UClass_APressableButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PressableButton.h" },
		{ "ModuleRelativePath", "Public/PressableButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "PressableButton" },
		{ "ModuleRelativePath", "Public/PressableButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APressableButton_SpawnActor, "SpawnActor" }, // 3654058198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APressableButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APressableButton_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APressableButton, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorBPToSpawn_MetaData), NewProp_actorBPToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APressableButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressableButton_Statics::NewProp_actorBPToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APressableButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APressableButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APressableButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APressableButton_Statics::ClassParams = {
	&APressableButton::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APressableButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APressableButton_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APressableButton_Statics::Class_MetaDataParams), Z_Construct_UClass_APressableButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APressableButton()
{
	if (!Z_Registration_Info_UClass_APressableButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APressableButton.OuterSingleton, Z_Construct_UClass_APressableButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APressableButton.OuterSingleton;
}
template<> UNREALPROJECT_API UClass* StaticClass<APressableButton>()
{
	return APressableButton::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APressableButton);
APressableButton::~APressableButton() {}
// End Class APressableButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APressableButton, APressableButton::StaticClass, TEXT("APressableButton"), &Z_Registration_Info_UClass_APressableButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APressableButton), 1968127528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_1890430364(TEXT("/Script/UnrealProject"),
	Z_CompiledInDeferFile_FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
