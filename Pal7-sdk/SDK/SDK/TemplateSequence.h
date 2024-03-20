
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000348 - 0x0003F0)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0348   (0x0008)  
	SDK_UNDEFINED(40,3156) /* TWeakObjectPtr<UClass*> */ __um(BoundActorClass);                                    // 0x0350   (0x0028)  
	SDK_UNDEFINED(40,3157) /* TWeakObjectPtr<AActor*> */ __um(BoundPreviewActor);                                  // 0x0378   (0x0028)  
	SDK_UNDEFINED(80,3158) /* TMap<FGuid, FName> */    __um(BoundActorComponents);                                 // 0x03A0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	SDK_UNDEFINED(8,3159) /* TWeakObjectPtr<UObject*> */ __um(Object);                                             // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0050 (0x000220 - 0x000270)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0220   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlayBackSettings;                                           // 0x0228   (0x0018)  
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0240   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0248   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0260   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x026C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                // [0xb783d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor);                                                                                 // [0xb78350] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                              // [0xb78320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                   // [0xb782f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                               // [0xb782c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x000888 - 0x000890)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0888   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0xb78140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0000 (0x000158 - 0x000158)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Struct /Script/TemplateSequence.TemplateSequenceInstanceData
/// Size: 0x0018 (0x000008 - 0x000020)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData
{ 
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x0008   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0020   (0x0004)  
	FGuid                                              OuterBindingId;                                             // 0x0024   (0x0010)  
	FMovieSceneEvaluationOperand                       InnerOperand;                                               // 0x0034   (0x0014)  
};

