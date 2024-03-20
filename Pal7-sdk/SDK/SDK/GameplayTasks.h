
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x03
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX                       = 2
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x06
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX                               = 5
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x06
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4,
	EGameplayTaskState__EGameplayTaskState_MAX                                       = 5
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xC];                                       // 0x00B0   (0x000C)  MISSED
	bool                                               bIsNetDirty : 1;                                            // 0x00BC:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x00C0   (0x0010)  
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x00F0   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,807) /* FMulticastInlineDelegate */ __um(OnClaimedResourcesChange);                           // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks();                                                                                          // [0x3044730] Final|Native|Public  
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x30444f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (0x000028 - 0x000068)
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FName                                              InstanceName;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0038   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x003A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x25];                                      // 0x003B   (0x0025)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                            // [0x3044750] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                       // [0x3044400] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000068 - 0x000068)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x3044260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x3044110] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,808) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,809) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x3044770] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                              // [0x3044420] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                              // [0x3044030] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (0x000068 - 0x000098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,810) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,811) /* FMulticastInlineDelegate */ __um(OnTimeExpired);                                      // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0018 (0x000068 - 0x000080)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,812) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);           // [0x3044920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                          // [0x15dd8c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayTaskResource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            ManualResourceID;                                           // 0x0028   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

