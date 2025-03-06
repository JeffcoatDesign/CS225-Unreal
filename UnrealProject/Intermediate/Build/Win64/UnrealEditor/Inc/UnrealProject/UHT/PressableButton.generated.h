// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PressableButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPROJECT_PressableButton_generated_h
#error "PressableButton.generated.h already included, missing '#pragma once' in PressableButton.h"
#endif
#define UNREALPROJECT_PressableButton_generated_h

#define FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressableButton(); \
	friend struct Z_Construct_UClass_APressableButton_Statics; \
public: \
	DECLARE_CLASS(APressableButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealProject"), NO_API) \
	DECLARE_SERIALIZER(APressableButton)


#define FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APressableButton(APressableButton&&); \
	APressableButton(const APressableButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressableButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressableButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressableButton) \
	NO_API virtual ~APressableButton();


#define FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_9_PROLOG
#define FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPROJECT_API UClass* StaticClass<class APressableButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Source_UnrealProject_Public_PressableButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
