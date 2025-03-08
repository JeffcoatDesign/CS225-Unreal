// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UNREALPROJECT_API UClass* Z_Construct_UClass_AMyActor();
UNREALPROJECT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References

// Begin Class AMyActor Function SpawnActor
struct Z_Construct_UFunction_AMyActor_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_SpawnActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActor_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActor();
	P_NATIVE_END;
}
// End Class AMyActor Function SpawnActor

// Begin Class AMyActor
void AMyActor::StaticRegisterNativesAMyActor()
{
	UClass* Class = AMyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnActor", &AMyActor::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_SpawnActor, "SpawnActor" }, // 3235390521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorBPToSpawn_MetaData), NewProp_actorBPToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_actorBPToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
template<> UNREALPROJECT_API UClass* StaticClass<AMyActor>()
{
	return AMyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// End Class AMyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_CS225_Unreal_UnrealProject_Source_UnrealProject_MyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 3376529754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_CS225_Unreal_UnrealProject_Source_UnrealProject_MyActor_h_446443884(TEXT("/Script/UnrealProject"),
	Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_CS225_Unreal_UnrealProject_Source_UnrealProject_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ethan_Documents_GitHub_CS225_Unreal_UnrealProject_Source_UnrealProject_MyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
