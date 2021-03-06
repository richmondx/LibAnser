// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/LibAnserPrivatePCH.h"
#include "LibAnser.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1LibAnser() {}
	void UCPhysicsHandle::StaticRegisterNativesUCPhysicsHandle()
	{
		FNativeFunctionRegistrar::RegisterFunction(UCPhysicsHandle::StaticClass(), "GetGrabObject",(Native)&UCPhysicsHandle::execGetGrabObject);
		FNativeFunctionRegistrar::RegisterFunction(UCPhysicsHandle::StaticClass(), "GrabActor",(Native)&UCPhysicsHandle::execGrabActor);
		FNativeFunctionRegistrar::RegisterFunction(UCPhysicsHandle::StaticClass(), "ReleaseGrab",(Native)&UCPhysicsHandle::execReleaseGrab);
	}
	IMPLEMENT_CLASS(UCPhysicsHandle, 580560174);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent();

	LIBANSER_API class UFunction* Z_Construct_UFunction_UCPhysicsHandle_GetGrabObject();
	LIBANSER_API class UFunction* Z_Construct_UFunction_UCPhysicsHandle_GrabActor();
	LIBANSER_API class UFunction* Z_Construct_UFunction_UCPhysicsHandle_ReleaseGrab();
	LIBANSER_API class UClass* Z_Construct_UClass_UCPhysicsHandle_NoRegister();
	LIBANSER_API class UClass* Z_Construct_UClass_UCPhysicsHandle();
	LIBANSER_API class UPackage* Z_Construct_UPackage__Script_LibAnser();
	UFunction* Z_Construct_UFunction_UCPhysicsHandle_GetGrabObject()
	{
		struct CPhysicsHandle_eventGetGrabObject_Parms
		{
			AActor* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UCPhysicsHandle();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGrabObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(CPhysicsHandle_eventGetGrabObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CPhysicsHandle_eventGetGrabObject_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRPhysicsHandle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CPhysicsHandl.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("????\x05e5\x0221????"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPhysicsHandle_GrabActor()
	{
		struct CPhysicsHandle_eventGrabActor_Parms
		{
			AActor* ActorToGrab;
		};
		UObject* Outer=Z_Construct_UClass_UCPhysicsHandle();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GrabActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CPhysicsHandle_eventGrabActor_Parms));
			UProperty* NewProp_ActorToGrab = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorToGrab"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorToGrab, CPhysicsHandle_eventGrabActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRPhysicsHandle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CPhysicsHandl.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("\x05e5\x0221")TEXT("Actor????"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCPhysicsHandle_ReleaseGrab()
	{
		UObject* Outer=Z_Construct_UClass_UCPhysicsHandle();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseGrab"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("VRPhysicsHandle"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CPhysicsHandl.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("?\x0377?????"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCPhysicsHandle_NoRegister()
	{
		return UCPhysicsHandle::StaticClass();
	}
	UClass* Z_Construct_UClass_UCPhysicsHandle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_LibAnser();
			OuterClass = UCPhysicsHandle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20A00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UCPhysicsHandle_GetGrabObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UCPhysicsHandle_GrabActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UCPhysicsHandle_ReleaseGrab());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCPhysicsHandle_GetGrabObject(), "GetGrabObject"); // 3491002077
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCPhysicsHandle_GrabActor(), "GrabActor"); // 559645124
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCPhysicsHandle_ReleaseGrab(), "ReleaseGrab"); // 1835915433
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CPhysicsHandl.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CPhysicsHandl.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPhysicsHandle(Z_Construct_UClass_UCPhysicsHandle, &UCPhysicsHandle::StaticClass, TEXT("UCPhysicsHandle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPhysicsHandle);
	UPackage* Z_Construct_UPackage__Script_LibAnser()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/LibAnser")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0xA7623E26;
			Guid.B = 0xF5C517F7;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
