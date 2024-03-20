
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x04
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX         = 3
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActorSequenceObjectReference
{ 
	EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              ActorID;                                                    // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,794) /* FString */                __um(PathToComponent);                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FActorSequenceObjectReferences
{ 
	TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0028 (0x000348 - 0x000370)
class UActorSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0348   (0x0008)  
	FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0350   (0x0020)  
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UActorSequenceComponent : public UActorComponent
{ 
public:
	FMovieSceneSequencePlaybackSettings                PlayBackSettings;                                           // 0x00B0   (0x0018)  
	class UActorSequence*                              Sequence;                                                   // 0x00C8   (0x0008)  
	class UActorSequencePlayer*                        SequencePlayer;                                             // 0x00D0   (0x0008)  
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x0000 (0x000888 - 0x000888)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
};

