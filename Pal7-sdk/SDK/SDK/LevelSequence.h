
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: UMG

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FLevelSequenceBindingReferences
{ 
	SDK_UNDEFINED(80,1339) /* TMap<FGuid, FLevelSequenceBindingReferenceArray> */ __um(BindingIdToReferences);     // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1340) /* TSet<FGuid> */           __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x0150 (0x000348 - 0x000498)
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0348   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0350   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x03A0   (0x00A0)  
	SDK_UNDEFINED(80,1341) /* TMap<FString, FLevelSequenceObject> */ __um(PossessedObjects);                       // 0x0440   (0x0050)  
	class UClass*                                      DirectorClass;                                              // 0x0490   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(class UClass* InClass);                                                                    // [0x2712000] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// class UObject* FindOrAddMetaDataByClass(class UClass* InClass);                                                       // [0x2711950] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// class UObject* FindMetaDataByClass(class UClass* InClass);                                                            // [0x2711950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// class UObject* CopyMetaData(class UObject* InMetaData);                                                               // [0x2711950] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1342) /* TEnumAsByte<EAspectRatioAxisConstraint> */ __um(AspectRatioAxisConstraint);           // 0x0001   (0x0001)  
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0090 (0x000220 - 0x0002B0)
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0220   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlayBackSettings;                                           // 0x0230   (0x0018)  
	class ULevelSequencePlayer*                        SequencePlayer;                                             // 0x0248   (0x0008)  
	FSoftObjectPath                                    LevelSequence;                                              // 0x0250   (0x0018)  
	TArray<class AActor*>                              AdditionalEventReceivers;                                   // 0x0268   (0x0010)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x0278   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x027A   (0x0006)  MISSED
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                              // 0x0280   (0x0008)  
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0288   (0x0008)  
	bool                                               bAutoPlay : 1;                                              // 0x0290:0 (0x0001)  
	bool                                               bOverrideInstanceData : 1;                                  // 0x0290:1 (0x0001)  
	bool                                               bReplicatePlayback : 1;                                     // 0x0290:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x0291   (0x0007)  MISSED
	class UObject*                                     DefaultInstanceData;                                        // 0x0298   (0x0008)  
	class ULevelSequenceBurnIn*                        BurnInInstance;                                             // 0x02A0   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x02A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                    // [0x2712780] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(class ULevelSequence* InSequence);                                                                   // [0x2712700] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                    // [0x2712670] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetEventReceivers
	// void SetEventReceivers(TArray<AActor*> AdditionalReceivers);                                                          // [0x2712530] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                        // [0x2712310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);           // [0x27121c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                 // [0x2712120] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                // [0x2712070] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName Tag, class AActor* Actor);                                                              // [0x2711f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);                                          // [0x2711e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                      // [0x15dd8c0] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	// class ULevelSequence* LoadSequence();                                                                                 // [0x2711de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                    // [0x2711dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                      // [0x2711d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// class ULevelSequence* GetSequence();                                                                                  // [0x2711d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                      // [0x2711c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                               // [0x2711b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);                            // [0x2711840] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);               // [0x2711700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0120 (0x000888 - 0x0009A8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	SDK_UNDEFINED(16,1343) /* FMulticastInlineDelegate */ __um(OnCameraCut);                                       // 0x0888   (0x0010)  
	unsigned char                                      UnknownData00_6[0x110];                                     // 0x0898   (0x0110)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.SetAspectRatioAxisConstraint
	// void SetAspectRatioAxisConstraint(TEnumAsByte<EAspectRatioAxisConstraint> AspectAxisConstraint);                      // [0x2712140] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// class UCameraComponent* GetActiveCameraComponent();                                                                   // [0x2711ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor); // [0x27119d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0048 (0x000028 - 0x000070)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AActor*                                      TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0028 (0x000028 - 0x000050)
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0018)  
	class ULevelSequenceBurnInInitSettings*            Settings;                                                   // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                         // [0x2712440] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLevelSequenceSnapshotSettings
{ 
	char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FLevelSequencePlayerSnapshot
{ 
	SDK_UNDEFINED(16,1344) /* FString */               __um(MasterName);                                           // 0x0000   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1345) /* FString */               __um(CurrentShotName);                                      // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1346) /* FString */               __um(SourceTimecode);                                       // 0x0060   (0x0010)  
	SDK_UNDEFINED(40,1347) /* TWeakObjectPtr<UCameraComponent*> */ __um(CameraComponent);                          // 0x0070   (0x0028)  
	FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x0098   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class ULevelSequence*                              ActiveShot;                                                 // 0x00A8   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C0 (0x000230 - 0x0002F0)
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0230   (0x00B8)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(class UObject* InSettings);                                                                          // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// class UClass* GetSettingsClass();                                                                                     // [0x2711da0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0008 (0x000028 - 0x000030)
class ULevelSequenceDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class ULevelSequencePlayer*                        Player;                                                     // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                     // [0x15dd8c0] Event|Public|BlueprintEvent 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000220 - 0x000248)
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0220   (0x0008)  MISSED
	class ALevelSequenceActor*                         Sequence;                                                   // 0x0228   (0x0008)  
	class UMediaComponent*                             MediaComponent;                                             // 0x0230   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x023C   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                               // [0x27127a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                          // [0x2711e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                  // [0x2711e10] Final|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// class ALevelSequenceActor* GetSequence();                                                                             // [0x2711d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// class UMediaComponent* GetMediaComponent();                                                                           // [0x25a4db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceBindingReference
{ 
	SDK_UNDEFINED(16,1348) /* FString */               __um(PackageName);                                          // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0018)  
	SDK_UNDEFINED(16,1349) /* FString */               __um(ObjectPath);                                           // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceObject
{ 
	SDK_UNDEFINED(28,1350) /* TLazyObjectPtr<UObject*> */ __um(ObjectOrOwner);                                     // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1351) /* FString */               __um(ComponentName);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(8,1352) /* TWeakObjectPtr<UObject*> */ __um(CachedComponent);                                    // 0x0030   (0x0008)  
};

