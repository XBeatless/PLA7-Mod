
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Gauntlet

/// Enum /Script/DaedalicTestAutomationPlugin.EDaeTestComparisonMethod
/// Size: 0x05
enum class EDaeTestComparisonMethod : uint8_t
{
	EDaeTestComparisonMethod__LessThan                                               = 0,
	EDaeTestComparisonMethod__LessThanOrEqualTo                                      = 1,
	EDaeTestComparisonMethod__GreaterThanOrEqualTo                                   = 2,
	EDaeTestComparisonMethod__GreaterThan                                            = 3,
	EDaeTestComparisonMethod__EDaeTestComparisonMethod_MAX                           = 4
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeGauntletTestController
/// Size: 0x0028 (0x000030 - 0x000058)
class UDaeGauntletTestController : public UGauntletTestController
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeGauntletTestController.OnTestSuiteFinished
	// void OnTestSuiteFinished(class ADaeTestSuiteActor* TestSuite);                                                        // [0x7dffc0] Final|Native|Private 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestActor
/// Size: 0x0088 (0x000220 - 0x0002A8)
class ADaeTestActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0220   (0x0030)  MISSED
	SDK_UNDEFINED(16,2832) /* FString */               __um(TestName);                                             // 0x0250   (0x0010)  
	float                                              TimeoutInSeconds;                                           // 0x0260   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(16,2833) /* FString */               __um(SkipReason);                                           // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,2834) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Parameters);                                // 0x0278   (0x0010)  
	TArray<class ADaeTestParameterProviderActor*>      ParameterProviders;                                         // 0x0288   (0x0010)  
	class UObject*                                     CurrentParameter;                                           // 0x0298   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.RunTest
	// void RunTest(class UObject* TestParameter);                                                                           // [0x7e00f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.ReceiveOnAssume
	// void ReceiveOnAssume(class UObject* Parameter);                                                                       // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.ReceiveOnAssert
	// void ReceiveOnAssert(class UObject* Parameter);                                                                       // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.ReceiveOnArrange
	// void ReceiveOnArrange(class UObject* Parameter);                                                                      // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.ReceiveOnAct
	// void ReceiveOnAct(class UObject* Parameter);                                                                          // [0x7e0040] Native|Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.GetTestName
	// FString GetTestName();                                                                                                // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.GetCurrentParameter
	// class UObject* GetCurrentParameter();                                                                                 // [0x7dfb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestActor.FinishAct
	// void FinishAct();                                                                                                     // [0x7dfb30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestActorBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDaeTestActorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDaeTestAssertBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.SkipTest
	// void SkipTest(FString SkipReason, class UObject* Context);                                                            // [0x7e0170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertWidgetIsVisible
	// void AssertWidgetIsVisible(class UUserWidget* Widget, FString What, class UObject* Context);                          // [0x7df580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertWasTriggered
	// void AssertWasTriggered(class ADaeTestTriggerBox* TestTriggerBox, class UObject* Context);                            // [0x7df4d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertWasNotTriggered
	// void AssertWasNotTriggered(class ADaeTestTriggerBox* TestTriggerBox, class UObject* Context);                         // [0x7df420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertValid
	// void AssertValid(class UObject* Object, FString What, class UObject* Context);                                        // [0x7df310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertTrue
	// void AssertTrue(bool bValue, FString What, class UObject* Context);                                                   // [0x7df1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertTextIsSet
	// void AssertTextIsSet(class UTextBlock* TextBlock, FString What, class UObject* Context);                              // [0x7df0e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertRichTextIsSet
	// void AssertRichTextIsSet(class URichTextBlock* RichTextBlock, FString What, class UObject* Context);                  // [0x7defd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotInRangeInt64
	// void AssertNotInRangeInt64(int64_t value, int64_t MinInclusive, int64_t MaxInclusive, FString What, class UObject* Context); // [0x7dee40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotInRangeInt32
	// void AssertNotInRangeInt32(int32_t value, int32_t MinInclusive, int32_t MaxInclusive, FString What, class UObject* Context); // [0x7decc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotInRangeFloat
	// void AssertNotInRangeFloat(float value, float MinInclusive, float MaxInclusive, FString What, class UObject* Context); // [0x7deb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotInRangeByte
	// void AssertNotInRangeByte(char value, char MinInclusive, char MaxInclusive, FString What, class UObject* Context);    // [0x7de990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualVector
	// void AssertNotEqualVector(FVector& Actual, FVector& Unexpected, FString What, class UObject* Context, float Tolerance); // [0x7de7c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualTransform
	// void AssertNotEqualTransform(FTransform& Actual, FTransform& Unexpected, FString What, class UObject* Context, float Tolerance); // [0x7de590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualText
	// void AssertNotEqualText(FText& Actual, FText& Unexpected, bool bIgnoreCase, FString What, class UObject* Context);    // [0x7de360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualString
	// void AssertNotEqualString(FString Actual, FString Unexpected, bool bIgnoreCase, FString What, class UObject* Context); // [0x7de1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualRotator
	// void AssertNotEqualRotator(FRotator& Actual, FRotator& Unexpected, FString What, class UObject* Context, float Tolerance); // [0x7ddfe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualName
	// void AssertNotEqualName(FName& Actual, FName& Unexpected, bool bIgnoreCase, FString What, class UObject* Context);    // [0x7dde30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualInt64
	// void AssertNotEqualInt64(int64_t Actual, int64_t Unexpected, FString What, class UObject* Context);                   // [0x7ddce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualInt32
	// void AssertNotEqualInt32(int32_t Actual, int32_t Unexpected, FString What, class UObject* Context);                   // [0x7ddba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualFloat
	// void AssertNotEqualFloat(float Actual, float Unexpected, FString What, class UObject* Context, float Tolerance);      // [0x7dda10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertNotEqualByte
	// void AssertNotEqualByte(char Actual, char Unexpected, FString What, class UObject* Context);                          // [0x7dd8c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertInvalid
	// void AssertInvalid(class UObject* Object, FString What, class UObject* Context);                                      // [0x7dd7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertInRangeInt64
	// void AssertInRangeInt64(int64_t value, int64_t MinInclusive, int64_t MaxInclusive, FString What, class UObject* Context); // [0x7dd620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertInRangeInt32
	// void AssertInRangeInt32(int32_t value, int32_t MinInclusive, int32_t MaxInclusive, FString What, class UObject* Context); // [0x7dd4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertInRangeFloat
	// void AssertInRangeFloat(float value, float MinInclusive, float MaxInclusive, FString What, class UObject* Context);   // [0x7dd300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertInRangeByte
	// void AssertInRangeByte(char value, char MinInclusive, char MaxInclusive, FString What, class UObject* Context);       // [0x7dd170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertImageIsSet
	// void AssertImageIsSet(class UImage* Image, FString What, class UObject* Context);                                     // [0x7dd060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertFalse
	// void AssertFalse(bool bValue, FString What, class UObject* Context);                                                  // [0x7dcf40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertFail
	// void AssertFail(FString What, class UObject* Context);                                                                // [0x7dce70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualVector
	// void AssertEqualVector(FVector& Actual, FVector& Expected, FString What, class UObject* Context, float Tolerance);    // [0x7dcca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualTransform
	// void AssertEqualTransform(FTransform& Actual, FTransform& Expected, FString What, class UObject* Context, float Tolerance); // [0x7dca70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualText
	// void AssertEqualText(FText& Actual, FText& Expected, bool bIgnoreCase, FString What, class UObject* Context);         // [0x7dc840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualString
	// void AssertEqualString(FString Actual, FString Expected, bool bIgnoreCase, FString What, class UObject* Context);     // [0x7dc690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualRotator
	// void AssertEqualRotator(FRotator& Actual, FRotator& Expected, FString What, class UObject* Context, float Tolerance); // [0x7dc4c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualName
	// void AssertEqualName(FName& Actual, FName& Expected, bool bIgnoreCase, FString What, class UObject* Context);         // [0x7dc310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualInt64
	// void AssertEqualInt64(int64_t Actual, int64_t Expected, FString What, class UObject* Context);                        // [0x7dc1c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualInt32
	// void AssertEqualInt32(int32_t Actual, int32_t Expected, FString What, class UObject* Context);                        // [0x7dc080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualFloat
	// void AssertEqualFloat(float Actual, float Expected, FString What, class UObject* Context, float Tolerance);           // [0x7dbef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertEqualByte
	// void AssertEqualByte(char Actual, char Expected, FString What, class UObject* Context);                               // [0x7dbda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertCompareInt64
	// void AssertCompareInt64(int64_t First, EDaeTestComparisonMethod ShouldBe, int64_t Second, FString What, class UObject* Context); // [0x7dbc10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertCompareInt32
	// void AssertCompareInt32(int32_t First, EDaeTestComparisonMethod ShouldBe, int32_t Second, FString What, class UObject* Context); // [0x7dba80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertCompareFloat
	// void AssertCompareFloat(float First, EDaeTestComparisonMethod ShouldBe, float Second, FString What, class UObject* Context); // [0x7db8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssertBlueprintFunctionLibrary.AssertCompareByte
	// void AssertCompareByte(char First, EDaeTestComparisonMethod ShouldBe, char Second, FString What, class UObject* Context); // [0x7db760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestAssumeBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDaeTestAssumeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssumeBlueprintFunctionLibrary.AssumeTrue
	// void AssumeTrue(bool bValue, FString What, class UObject* Context);                                                   // [0x7df7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestAssumeBlueprintFunctionLibrary.AssumeFalse
	// void AssumeFalse(bool bValue, FString What, class UObject* Context);                                                  // [0x7df690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestAutomationPluginSettings
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDaeTestAutomationPluginSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,2835) /* FString */               __um(TestMapPath);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2836) /* TArray<FString> */       __um(TestMapFolders);                                       // 0x0038   (0x0010)  
	TArray<FName>                                      AdditionalTestMaps;                                         // 0x0048   (0x0010)  
	TArray<FName>                                      IgnoredMaps;                                                // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,2837) /* TMap<FString, FString> */ __um(ConsoleVariables);                                    // 0x0068   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestDelayBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDaeTestDelayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestDelayBlueprintFunctionLibrary.DelayUntilTriggered
	// void DelayUntilTriggered(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ADaeTestTriggerBox* TestTriggerBox); // [0x7dfa10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestDelayBlueprintFunctionLibrary.DelayFrames
	// void DelayFrames(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32_t NumFrames);                 // [0x7df8f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestInputBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDaeTestInputBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestInputBlueprintFunctionLibrary.ApplyInputAxis
	// void ApplyInputAxis(class UObject* Context, FName& AxisName, float AxisValue);                                        // [0x7db650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestInputBlueprintFunctionLibrary.ApplyInputAction
	// void ApplyInputAction(class UObject* Context, FName& ActionName, TEnumAsByte<EInputEvent> InputEventType);            // [0x7db540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestParameterProviderActor
/// Size: 0x0000 (0x000220 - 0x000220)
class ADaeTestParameterProviderActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestParameterProviderActor.GetParameters
	// TArray<UObject*> GetParameters();                                                                                     // [0x7dfb80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestParameterProviderActorBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDaeTestParameterProviderActorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestPerformanceBudgetActor
/// Size: 0x0078 (0x0002A8 - 0x000320)
class ADaeTestPerformanceBudgetActor : public ADaeTestActor
{ 
public:
	TArray<class ATargetPoint*>                        FlightPath;                                                 // 0x02A8   (0x0010)  
	class UClass*                                      PawnClass;                                                  // 0x02B8   (0x0008)  
	bool                                               bUseTargetRotation;                                         // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              InitialDelay;                                               // 0x02C4   (0x0004)  
	float                                              FlightSpeed;                                                // 0x02C8   (0x0004)  
	float                                              AcceptanceRadius;                                           // 0x02CC   (0x0004)  
	float                                              BudgetViolationTimeout;                                     // 0x02D0   (0x0004)  
	float                                              GameThreadBudget;                                           // 0x02D4   (0x0004)  
	float                                              RenderThreadBudget;                                         // 0x02D8   (0x0004)  
	float                                              GPUBudget;                                                  // 0x02DC   (0x0004)  
	bool                                               bIncludeInDefaultTestReport;                                // 0x02E0   (0x0001)  
	bool                                               bNoneTargetPointsTest;                                      // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3E];                                      // 0x02E2   (0x003E)  MISSED


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestPerformanceBudgetActor.CustomFinishAct
	// void CustomFinishAct();                                                                                               // [0x7df8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor
/// Size: 0x0078 (0x000220 - 0x000298)
class ADaeTestSuiteActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0220   (0x0020)  MISSED
	TArray<class ADaeTestActor*>                       Tests;                                                      // 0x0240   (0x0010)  
	bool                                               bRunInPIE;                                                  // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0x47];                                      // 0x0251   (0x0047)  MISSED


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.ReceiveOnBeforeEach
	// void ReceiveOnBeforeEach();                                                                                           // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.ReceiveOnBeforeAll
	// void ReceiveOnBeforeAll();                                                                                            // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.ReceiveOnAfterEach
	// void ReceiveOnAfterEach();                                                                                            // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.ReceiveOnAfterAll
	// void ReceiveOnAfterAll();                                                                                             // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.OnTestSuccessful
	// void OnTestSuccessful(class ADaeTestActor* Test, class UObject* Parameter);                                           // [0x7dff00] Final|Native|Private 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.OnTestSkipped
	// void OnTestSkipped(class ADaeTestActor* Test, class UObject* Parameter, FString SkipReason);                          // [0x7dfde0] Final|Native|Private 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActor.OnTestFailed
	// void OnTestFailed(class ADaeTestActor* Test, class UObject* Parameter, FString FailureMessage);                       // [0x7dfcc0] Final|Native|Private 
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestSuiteActorBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDaeTestSuiteActorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/DaedalicTestAutomationPlugin.DaeTestTriggerBox
/// Size: 0x0008 (0x000228 - 0x000230)
class ADaeTestTriggerBox : public ATriggerBox
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0228   (0x0008)  MISSED


	/// Functions
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestTriggerBox.WasTriggered
	// bool WasTriggered();                                                                                                  // [0x7e0240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestTriggerBox.ResetTriggerState
	// void ResetTriggerState();                                                                                             // [0x7e00d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaedalicTestAutomationPlugin.DaeTestTriggerBox.OnActorBeginOverlapBroadcast
	// void OnActorBeginOverlapBroadcast(class AActor* OverlappedActor, class AActor* OtherActor);                           // [0x7dfc00] Final|Native|Private 
};

