
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

/// Enum /Script/CriWareRuntime.EAtomAudioVolumeType
/// Size: 0x06
enum class EAtomAudioVolumeType : uint8_t
{
	EAtomAudioVolumeType__UseSnapshot                                                = 0,
	EAtomAudioVolumeType__UseBus                                                     = 1,
	EAtomAudioVolumeType__UseAisacControl                                            = 2,
	EAtomAudioVolumeType__UseEntranceVolume                                          = 3,
	EAtomAudioVolumeType__Num                                                        = 4,
	EAtomAudioVolumeType__EAtomAudioVolumeType_MAX                                   = 5
};

/// Enum /Script/CriWareRuntime.EAtomComponentStatus
/// Size: 0x06
enum class EAtomComponentStatus : uint8_t
{
	EAtomComponentStatus__Stop                                                       = 0,
	EAtomComponentStatus__Prep                                                       = 1,
	EAtomComponentStatus__Playing                                                    = 2,
	EAtomComponentStatus__PlayEnd                                                    = 3,
	EAtomComponentStatus__Error                                                      = 4,
	EAtomComponentStatus__EAtomComponentStatus_MAX                                   = 5
};

/// Enum /Script/CriWareRuntime.EAtomLoopSetting
/// Size: 0x04
enum class EAtomLoopSetting : uint8_t
{
	EAtomLoopSetting__Inherited                                                      = 0,
	EAtomLoopSetting__Loop                                                           = 1,
	EAtomLoopSetting__OneShot                                                        = 2,
	EAtomLoopSetting__EAtomLoopSetting_MAX                                           = 3
};

/// Enum /Script/CriWareRuntime.ECriFsBinderStatus
/// Size: 0x05
enum class ECriFsBinderStatus : uint8_t
{
	ECriFsBinderStatus__Stop                                                         = 0,
	ECriFsBinderStatus__Binding                                                      = 1,
	ECriFsBinderStatus__Complete                                                     = 2,
	ECriFsBinderStatus__Error                                                        = 3,
	ECriFsBinderStatus__ECriFsBinderStatus_MAX                                       = 4
};

/// Enum /Script/CriWareRuntime.EAtomCueSheetLoaderComponentStatus
/// Size: 0x11
enum class EAtomCueSheetLoaderComponentStatus : uint8_t
{
	EAtomCueSheetLoaderComponentStatus__Stop                                         = 0,
	EAtomCueSheetLoaderComponentStatus__Loading                                      = 1,
	EAtomCueSheetLoaderComponentStatus__LoadEnd                                      = 2,
	EAtomCueSheetLoaderComponentStatus__Serializing                                  = 3,
	EAtomCueSheetLoaderComponentStatus__SerializeEnd                                 = 4,
	EAtomCueSheetLoaderComponentStatus__Binding                                      = 5,
	EAtomCueSheetLoaderComponentStatus__BindEnd                                      = 6,
	EAtomCueSheetLoaderComponentStatus__LoadCueSheet                                 = 7,
	EAtomCueSheetLoaderComponentStatus__Complete                                     = 8,
	EAtomCueSheetLoaderComponentStatus__Error                                        = 9,
	EAtomCueSheetLoaderComponentStatus__EAtomCueSheetLoaderComponentStatus_MAX       = 10
};

/// Enum /Script/CriWareRuntime.ECriFsLoaderStatus
/// Size: 0x05
enum class ECriFsLoaderStatus : uint8_t
{
	ECriFsLoaderStatus__Stop                                                         = 0,
	ECriFsLoaderStatus__Loading                                                      = 1,
	ECriFsLoaderStatus__Complete                                                     = 2,
	ECriFsLoaderStatus__Error                                                        = 3,
	ECriFsLoaderStatus__ECriFsLoaderStatus_MAX                                       = 4
};

/// Enum /Script/CriWareRuntime.EManaSubtitlesEncoding
/// Size: 0x05
enum class EManaSubtitlesEncoding : uint8_t
{
	EManaSubtitlesEncoding__Default                                                  = 0,
	EManaSubtitlesEncoding__ANSI                                                     = 1,
	EManaSubtitlesEncoding__Utf8                                                     = 2,
	EManaSubtitlesEncoding__Utf16                                                    = 3,
	EManaSubtitlesEncoding__EManaSubtitlesEncoding_MAX                               = 4
};

/// Enum /Script/CriWareRuntime.EManaComponentStatus
/// Size: 0x10
enum class EManaComponentStatus : uint8_t
{
	EManaComponentStatus__Stop                                                       = 0,
	EManaComponentStatus__DecHdr                                                     = 1,
	EManaComponentStatus__WaitPrep                                                   = 2,
	EManaComponentStatus__Prep                                                       = 3,
	EManaComponentStatus__Ready                                                      = 4,
	EManaComponentStatus__Playing                                                    = 5,
	EManaComponentStatus__PlayEnd                                                    = 6,
	EManaComponentStatus__Error                                                      = 7,
	EManaComponentStatus__StopProcessing                                             = 8,
	EManaComponentStatus__EManaComponentStatus_MAX                                   = 9
};

/// Enum /Script/CriWareRuntime.EManaMaxFrameDrop
/// Size: 0x13
enum class EManaMaxFrameDrop : uint8_t
{
	EManaMaxFrameDrop__Disabled                                                      = 0,
	EManaMaxFrameDrop__One                                                           = 1,
	EManaMaxFrameDrop__Two                                                           = 2,
	EManaMaxFrameDrop__Three                                                         = 3,
	EManaMaxFrameDrop__For                                                           = 4,
	EManaMaxFrameDrop__Five                                                          = 5,
	EManaMaxFrameDrop__Six                                                           = 6,
	EManaMaxFrameDrop__Seven                                                         = 7,
	EManaMaxFrameDrop__Eight                                                         = 8,
	EManaMaxFrameDrop__Nine                                                          = 9,
	EManaMaxFrameDrop__Ten                                                           = 10,
	EManaMaxFrameDrop__Infinite                                                      = 11,
	EManaMaxFrameDrop__EManaMaxFrameDrop_MAX                                         = 12
};

/// Enum /Script/CriWareRuntime.EManaPlaybackTimer
/// Size: 0x05
enum class EManaPlaybackTimer : uint8_t
{
	EManaPlaybackTimer__Default                                                      = 0,
	EManaPlaybackTimer__RealTime                                                     = 1,
	EManaPlaybackTimer__FrameTime                                                    = 2,
	EManaPlaybackTimer__Manual                                                       = 3,
	EManaPlaybackTimer__EManaPlaybackTimer_MAX                                       = 4
};

/// Enum /Script/CriWareRuntime.EAtomSpeakerID
/// Size: 0x09
enum class EAtomSpeakerID : uint8_t
{
	EAtomSpeakerID__FrontLeft                                                        = 0,
	EAtomSpeakerID__FrontRight                                                       = 1,
	EAtomSpeakerID__FrontCenter                                                      = 2,
	EAtomSpeakerID__LowFrequency                                                     = 3,
	EAtomSpeakerID__SurroundLeft                                                     = 4,
	EAtomSpeakerID__SurroundRight                                                    = 5,
	EAtomSpeakerID__SurroundBackLeft                                                 = 6,
	EAtomSpeakerID__SurroundBackRight                                                = 7,
	EAtomSpeakerID__EAtomSpeakerID_MAX                                               = 8
};

/// Enum /Script/CriWareRuntime.EManaFrameAction
/// Size: 0x04
enum class EManaFrameAction : uint8_t
{
	EManaFrameAction__Default                                                        = 0,
	EManaFrameAction__Hold                                                           = 1,
	EManaFrameAction__Clear                                                          = 2,
	EManaFrameAction__EManaFrameAction_MAX                                           = 3
};

/// Enum /Script/CriWareRuntime.EAtomSortOrderType
/// Size: 0x03
enum class EAtomSortOrderType : uint8_t
{
	EAtomSortOrderType__Ascending                                                    = 0,
	EAtomSortOrderType__Descending                                                   = 1,
	EAtomSortOrderType__EAtomSortOrderType_MAX                                       = 2
};

/// Enum /Script/CriWareRuntime.EAtomProfileSortType
/// Size: 0x05
enum class EAtomProfileSortType : uint8_t
{
	EAtomProfileSortType__AtomComponentID                                            = 0,
	EAtomProfileSortType__Distance                                                   = 1,
	EAtomProfileSortType__Name                                                       = 2,
	EAtomProfileSortType__Time                                                       = 3,
	EAtomProfileSortType__EAtomProfileSortType_MAX                                   = 4
};

/// Enum /Script/CriWareRuntime.ECriWareSpeakerSystem
/// Size: 0x03
enum class ECriWareSpeakerSystem : uint8_t
{
	ECriWareSpeakerSystem__Surround5Point1                                           = 0,
	ECriWareSpeakerSystem__Surround7Point1                                           = 1,
	ECriWareSpeakerSystem__ECriWareSpeakerSystem_MAX                                 = 2
};

/// Enum /Script/CriWareRuntime.EAtomLoopSettingID_DEPRECEATED
/// Size: 0x04
enum class EAtomLoopSettingID_DEPRECEATED : uint8_t
{
	EAtomLoopSettingID_DEPRECEATED__DefaultLoop_DEPRECATED                           = 0,
	EAtomLoopSettingID_DEPRECEATED__ForceLoop_DEPRECATED                             = 1,
	EAtomLoopSettingID_DEPRECEATED__IgnoreLoop_DEPRECATED                            = 2,
	EAtomLoopSettingID_DEPRECEATED__EAtomLoopSettingID_MAX                           = 3
};

/// Enum /Script/CriWareRuntime.EAtomSoundRendererType
/// Size: 0x09
enum class EAtomSoundRendererType : uint8_t
{
	EAtomSoundRendererType__Any                                                      = 0,
	EAtomSoundRendererType__Native                                                   = 1,
	EAtomSoundRendererType__Asr                                                      = 2,
	EAtomSoundRendererType__Hardware1                                                = 1,
	EAtomSoundRendererType__Hardware2                                                = 5,
	EAtomSoundRendererType__Hardware3                                                = 9,
	EAtomSoundRendererType__Hardware4                                                = 13,
	EAtomSoundRendererType__Pad                                                      = 255,
	EAtomSoundRendererType__EAtomSoundRendererType_MAX                               = 256
};

/// Enum /Script/CriWareRuntime.EEngineIniFileType
/// Size: 0x05
enum class EEngineIniFileType : uint8_t
{
	EEngineIniFileType__EngBaseEngineIni                                             = 0,
	EEngineIniFileType__EngWindowsEngineIni                                          = 1,
	EEngineIniFileType__ProjDefaultEngineIni                                         = 4,
	EEngineIniFileType__ProjWindowsEngineIni                                         = 5,
	EEngineIniFileType__EEngineIniFileType_MAX                                       = 6
};

/// Enum /Script/CriWareRuntime.EManaComponentTextureType
/// Size: 0x08
enum class EManaComponentTextureType : uint8_t
{
	EManaComponentTextureType__Texture_Y                                             = 0,
	EManaComponentTextureType__Texture_U                                             = 1,
	EManaComponentTextureType__Texture_V                                             = 2,
	EManaComponentTextureType__Texture_A                                             = 3,
	EManaComponentTextureType__Texture_UV                                            = 4,
	EManaComponentTextureType__Texture_RGB                                           = 5,
	EManaComponentTextureType__Texture_External                                      = 6,
	EManaComponentTextureType__Texture_MAX                                           = 7
};

/// Enum /Script/CriWareRuntime.EManaSoundType
/// Size: 0x05
enum class EManaSoundType : uint8_t
{
	EManaSoundType__Adx                                                              = 0,
	EManaSoundType__HCA                                                              = 1,
	EManaSoundType__Num                                                              = 2,
	EManaSoundType__Unknown                                                          = 255,
	EManaSoundType__EManaSoundType_MAX                                               = 256
};

/// Enum /Script/CriWareRuntime.EManaColorSpace
/// Size: 0x04
enum class EManaColorSpace : uint8_t
{
	EManaColorSpace__Rec601                                                          = 0,
	EManaColorSpace__Rec709                                                          = 1,
	EManaColorSpace__Num                                                             = 2,
	EManaColorSpace__EManaColorSpace_MAX                                             = 3
};

/// Enum /Script/CriWareRuntime.EManaMovieType
/// Size: 0x06
enum class EManaMovieType : uint8_t
{
	EManaMovieType__SofdecPrime                                                      = 0,
	EManaMovieType__H264                                                             = 1,
	EManaMovieType__VP9                                                              = 2,
	EManaMovieType__Num                                                              = 3,
	EManaMovieType__Unknown                                                          = 255,
	EManaMovieType__EManaMovieType_MAX                                               = 256
};

/// Enum /Script/CriWareRuntime.EAtomSectionType
/// Size: 0x04
enum class EAtomSectionType : uint8_t
{
	EAtomSectionType__BGM                                                            = 0,
	EAtomSectionType__Voice                                                          = 1,
	EAtomSectionType__Effect                                                         = 2,
	EAtomSectionType__EAtomSectionType_MAX                                           = 3
};

/// Class /Script/CriWareRuntime.AtomAreaSoundVolume
/// Size: 0x0050 (0x000258 - 0x0002A8)
class AAtomAreaSoundVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x0258   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x025C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x025D   (0x0003)  MISSED
	FName                                              CollisionProfile;                                           // 0x0260   (0x0008)  
	float                                              SoundStopDistance;                                          // 0x0268   (0x0004)  
	bool                                               bIsEnableAtomCompoentPack;                                  // 0x026C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x026D   (0x0002)  MISSED
	bool                                               bIsAutoPlaySound;                                           // 0x026F   (0x0001)  
	bool                                               bIsDeterminationFromVolumeBoundaryPlane;                    // 0x0270   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	TArray<class UAtomComponent*>                      AtomComponents;                                             // 0x0278   (0x0010)  
	TArray<class USoundAtomCue*>                       Sounds;                                                     // 0x0288   (0x0010)  
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0298   (0x0008)  
	float                                              VolumeMultiplier;                                           // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                  // [0xa984e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xa981b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                // [0xa97060] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.GetPriority
	// float GetPriority();                                                                                                  // [0xa96d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.GetEnabled
	// bool GetEnabled();                                                                                                    // [0xa96b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.DestroySounds
	// void DestroySounds();                                                                                                 // [0xa95a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.CreateSounds
	// TArray<UAtomComponent*> CreateSounds(FVector listener_location);                                                      // [0xa958c0] Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomAsrRack
/// Size: 0x0018 (0x000028 - 0x000040)
class UAtomAsrRack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            RackId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x002C   (0x0014)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomAsrRack.SetEffectBypass
	// void SetEffectBypass(FString BusName, FString EffectName, bool Bypasses);                                             // [0xa98000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.SetBusVolumeByName
	// void SetBusVolumeByName(FString BusName, float Volume);                                                               // [0xa97de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
	// void SetBusSendLevelByName(FString SourceBusName, FString DestBusName, float Level);                                  // [0xa97910] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
	// class UAtomAsrRack* GetDefaultAsrRack();                                                                              // [0xa96ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetCurrentAppliedSnapshot
	// FString GetCurrentAppliedSnapshot(int32_t AsrRackID);                                                                 // [0xa96860] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo
	// bool GetBusAnalyzerInfo(FString DspBusName, int32_t& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels); // [0xa962b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetAsrRack
	// class UAtomAsrRack* GetAsrRack(int32_t AsrRackID);                                                                    // [0xa95d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.DetachDspBusSetting
	// void DetachDspBusSetting();                                                                                           // [0xa95a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.ConnectToPadSpeaker
	// void ConnectToPadSpeaker(int32_t UserIndex);                                                                          // [0xa95840] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.AttachDspBusSetting
	// void AttachDspBusSetting(FString SettingName);                                                                        // [0xa95690] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
	// void ApplyDspBusSnapshot(FString SnapshotName, int32_t MilliSeconds);                                                 // [0xa954f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomEntranceVolume
/// Size: 0x0020 (0x000258 - 0x000278)
class AAtomEntranceVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x0258   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x025C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0xB];                                       // 0x025D   (0x000B)  MISSED
	SDK_UNDEFINED(16,961) /* TArray<TWeakObjectPtr<AAtomAudioVolume*>> */ __um(NeighbourhoodAudioVolumeArray);     // 0x0268   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.AtomEntranceVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                  // [0xa985e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xa982d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                // [0xa97060] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.GetPriority
	// float GetPriority();                                                                                                  // [0xa96d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.GetEnabled
	// bool GetEnabled();                                                                                                    // [0xa96b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CriWareRuntime.SnapshotSwitchSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSnapshotSwitchSettings
{ 
	int32_t                                            AsrRackID;                                                  // 0x0000   (0x0004)  
	int32_t                                            DspBusSettingsID;                                           // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,962) /* FString */                __um(DspBusSettingsName);                                   // 0x0008   (0x0010)  
	int32_t                                            SnapshotID;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,963) /* FString */                __um(SnapshotName);                                         // 0x0020   (0x0010)  
	float                                              FadeTime;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.BusSendInterpolationSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FBusSendInterpolationSettings
{ 
	int32_t                                            DspBusSettingsID;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,964) /* FString */                __um(DspBusSettingsName);                                   // 0x0008   (0x0010)  
	int32_t                                            BusId;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,965) /* FString */                __um(BusName);                                              // 0x0020   (0x0010)  
	float                                              BusSendLevelForInside;                                      // 0x0030   (0x0004)  
	float                                              BusSendLevelForOutside;                                     // 0x0034   (0x0004)  
	float                                              Width;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Struct /Script/CriWareRuntime.AisacControlInterpolationSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAisacControlInterpolationSettings
{ 
	int32_t                                            AisacControlID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,966) /* FString */                __um(AisacControlName);                                     // 0x0008   (0x0010)  
	float                                              AisacControlValueForInside;                                 // 0x0018   (0x0004)  
	float                                              AisacControlValueForOutside;                                // 0x001C   (0x0004)  
	float                                              Width;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomAudioVolumeParameters
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAtomAudioVolumeParameters
{ 
	bool                                               bUseSnapshotSettings;                                       // 0x0000   (0x0001)  
	bool                                               bUseBusSendSettings;                                        // 0x0001   (0x0001)  
	bool                                               bUseAisacControlSettings;                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              MaxDistanceForEntranceVolume;                               // 0x0004   (0x0004)  
	bool                                               bSwitchIntepolationInsideForBus;                            // 0x0008   (0x0001)  
	bool                                               bSwitchIntepolationInsideForAisac;                          // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FSnapshotSwitchSettings>                    SnapshotSwitchSettings;                                     // 0x0010   (0x0010)  
	TArray<FBusSendInterpolationSettings>              BusSendInterpolateSettings;                                 // 0x0020   (0x0010)  
	TArray<FAisacControlInterpolationSettings>         AisacControlInterpolateSettings;                            // 0x0030   (0x0010)  
};

/// Class /Script/CriWareRuntime.AtomAudioVolume
/// Size: 0x0088 (0x000258 - 0x0002E0)
class AAtomAudioVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x0258   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x025C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x025D   (0x0003)  MISSED
	FName                                              CollisionProfile;                                           // 0x0260   (0x0008)  
	bool                                               bAutoSettingEntranceVolume;                                 // 0x0268   (0x0001)  
	bool                                               bAutoSettingNeighbourAudioVolumeToEntranceVolume;           // 0x0269   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x026A   (0x0006)  MISSED
	TArray<FName>                                      AudioVolumeTags;                                            // 0x0270   (0x0010)  
	bool                                               bOverrideAtomAudioVolume;                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0281   (0x0007)  MISSED
	class UAtomAudioVolumeSettings*                    AtomAudioVolumeSettings;                                    // 0x0288   (0x0008)  
	FAtomAudioVolumeParameters                         AtomAudioVolumeSettingsOverrides;                           // 0x0290   (0x0040)  
	TArray<class AAtomEntranceVolume*>                 EntranceVolumes;                                            // 0x02D0   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetReverbSettings
	// void SetReverbSettings(FSnapshotSwitchSettings& NewReverbSettings);                                                   // [0xa98660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                  // [0xa98560] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                    // [0xa98240] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                // [0xa97060] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomAudioVolume.GetPriority
	// float GetPriority();                                                                                                  // [0xa96d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAudioVolume.GetEnabled
	// bool GetEnabled();                                                                                                    // [0xa96b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAudioVolume.EnableAllAudioVolume
	// void EnableAllAudioVolume(bool bEnable);                                                                              // [0xa95a50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomAudioVolumeSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UAtomAudioVolumeSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FAtomAudioVolumeParameters                         AtomAudioVolumeParameters;                                  // 0x0028   (0x0040)  
};

/// Class /Script/CriWareRuntime.AtomCategory
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomCategory : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomCategory.StopByName
	// void StopByName(FString CategoryName);                                                                                // [0xa98b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.SetVolumeByName
	// void SetVolumeByName(FString CategoryName, float Volume);                                                             // [0xa98a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.SetAisacControlByName
	// void SetAisacControlByName(FString CategoryName, FString AisacName, float value);                                     // [0xa97540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.ResetAllAisacControlByName
	// bool ResetAllAisacControlByName(FString CategoryName);                                                                // [0xa97330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.ResetAllAisacControlById
	// bool ResetAllAisacControlById(int32_t CategoryId);                                                                    // [0xa972b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.PauseByName
	// void PauseByName(FString CategoryName, bool bPause);                                                                  // [0xa97110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.IsPausedByName
	// bool IsPausedByName(FString CategoryName);                                                                            // [0xa96f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetVolumeByName
	// float GetVolumeByName(FString CategoryName);                                                                          // [0xa96de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName
	// int32_t GetNumAttachedAisacsByName(FString CategoryName);                                                             // [0xa96bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetNumAttachedAisacsById
	// int32_t GetNumAttachedAisacsById(int32_t CategoryId);                                                                 // [0xa96b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName
	// float GetCurrentAisacControlValueByName(FString CategoryName, FString AisacControlName);                              // [0xa966f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById
	// float GetCurrentAisacControlValueById(int32_t CategoryId, int32_t AisacControlID);                                    // [0xa96630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName
	// void GetAttachedAisacInfoByName(FString CategoryName, int32_t AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo); // [0xa95fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetAttachedAisacInfoById
	// void GetAttachedAisacInfoById(int32_t CategoryId, int32_t AisacAttachedIndex, bool& IsSuccess, FAtomAisacInfo& AisacInfo); // [0xa95e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CriWareRuntime.AtomAisacControlParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomAisacControlParam
{ 
	SDK_UNDEFINED(16,967) /* FString */                __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomSelectorParam
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomSelectorParam
{ 
	SDK_UNDEFINED(16,968) /* FString */                __um(Selector);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,969) /* FString */                __um(Label);                                                // 0x0010   (0x0010)  
};

/// Class /Script/CriWareRuntime.AtomComponent
/// Size: 0x0DE0 (0x0001F0 - 0x000FD0)
class UAtomComponent : public USceneComponent
{ 
public:
	class USoundAtomCue*                               Sound;                                                      // 0x01F0   (0x0008)  
	bool                                               bAutoDestroy : 1;                                           // 0x01F8:0 (0x0001)  
	bool                                               bPersistAcrossLevelTransition : 1;                          // 0x01F8:1 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x01F8:2 (0x0001)  MISSED
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x01F8:3 (0x0001)  
	bool                                               bIsUISound : 1;                                             // 0x01F8:4 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              DefaultVolume;                                              // 0x01FC   (0x0004)  
	bool                                               bEnableMultipleSoundPlayback : 1;                           // 0x0200:0 (0x0001)  
	bool                                               bUsePlaylist : 1;                                           // 0x0200:1 (0x0001)  
	bool                                               bIsMovable;                                                 // 0x0201   (0x0001)  
	bool                                               bCanStraddleAudioVolume;                                    // 0x0202   (0x0001)  
	bool                                               bUseAudioVolume;                                            // 0x0203   (0x0001)  
	bool                                               bUseAreaSoundVolume;                                        // 0x0204   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0205   (0x0003)  MISSED
	class UAtomSoundObject*                            SoundObject;                                                // 0x0208   (0x0008)  
	int32_t                                            DefaultBlockIndex;                                          // 0x0210   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0214   (0x0004)  MISSED
	TArray<FAtomAisacControlParam>                     DefaultAisacControl;                                        // 0x0218   (0x0010)  
	TArray<FAtomSelectorParam>                         DefaultSelectorLabel;                                       // 0x0228   (0x0010)  
	EAtomLoopSetting                                   LoopSetting;                                                // 0x0238   (0x0001)  
	bool                                               bOnly2DSound : 1;                                           // 0x0239:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x6];                                       // 0x023A   (0x0006)  MISSED
	SDK_UNDEFINED(16,970) /* FMulticastInlineDelegate */ __um(OnStatusChanged);                                    // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,971) /* FMulticastInlineDelegate */ __um(OnAudioVolumeChanged);                               // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,972) /* FMulticastInlineDelegate */ __um(OnAudioFinished);                                    // 0x0260   (0x0010)  
	class UWorld*                                      PlayWorld;                                                  // 0x0270   (0x0008)  
	class UGameViewportClient*                         GameViewport;                                               // 0x0278   (0x0008)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0280   (0x0018)  MISSED
	class UAtomSoundObject*                            DefaultSoundObject;                                         // 0x0298   (0x0008)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x02A0:0 (0x0001)  
	unsigned char                                      UnknownData06_4[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x02A8   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x02B0   (0x03A0)  
	unsigned char                                      UnknownData07_5[0x940];                                     // 0x0650   (0x0940)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0F90   (0x0008)  
	unsigned char                                      UnknownData08_5[0x10];                                      // 0x0F98   (0x0010)  MISSED
	class UAtomSoundObject*                            AppliedSoundObject;                                         // 0x0FA8   (0x0008)  
	unsigned char                                      UnknownData09_6[0x20];                                      // 0x0FB0   (0x0020)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomComponent.StopWithoutReleaseTime
	// void StopWithoutReleaseTime();                                                                                        // [0xa98c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Stop
	// void Stop();                                                                                                          // [0xa98b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetVolume
	// void SetVolume(float Volume);                                                                                         // [0xa98990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSoundObject
	// void SetSoundObject(class UAtomSoundObject* InSoundObject);                                                           // [0xa98910] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSound
	// void SetSound(class USoundAtomCue* NewSound);                                                                         // [0xa98890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSelectorLabel
	// void SetSelectorLabel(FString Selector, FString Label);                                                               // [0xa98720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetPitchMultiplier
	// void SetPitchMultiplier(float NewPitchMultiplier);                                                                    // [0xa98460] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetPitch
	// void SetPitch(float Pitch);                                                                                           // [0xa983e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetNextBlockIndex
	// void SetNextBlockIndex(int32_t BlockIndex);                                                                           // [0xa98360] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetDspTimeStretchRatio
	// void SetDspTimeStretchRatio(float Ratio);                                                                             // [0xa97f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable
	// void SetDefaultAttenuationEnable(bool bEnable);                                                                       // [0xa97f10] Final|Native|Static|Public 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
	// void SetBusSendLevelOffsetByName(FString BusName, float LevelOffset);                                                 // [0xa97cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelOffset
	// void SetBusSendLevelOffset(int32_t BusId, float LevelOffset);                                                         // [0xa97be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelByName
	// void SetBusSendLevelByName(FString BusName, float Level);                                                             // [0xa97ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevel
	// void SetBusSendLevel(int32_t BusId, float Level);                                                                     // [0xa97840] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAsrRackIdArray
	// void SetAsrRackIdArray(TArray<int32_t> AsrRackIDs);                                                                   // [0xa97760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAsrRackID
	// void SetAsrRackID(int32_t asr_rack_id);                                                                               // [0xa976e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAisacByName
	// void SetAisacByName(FString ControlName, float ControlValue);                                                         // [0xa97410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Play
	// void Play(float StartTime);                                                                                           // [0xa97230] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Pause
	// void Pause(bool bPause);                                                                                              // [0xa97080] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.OnStatusChanged__DelegateSignature
	// void OnStatusChanged__DelegateSignature(EAtomComponentStatus Status, class UAtomComponent* AtomComponent);            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.OnAudioVolumeChanged__DelegateSignature
	// void OnAudioVolumeChanged__DelegateSignature(EAtomAudioVolumeType Type, class AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick); // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
	// void OnAudioFinished__DelegateSignature();                                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.IsReducingTickFrequency
	// bool IsReducingTickFrequency();                                                                                       // [0xa96ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0xa97030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsPaused
	// bool IsPaused();                                                                                                      // [0xa96f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsLoop
	// bool IsLoop();                                                                                                        // [0xa96ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.HasBeenEconomicTick
	// bool HasBeenEconomicTick();                                                                                           // [0xa96ec0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetVolume
	// float GetVolume();                                                                                                    // [0xa96db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.GetTime
	// float GetTime();                                                                                                      // [0xa96d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetStatus
	// EAtomComponentStatus GetStatus();                                                                                     // [0xa96d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetSequencePosition
	// float GetSequencePosition();                                                                                          // [0xa96d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetNumQueuedSounds
	// int32_t GetNumQueuedSounds();                                                                                         // [0xa96cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetMaxAttenuationDistance
	// float GetMaxAttenuationDistance();                                                                                    // [0xa96b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickFrequency
	// float GetEconomicTickFrequency();                                                                                     // [0xa96a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickDistanceMargin
	// float GetEconomicTickDistanceMargin();                                                                                // [0xa96a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickDistance
	// float GetEconomicTickDistance();                                                                                      // [0xa96a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable
	// bool GetDefaultAttenuationEnable();                                                                                   // [0xa96af0] Final|Native|Static|Public 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentMaxAttenuationDistance
	// float GetCurrentMaxAttenuationDistance();                                                                             // [0xa96a90] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickMarginDistance
	// float GetCurrentEconomicTickMarginDistance();                                                                         // [0xa96a60] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickFrequency
	// float GetCurrentEconomicTickFrequency();                                                                              // [0xa96a30] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickBoundaryDistance
	// float GetCurrentEconomicTickBoundaryDistance();                                                                       // [0xa96a00] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentCullingMarginDistance
	// float GetCurrentCullingMarginDistance();                                                                              // [0xa96600] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentCullingBoundaryDistance
	// float GetCurrentCullingBoundaryDistance();                                                                            // [0xa965d0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentBelongingAudioVolume
	// class AAtomAudioVolume* GetCurrentBelongingAudioVolume(EAtomAudioVolumeType Type, bool IsNeighbor);                   // [0xa96930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCullDistanceMargin
	// float GetCullDistanceMargin();                                                                                        // [0xa96600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCullDistance
	// float GetCullDistance();                                                                                              // [0xa965d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCueName
	// FString GetCueName();                                                                                                 // [0xa96510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetAudioVolumeValueMap
	// TMap<FString, float> GetAudioVolumeValueMap(EAtomAudioVolumeType Type);                                               // [0xa961a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.GetAtomComponentID
	// int32_t GetAtomComponentID();                                                                                         // [0xa95e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetAtomComponentFromID
	// class UAtomComponent* GetAtomComponentFromID(int32_t TargetID);                                                       // [0xa95da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.FadeOut
	// void FadeOut(float FadeOutDuration, float FadeVolumeLevel);                                                           // [0xa95c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.FadeIn
	// void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);                                            // [0xa95b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.EnqueueSound
	// void EnqueueSound(class USoundAtomCue* NewSound);                                                                     // [0xa95ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.DestroyComponentByID
	// void DestroyComponentByID(int32_t TargetID);                                                                          // [0xa959a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                             // [0xa95770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.AttachAreaSoundVolume
	// void AttachAreaSoundVolume(class AAtomAreaSoundVolume* sound_shape_volume);                                           // [0xa95610] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.AdjustAttenuation
	// void AdjustAttenuation(FSoundAttenuationSettings& InAttenuationSettings);                                             // [0xa95420] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomComponentPool
/// Size: 0x0040 (0x000028 - 0x000068)
class UAtomComponentPool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UAtomComponent*>                      Pool;                                                       // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/CriWareRuntime.AtomCueSheetLoaderComponent
/// Size: 0x00A0 (0x0001F0 - 0x000290)
class UAtomCueSheetLoaderComponent : public USceneComponent
{ 
public:
	FSoftObjectPath                                    CueSheetReference;                                          // 0x01F0   (0x0018)  
	class UCriFsBinderComponent*                       BinderComponent;                                            // 0x0208   (0x0008)  
	SDK_UNDEFINED(16,973) /* FMulticastInlineDelegate */ __um(OnLoadCompleted);                                    // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,974) /* FMulticastInlineDelegate */ __um(OnLoadError);                                        // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0230   (0x0030)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0260   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0268   (0x0028)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature
	// void OnLoadError__DelegateSignature();                                                                                // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature();                                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature
	// void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);                                       // [0x15dd8c0] Public|Delegate      
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet
	// void LoadAtomCueSheet(class UObject* WorldContextObject, TWeakObjectPtr<USoundAtomCueSheet*> Asset, FDelegateProperty OnLoaded, FLatentActionInfo LatentInfo); // [0xa9d670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.Load
	// void Load();                                                                                                          // [0xa9d5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus
	// EAtomCueSheetLoaderComponentStatus GetStatus();                                                                       // [0xa9d5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet
	// class USoundAtomCueSheet* GetAtomCueSheet();                                                                          // [0xa9d350] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomDeviceWatcher
/// Size: 0x0028 (0x000028 - 0x000050)
class UAtomDeviceWatcher : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,975) /* FMulticastInlineDelegate */ __um(OnDeviceUpdated);                                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0038   (0x0018)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature
	// void OnDeviceUpdated__DelegateSignature();                                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.GetDeviceName
	// FString GetDeviceName();                                                                                              // [0xa9d3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount
	// int32_t GetDeviceChannelCount();                                                                                      // [0xa9d380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomDisposer
/// Size: 0x0010 (0x000220 - 0x000230)
class AAtomDisposer : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0220   (0x0010)  MISSED
};

/// Class /Script/CriWareRuntime.AtomListenerFocusPoint
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UAtomListenerFocusPoint : public USceneComponent
{ 
public:
	float                                              DistanceFocusLevel;                                         // 0x01F0   (0x0004)  
	float                                              DirectionFocusLevel;                                        // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Class /Script/CriWareRuntime.AtomParameterComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UAtomParameterComponent : public UActorComponent
{ 
public:
	class UAtomSoundObject*                            SoundObject;                                                // 0x00B0   (0x0008)  
};

/// Class /Script/CriWareRuntime.AtomProfileData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomProfileData : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate
	// TArray<FAtomProfileItem> CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);                             // [0xa9d1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort
	// void CriWareAdx2ProfileDataSort(TArray<FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<FAtomProfileItem>& sorted_item); // [0xa9cfb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomSound
/// Size: 0x0008 (0x000220 - 0x000228)
class AAtomSound : public AActor
{ 
public:
	class UAtomComponent*                              AtomComponent;                                              // 0x0220   (0x0008)  
};

/// Class /Script/CriWareRuntime.AtomSoundData
/// Size: 0x0010 (0x000220 - 0x000230)
class AAtomSoundData : public AActor
{ 
public:
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0220   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Class /Script/CriWareRuntime.AtomSoundObject
/// Size: 0x0018 (0x000030 - 0x000048)
class UAtomSoundObject : public UDataAsset
{ 
public:
	bool                                               EnableVoiceLimitScope;                                      // 0x0030   (0x0001)  
	bool                                               EnableCategoryCueLimitScope;                                // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0032   (0x0016)  MISSED
};

/// Class /Script/CriWareRuntime.AtomSpectrumAnalyzer
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB
	// void GetLevelsDB(float display_range, TArray<float>& spectra);                                                        // [0xa9d4d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.GetLevels
	// void GetLevels(TArray<float>& spectra);                                                                               // [0xa9d430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra
	// void CreateDspSpectra(class UAtomAsrRack* asr_rack, FString bus_name, int32_t num_bands);                             // [0xa9cda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomStatics.UpdateDistanceFactorForAllSounds
	// void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);                                                       // [0xa9ec20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.StopAllSoundsForKeyFromAtomComponentIds
	// void StopAllSoundsForKeyFromAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef); // [0xa9eb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.StopAllSounds
	// void StopAllSounds();                                                                                                 // [0xa9eb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSoundAttached
	// class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // [0xa9e7c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSoundAtLocation
	// class UAtomComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // [0xa9e4f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSound2DEx
	// class UAtomComponent* SpawnSound2DEx(class UObject* WorldContextObject, class USoundAtomCue* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // [0xa9e300] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSound2D
	// class UAtomComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // [0xa9e150] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetAtomComponentPriority
	// void SetAtomComponentPriority(class UAtomComponent* AtomComponent, int32_t Priority);                                 // [0xa9e0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundForAnimNotify
	// class UAtomComponent* PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow); // [0xa9dde0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundAttached
	// class UAtomComponent* PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0xa9db60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundAtLocation
	// void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings); // [0xa9d8d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PauseAudioOutput
	// void PauseAudioOutput(bool bPause);                                                                                   // [0xa9d850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.LoadAtomConfig
	// bool LoadAtomConfig(class USoundAtomConfig* AcfObject);                                                               // [0xa9d5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.CreateRootedAtomComponent
	// class UAtomComponent* CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);                // [0xa9cef0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.AddToAtomComponentIds
	// void AddToAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef, int32_t AtomComponentID); // [0xa9ccb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomTriggerTableFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
	// bool GetDataTableRowFromName(class UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow);                        // [0xaa1740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomUnrealSoundRenderer
/// Size: 0x8050 (0x000360 - 0x0083B0)
class UAtomUnrealSoundRenderer : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_1[0x8050];                                    // 0x0360   (0x8050)  MISSED
};

/// Class /Script/CriWareRuntime.CriFsBinderComponent
/// Size: 0x0060 (0x0001F0 - 0x000250)
class UCriFsBinderComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,976) /* FString */                __um(FilePath);                                             // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,977) /* FMulticastInlineDelegate */ __um(OnBindCompleted);                                    // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,978) /* FMulticastInlineDelegate */ __um(OnBindError);                                        // 0x0210   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0220   (0x0030)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.CriFsBinderComponent.Stop
	// void Stop();                                                                                                          // [0xaa2ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature
	// void OnBindError__DelegateSignature();                                                                                // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature
	// void OnBindCompleted__DelegateSignature();                                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.GetStatus
	// ECriFsBinderStatus GetStatus();                                                                                       // [0xaa1960] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.Bind
	// void Bind();                                                                                                          // [0xaa1470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriFsLoader
/// Size: 0x0008 (0x000220 - 0x000228)
class ACriFsLoader : public AActor
{ 
public:
	class UCriFsLoaderComponent*                       LoaderComponent;                                            // 0x0220   (0x0008)  
};

/// Class /Script/CriWareRuntime.CriFsLoaderComponent
/// Size: 0x0080 (0x0001F0 - 0x000270)
class UCriFsLoaderComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,979) /* FString */                __um(FilePath);                                             // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,980) /* FMulticastInlineDelegate */ __um(OnLoadCompleted);                                    // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,981) /* FMulticastInlineDelegate */ __um(OnLoadError);                                        // 0x0210   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0220   (0x0050)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
	// void OnLoadError__DelegateSignature();                                                                                // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature();                                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.Load
	// void Load();                                                                                                          // [0xaa1ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.GetStatus
	// ECriFsLoaderStatus GetStatus();                                                                                       // [0xaa1990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.GetDataArray
	// TArray<char> GetDataArray();                                                                                          // [0xaa16b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriWareFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray
	// void SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles);                                // [0xaa2710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
	// void SetGlobalLabelToSelectorByName(FString SelectorName, FString LabelName);                                         // [0xaa24b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
	// void SetGameVariableByName(FString GameVariableName, float value);                                                    // [0xaa2390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriWareInitializer
/// Size: 0x0000 (0x000028 - 0x000028)
class UCriWareInitializer : public UObject
{ 
public:
};

/// Struct /Script/CriWareRuntime.AtomAsrRackConfigUI
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAtomAsrRackConfigUI
{ 
	SDK_UNDEFINED(1,982) /* TEnumAsByte<EAtomSoundRendererType> */ __um(SoundRendererTypeUI);                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ElementID;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomAsrRackConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAtomAsrRackConfig
{ 
	int32_t                                            SoundRendererType;                                          // 0x0000   (0x0004)  
	int32_t                                            ElementID;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/CriWareRuntime.CriWarePluginSettings
/// Size: 0x02F0 (0x000028 - 0x000318)
class UCriWarePluginSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bNoExistCriWareIni;                                         // 0x0028   (0x0001)  
	bool                                               bEditableCriWareAdxLipSyncSetting;                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FDirectoryPath                                     NonAssetContentDir;                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,983) /* FString */                __um(ContentDir);                                           // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            NumBinders;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	int32_t                                            MaxBinds;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	int32_t                                            NumLoaders;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	int32_t                                            MaxPath;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	bool                                               OutputsLogFileSystem;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            PS4_FileAccessThreadAffinityMask;                           // 0x0084   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x0088   (0x0004)  MISSED
	int32_t                                            PS4_DataDecompressionThreadAffinityMask;                    // 0x008C   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0090   (0x0004)  MISSED
	int32_t                                            PS4_MemoryFileSystemThreadAffinityMask;                     // 0x0094   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x0098   (0x0004)  MISSED
	int32_t                                            PS4_FileAccessThreadPriority;                               // 0x009C   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x00A0   (0x0004)  MISSED
	int32_t                                            PS4_DataDecompressionThreadPriority;                        // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData12_5[0x4];                                       // 0x00A8   (0x0004)  MISSED
	int32_t                                            PS4_MemoryFileSystemThreadPriority;                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00B0   (0x0004)  MISSED
	bool                                               AutomaticallyCreateCueAsset;                                // 0x00B4   (0x0001)  
	bool                                               UsesInGamePreview;                                          // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData14_5[0x1];                                       // 0x00B6   (0x0001)  MISSED
	bool                                               OutputsLogAtom;                                             // 0x00B7   (0x0001)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x00B8   (0x0004)  MISSED
	int32_t                                            MonitorCommunicationBufferSize;                             // 0x00BC   (0x0004)  
	unsigned char                                      UnknownData16_5[0x4];                                       // 0x00C0   (0x0004)  MISSED
	int32_t                                            MaxVirtualVoices;                                           // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData17_5[0x4];                                       // 0x00C8   (0x0004)  MISSED
	int32_t                                            NumStandardMemoryVoices;                                    // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData18_5[0x4];                                       // 0x00D0   (0x0004)  MISSED
	int32_t                                            StandardMemoryVoiceNumChannels;                             // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData19_5[0x4];                                       // 0x00D8   (0x0004)  MISSED
	int32_t                                            StandardMemoryVoiceSamplingRate;                            // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData20_5[0x4];                                       // 0x00E0   (0x0004)  MISSED
	int32_t                                            NumStandardStreamingVoices;                                 // 0x00E4   (0x0004)  
	unsigned char                                      UnknownData21_5[0x4];                                       // 0x00E8   (0x0004)  MISSED
	int32_t                                            StandardStreamingVoiceNumChannels;                          // 0x00EC   (0x0004)  
	unsigned char                                      UnknownData22_5[0x4];                                       // 0x00F0   (0x0004)  MISSED
	int32_t                                            StandardStreamingVoiceSamplingRate;                         // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData23_5[0x4];                                       // 0x00F8   (0x0004)  MISSED
	bool                                               PoolAtomComponent;                                          // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData24_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FSoftObjectPath                                    AtomConfig;                                                 // 0x0100   (0x0018)  
	unsigned char                                      UnknownData25_5[0x18];                                      // 0x0118   (0x0018)  MISSED
	SDK_UNDEFINED(16,984) /* FString */                __um(AcfFileName);                                          // 0x0130   (0x0010)  
	FSoftObjectPath                                    AtomConfigDataTable;                                        // 0x0140   (0x0018)  
	unsigned char                                      UnknownData26_5[0x18];                                      // 0x0158   (0x0018)  MISSED
	float                                              DistanceFactor;                                             // 0x0170   (0x0004)  
	unsigned char                                      UnknownData27_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	SDK_UNDEFINED(1,985) /* TEnumAsByte<EAtomSoundRendererType> */ __um(SoundRendererTypeUI);                      // 0x0178   (0x0001)  
	unsigned char                                      UnknownData28_5[0x3];                                       // 0x0179   (0x0003)  MISSED
	int32_t                                            SoundRendererType;                                          // 0x017C   (0x0004)  
	unsigned char                                      UnknownData29_5[0x8];                                       // 0x0180   (0x0008)  MISSED
	TArray<FAtomAsrRackConfigUI>                       AsrRackConfigUI;                                            // 0x0188   (0x0010)  
	TArray<FAtomAsrRackConfig>                         AsrRackConfig;                                              // 0x0198   (0x0010)  
	unsigned char                                      UnknownData30_5[0x10];                                      // 0x01A8   (0x0010)  MISSED
	SDK_UNDEFINED(16,986) /* FString */                __um(Hardware1);                                            // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,987) /* FString */                __um(Hardware2);                                            // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,988) /* FString */                __um(Hardware3);                                            // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,989) /* FString */                __um(Hardware4);                                            // 0x01E8   (0x0010)  
	float                                              EconomicTickMarginDistance;                                 // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData31_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	int32_t                                            EconomicTickFrequency;                                      // 0x0200   (0x0004)  
	unsigned char                                      UnknownData32_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	float                                              CullingMarginDistance;                                      // 0x0208   (0x0004)  
	unsigned char                                      UnknownData33_5[0x4];                                       // 0x020C   (0x0004)  MISSED
	int32_t                                            HcaMxVoiceSamplingRate;                                     // 0x0210   (0x0004)  
	unsigned char                                      UnknownData34_5[0x4];                                       // 0x0214   (0x0004)  MISSED
	int32_t                                            NumHcaMxMemoryVoices;                                       // 0x0218   (0x0004)  
	unsigned char                                      UnknownData35_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	int32_t                                            HcaMxMemoryVoiceNumChannels;                                // 0x0220   (0x0004)  
	unsigned char                                      UnknownData36_5[0x4];                                       // 0x0224   (0x0004)  MISSED
	int32_t                                            NumHcaMxStreamingVoices;                                    // 0x0228   (0x0004)  
	unsigned char                                      UnknownData37_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	int32_t                                            HcaMxStreamingVoiceNumChannels;                             // 0x0230   (0x0004)  
	unsigned char                                      UnknownData38_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	bool                                               WASAPI_IsExclusive;                                         // 0x0238   (0x0001)  
	unsigned char                                      UnknownData39_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	int32_t                                            WASAPI_BitsPerSample;                                       // 0x023C   (0x0004)  
	unsigned char                                      UnknownData40_5[0x4];                                       // 0x0240   (0x0004)  MISSED
	int32_t                                            WASAPI_SamplingRate;                                        // 0x0244   (0x0004)  
	unsigned char                                      UnknownData41_5[0x4];                                       // 0x0248   (0x0004)  MISSED
	int32_t                                            WASAPI_NumChannels;                                         // 0x024C   (0x0004)  
	unsigned char                                      UnknownData42_5[0x4];                                       // 0x0250   (0x0004)  MISSED
	int32_t                                            PS4_ServerThreadAffinityMask;                               // 0x0254   (0x0004)  
	unsigned char                                      UnknownData43_5[0x4];                                       // 0x0258   (0x0004)  MISSED
	int32_t                                            PS4_OutputThreadAffinityMask;                               // 0x025C   (0x0004)  
	unsigned char                                      UnknownData44_5[0x4];                                       // 0x0260   (0x0004)  MISSED
	int32_t                                            PS4_ServerThreadPriority;                                   // 0x0264   (0x0004)  
	unsigned char                                      UnknownData45_5[0x4];                                       // 0x0268   (0x0004)  MISSED
	int32_t                                            PS4_OutputThreadPriority;                                   // 0x026C   (0x0004)  
	unsigned char                                      UnknownData46_5[0x4];                                       // 0x0270   (0x0004)  MISSED
	bool                                               PS4_UseAudio3d;                                             // 0x0274   (0x0001)  
	unsigned char                                      UnknownData47_5[0x3];                                       // 0x0275   (0x0003)  MISSED
	int32_t                                            PS4_NumberOfAudio3dMemoryVoices;                            // 0x0278   (0x0004)  
	unsigned char                                      UnknownData48_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	int32_t                                            PS4_SamplingRateOfAudio3dMemoryVoices;                      // 0x0280   (0x0004)  
	unsigned char                                      UnknownData49_5[0x4];                                       // 0x0284   (0x0004)  MISSED
	int32_t                                            PS4_NumberOfAudio3dStreamingVoices;                         // 0x0288   (0x0004)  
	unsigned char                                      UnknownData50_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	int32_t                                            PS4_SamplingRateOfAudio3dStreamingVoices;                   // 0x0290   (0x0004)  
	unsigned char                                      UnknownData51_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	int32_t                                            Switch_NumOpusMemoryVoices;                                 // 0x0298   (0x0004)  
	unsigned char                                      UnknownData52_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	int32_t                                            Switch_OpusMemoryVoiceNumChannels;                          // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData53_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	int32_t                                            Switch_OpusMemoryVoiceSamplingRate;                         // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData54_5[0x4];                                       // 0x02AC   (0x0004)  MISSED
	int32_t                                            Switch_NumOpusStreamingVoices;                              // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData55_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	int32_t                                            Switch_OpusStreamingVoiceNumChannels;                       // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData56_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	int32_t                                            Switch_OpusStreamingVoiceSamplingRate;                      // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData57_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	bool                                               UseUnrealSoundRenderer;                                     // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData58_5[0x1];                                       // 0x02C9   (0x0001)  MISSED
	bool                                               InitializeMana;                                             // 0x02CA   (0x0001)  
	unsigned char                                      UnknownData59_5[0x1];                                       // 0x02CB   (0x0001)  MISSED
	bool                                               EnableDecodeSkip;                                           // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData60_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	int32_t                                            MaxDecoderHandles;                                          // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData61_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	int32_t                                            MaxManaBPS;                                                 // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData62_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	int32_t                                            MaxManaStreams;                                             // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData63_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	bool                                               UseH264Decoder;                                             // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData64_5[0x1];                                       // 0x02E9   (0x0001)  MISSED
	bool                                               InitializeAdxLipSync;                                       // 0x02EA   (0x0001)  
	unsigned char                                      UnknownData65_5[0x1];                                       // 0x02EB   (0x0001)  MISSED
	int32_t                                            MaxNumAnalyzerHandles;                                      // 0x02EC   (0x0004)  
	unsigned char                                      UnknownData66_5[0x4];                                       // 0x02F0   (0x0004)  MISSED
	bool                                               bUseManaStartupMovies;                                      // 0x02F4   (0x0001)  
	bool                                               bWaitForMoviesToComplete;                                   // 0x02F5   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x02F6   (0x0001)  
	unsigned char                                      UnknownData67_5[0x1];                                       // 0x02F7   (0x0001)  MISSED
	SDK_UNDEFINED(16,990) /* TArray<FString> */        __um(StartupMovies);                                        // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData68_6[0x10];                                      // 0x0308   (0x0010)  MISSED
};

/// Class /Script/CriWareRuntime.ManaComponent
/// Size: 0x0190 (0x0000B0 - 0x000240)
class UManaComponent : public UActorComponent
{ 
public:
	class UManaTexture*                                Movie;                                                      // 0x00B0   (0x0008)  
	SDK_UNDEFINED(16,991) /* FMulticastInlineDelegate */ __um(OnEventPoint);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,992) /* FMulticastInlineDelegate */ __um(OnSubtitleChanged);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,993) /* FMulticastInlineDelegate */ __um(OnStatusChanged);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,994) /* FMulticastInlineDelegate */ __um(OnMovieChanged);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,995) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,996) /* FDelegateProperty */      __um(OnRequestData);                                        // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0118   (0x0040)  MISSED
	class UManaPlaylist*                               Playlist;                                                   // 0x0158   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	bool                                               bLoop;                                                      // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	int32_t                                            AudioTrack;                                                 // 0x016C   (0x0004)  
	int32_t                                            SubAudioTrack;                                              // 0x0170   (0x0004)  
	int32_t                                            ExtraAudioTrack;                                            // 0x0174   (0x0004)  
	SDK_UNDEFINED(16,997) /* FString */                __um(AudioCategoryName);                                    // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,998) /* FString */                __um(SubAudioCategoryName);                                 // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,999) /* FString */                __um(ExtraAudioCategoryName);                               // 0x0198   (0x0010)  
	bool                                               bSubtitlesEnabled;                                          // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            SubtitlesChannel;                                           // 0x01AC   (0x0004)  
	EManaSubtitlesEncoding                             SubtitlesEncoding;                                          // 0x01B0   (0x0001)  
	EManaFrameAction                                   EndFrameAction;                                             // 0x01B1   (0x0001)  
	EManaPlaybackTimer                                 PlaybackTimer;                                              // 0x01B2   (0x0001)  
	EManaMaxFrameDrop                                  MaxFrameDrop;                                               // 0x01B3   (0x0001)  
	unsigned char                                      UnknownData04_6[0x8C];                                      // 0x01B4   (0x008C)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaComponent.ToIndex
	// bool ToIndex(int32_t Index);                                                                                          // [0xaa2be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Stop
	// void Stop();                                                                                                          // [0xaa2bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetVolume
	// void SetVolume(float Volume);                                                                                         // [0xaa2b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetTexture
	// void SetTexture(class UManaTexture* Texture);                                                                         // [0xaa2aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubVolume
	// void SetSubVolume(float Volume);                                                                                      // [0xaa2a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioTrack
	// void SetSubAudioTrack(int32_t Track);                                                                                 // [0xaa29a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioSendLevel
	// void SetSubAudioSendLevel(int32_t Channel, EAtomSpeakerID SpeakerId, float Volume);                                   // [0xaa2890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioCategory
	// void SetSubAudioCategory(FString CategoryName);                                                                       // [0xaa27f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetPlaybackTimer
	// void SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer);                                                            // [0xaa2690] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetMaxDropFrames
	// void SetMaxDropFrames(EManaMaxFrameDrop InMaxDropFrames);                                                             // [0xaa2610] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetFile
	// void SetFile(FString MovieFilePath);                                                                                  // [0xaa22f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraVolume
	// void SetExtraVolume(float Volume);                                                                                    // [0xaa2270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraAudioTrack
	// void SetExtraAudioTrack(int32_t Track);                                                                               // [0xaa21f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraAudioCategory
	// void SetExtraAudioCategory(FString CategoryName);                                                                     // [0xaa2150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetCachedData
	// void SetCachedData(TArray<char>& DataArray);                                                                          // [0xaa20a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetAudioTrack
	// void SetAudioTrack(int32_t Track);                                                                                    // [0xaa2020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetAudioCategory
	// void SetAudioCategory(FString CategoryName);                                                                          // [0xaa1f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SeekToPosition
	// void SeekToPosition(int32_t FrameNumber);                                                                             // [0xaa1f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Seek
	// void Seek(FTimespan Time);                                                                                            // [0xaa1e80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.ResetCachedData
	// void ResetCachedData();                                                                                               // [0xaa1e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveSubAudioCategory
	// void RemoveSubAudioCategory();                                                                                        // [0xaa1e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveExtraAudioCategory
	// void RemoveExtraAudioCategory();                                                                                      // [0xaa1e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveAudioCategory
	// void RemoveAudioCategory();                                                                                           // [0xaa1e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Previous
	// bool Previous();                                                                                                      // [0xaa1dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.PreparePlaylistIndex
	// void PreparePlaylistIndex(int32_t Index);                                                                             // [0xaa1d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Prepare
	// void Prepare();                                                                                                       // [0xaa1d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Play
	// void Play();                                                                                                          // [0xaa1d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Pause
	// void Pause(bool bPause);                                                                                              // [0xaa1c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
	// void OnSubtitleChanged__DelegateSignature(FText Subtitle);                                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
	// void OnStatusChanged__DelegateSignature(EManaComponentStatus Status, class UManaComponent* ManaComponent);            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnSeekCompleted__DelegateSignature
	// void OnSeekCompleted__DelegateSignature(int32_t FrameNumber, class UManaComponent* ManaComponent);                    // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
	// void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);                                           // [0x15dd8c0] Public|Delegate      
	// Function /Script/CriWareRuntime.ManaComponent.OnMovieChanged__DelegateSignature
	// void OnMovieChanged__DelegateSignature(class UManaMovie* Movie, class UManaComponent* ManaComponent);                 // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
	// void OnEventPoint__DelegateSignature(FManaEventPointInfo EventPointInfo);                                             // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.Next
	// bool Next();                                                                                                          // [0xaa1c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Loop
	// void Loop(bool bInLoop);                                                                                              // [0xaa1bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.IsReady
	// bool IsReady();                                                                                                       // [0xaa1b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPreparing
	// bool IsPreparing();                                                                                                   // [0xaa1b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0xaa1b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPaused
	// bool IsPaused();                                                                                                      // [0xaa1ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsLooping
	// bool IsLooping();                                                                                                     // [0xaa1ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetVolume
	// float GetVolume();                                                                                                    // [0xaa1a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetTime
	// FTimespan GetTime();                                                                                                  // [0xaa1a50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetTexture
	// class UManaTexture* GetTexture();                                                                                     // [0xaa1a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetSubVolume
	// float GetSubVolume();                                                                                                 // [0xaa19f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetStatus
	// EManaComponentStatus GetStatus();                                                                                     // [0xaa19c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetSource
	// class UManaMovie* GetSource();                                                                                        // [0xaa1930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetPosition
	// int32_t GetPosition();                                                                                                // [0xaa1900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetMovieTime
	// FTimespan GetMovieTime();                                                                                             // [0xaa18c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetFrameNumber
	// int32_t GetFrameNumber();                                                                                             // [0xaa1890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetExtraVolume
	// float GetExtraVolume();                                                                                               // [0xaa1860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.EnableSubtitles
	// void EnableSubtitles(bool bEnable);                                                                                   // [0xaa1620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.EnableSeamless
	// void EnableSeamless(bool bEnable);                                                                                    // [0xaa1590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding
	// void ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding);                                                        // [0xaa1510] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
	// void ChangeSubtitlesChannel(int32_t Channel);                                                                         // [0xaa1490] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.AdvanceTime
	// void AdvanceTime(FTimespan DeltaTime);                                                                                // [0xaa13f0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaComponentTexture
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UManaComponentTexture : public UTexture
{ 
public:
	int32_t                                            SizeX;                                                      // 0x00B8   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x00BC   (0x0004)  
	SDK_UNDEFINED(1,1000) /* TEnumAsByte<EPixelFormat> */ __um(Format);                                            // 0x00C0   (0x0001)  
	EManaComponentTextureType                          ComponentType;                                              // 0x00C1   (0x0001)  
	SDK_UNDEFINED(1,1001) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x00C2   (0x0001)  
	SDK_UNDEFINED(1,1002) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4C];                                      // 0x00C4   (0x004C)  MISSED
};

/// Class /Script/CriWareRuntime.ManaSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UManaSource : public UObject
{ 
public:
};

/// Struct /Script/CriWareRuntime.ManaVideoTrackInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FManaVideoTrackInfo
{ 
	FIntPoint                                          TextureDimensions;                                          // 0x0000   (0x0008)  
	FIntPoint                                          DisplayDimensions;                                          // 0x0008   (0x0008)  
	float                                              FrameRate;                                                  // 0x0010   (0x0004)  
	int32_t                                            TotalFrames;                                                // 0x0014   (0x0004)  
	bool                                               bIsAlpha;                                                   // 0x0018   (0x0001)  
	EManaMovieType                                     Type;                                                       // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/CriWareRuntime.ManaAudioTrackInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FManaAudioTrackInfo
{ 
	int32_t                                            NumChannels;                                                // 0x0000   (0x0004)  
	int32_t                                            SamplingRate;                                               // 0x0004   (0x0004)  
	int32_t                                            TotalSamples;                                               // 0x0008   (0x0004)  
	bool                                               bIsAmbisonics;                                              // 0x000C   (0x0001)  
	EManaSoundType                                     Type;                                                       // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/CriWareRuntime.ManaEventPointInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FManaEventPointInfo
{ 
	SDK_UNDEFINED(16,1003) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              Time;                                                       // 0x0010   (0x0004)  
	int32_t                                            Type;                                                       // 0x0014   (0x0004)  
	SDK_UNDEFINED(16,1004) /* FString */               __um(Parameter);                                            // 0x0018   (0x0010)  
};

/// Class /Script/CriWareRuntime.ManaMovie
/// Size: 0x0050 (0x000028 - 0x000078)
class UManaMovie : public UManaSource
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FManaVideoTrackInfo>                        VideoTracks;                                                // 0x0030   (0x0010)  
	TArray<FManaAudioTrackInfo>                        AudioTracks;                                                // 0x0040   (0x0010)  
	TArray<FManaEventPointInfo>                        EventPoints;                                                // 0x0050   (0x0010)  
	int32_t                                            NumSubtitleChannels;                                        // 0x0060   (0x0004)  
	int32_t                                            MaxSubtitleSize;                                            // 0x0064   (0x0004)  
	bool                                               bIsAlpha : 1;                                               // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0069   (0x000F)  MISSED
};

/// Class /Script/CriWareRuntime.FileManaMovie
/// Size: 0x0018 (0x000078 - 0x000090)
class UFileManaMovie : public UManaMovie
{ 
public:
	bool                                               bPrecacheFile;                                              // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	SDK_UNDEFINED(16,1005) /* FString */               __um(FilePath);                                             // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.FileManaMovie.SetFilePath
	// void SetFilePath(FString Path);                                                                                       // [0xaa6d60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.DataManaMovie
/// Size: 0x0008 (0x000078 - 0x000080)
class UDataManaMovie : public UManaMovie
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.DataManaMovie.SetDataArray
	// void SetDataArray(TArray<char>& InDataArray);                                                                         // [0xaa6cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.DataManaMovie.GetDataArray
	// TArray<char> GetDataArray();                                                                                          // [0xaa6460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaPlaylist
/// Size: 0x0018 (0x000028 - 0x000040)
class UManaPlaylist : public UManaSource
{ 
public:
	TArray<class UManaMovie*>                          Movies;                                                     // 0x0028   (0x0010)  
	bool                                               bIsAlpha;                                                   // 0x0038   (0x0001)  
	bool                                               bIsMixedTypes;                                              // 0x0039   (0x0001)  
	bool                                               bIsSeamless;                                                // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaPlaylist.RemoveAt
	// void RemoveAt(int32_t Index);                                                                                         // [0xaa6c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Remove
	// void Remove(class UManaMovie* ManaMovie);                                                                             // [0xaa6bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Num
	// int32_t Num();                                                                                                        // [0xaa6b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsSeamless
	// bool IsSeamless();                                                                                                    // [0xaa6980] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsMixedTypes
	// bool IsMixedTypes();                                                                                                  // [0xaa6960] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsAlpha
	// bool IsAlpha();                                                                                                       // [0xaa68b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Insert
	// void Insert(class UManaMovie* ManaMovie, int32_t Index);                                                              // [0xaa67f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetRandom
	// class UManaMovie* GetRandom(int32_t& InOutIndex);                                                                     // [0xaa6750] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetPrevious
	// class UManaMovie* GetPrevious(int32_t& InOutIndex);                                                                   // [0xaa66b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetNext
	// class UManaMovie* GetNext(int32_t& InOutIndex);                                                                       // [0xaa65b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Get
	// class UManaMovie* Get(int32_t Index);                                                                                 // [0xaa6080] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Add
	// void Add(class UManaMovie* ManaMovie);                                                                                // [0xaa5a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaTexture
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class UManaTexture : public UTexture
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UManaSource*                                 MovieSource;                                                // 0x00C0   (0x0008)  
	SDK_UNDEFINED(16,1006) /* FString */               __um(MovieFilePath);                                        // 0x00C8   (0x0010)  
	bool                                               bRenderToTexture : 1;                                       // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              TargetGamma;                                                // 0x00DC   (0x0004)  
	bool                                               bHDR : 1;                                                   // 0x00E0:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00E1   (0x0003)  MISSED
	SDK_UNDEFINED(1,1007) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x00E4   (0x0001)  
	SDK_UNDEFINED(1,1008) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x00E8   (0x0010)  
	SDK_UNDEFINED(1,1009) /* TEnumAsByte<EPixelFormat> */ __um(OverrideFormat);                                    // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	SDK_UNDEFINED(16,1010) /* FMulticastInlineDelegate */ __um(OnTextureUpdated);                                  // 0x0100   (0x0010)  
	TArray<class UManaComponentTexture*>               ComponentTextures;                                          // 0x0110   (0x0010)  
	unsigned char                                      UnknownData05_6[0x48];                                      // 0x0120   (0x0048)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaTexture.SetMovieSource
	// void SetMovieSource(class UManaSource* InSource);                                                                     // [0xaa6e00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature
	// void OnTextureUpdated__DelegateSignature(class UManaTexture* ManaTexture);                                            // [0x15dd8c0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/CriWareRuntime.MaterialExpressionManaColorSpaceConverter
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Luma;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   ChromaB;                                                    // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FExpressionInput                                   ChromaR;                                                    // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0074   (0x0008)  MISSED
	FExpressionInput                                   Alpha;                                                      // 0x007C   (0x000C)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FExpressionInput                                   Gamma;                                                      // 0x0090   (0x000C)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x009C   (0x0008)  MISSED
	bool                                               bH264;                                                      // 0x00A4   (0x0001)  
	EManaMovieType                                     MovieType;                                                  // 0x00A5   (0x0001)  
	EManaColorSpace                                    ColorSpace;                                                 // 0x00A6   (0x0001)  
	bool                                               bUseGammaExponent;                                          // 0x00A7   (0x0001)  
	float                                              ConstGamma;                                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
/// Size: 0x0050 (0x000040 - 0x000090)
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Inputs;                                                     // 0x0040   (0x0030)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CriWareRuntime.MovieSceneAtomSection
/// Size: 0x0160 (0x0000E0 - 0x000240)
class UMovieSceneAtomSection : public UMovieSceneSection
{ 
public:
	class USoundAtomCue*                               Sound;                                                      // 0x00E0   (0x0008)  
	float                                              StartOffset;                                                // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x00F0   (0x00A0)  
	EAtomSectionType                                   SectionType;                                                // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0191   (0x0003)  MISSED
	int32_t                                            DialogueID;                                                 // 0x0194   (0x0004)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x0198   (0x00A0)  
	bool                                               bSuppressSubtitles;                                         // 0x0238   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/CriWareRuntime.MovieSceneAtomTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  AtomSections;                                               // 0x0058   (0x0010)  
};

/// Class /Script/CriWareRuntime.PlatformManaMovie
/// Size: 0x0008 (0x000078 - 0x000080)
class UPlatformManaMovie : public UManaMovie
{ 
public:
	class UManaMovie*                                  ManaMovie;                                                  // 0x0078   (0x0008)  
};

/// Class /Script/CriWareRuntime.SoundAtomConfig
/// Size: 0x0030 (0x000028 - 0x000058)
class USoundAtomConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1011) /* FString */               __um(AcfFilePath);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomConfig.GetCategoryInfoArray
	// TArray<FAtomCategoryInfoParam> GetCategoryInfoArray();                                                                // [0xaa6320] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.SoundAtomCue
/// Size: 0x0090 (0x000028 - 0x0000B8)
class USoundAtomCue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,1012) /* FString */               __um(CueName);                                              // 0x0038   (0x0010)  
	EAtomLoopSetting                                   LoopSetting;                                                // 0x0048   (0x0001)  
	bool                                               bApplyAtomParameter;                                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              Duration;                                                   // 0x004C   (0x0004)  
	float                                              FirstWaveDuration;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0058   (0x0008)  
	bool                                               bEnableAudioVolume;                                         // 0x0060   (0x0001)  
	bool                                               bIsMovable;                                                 // 0x0061   (0x0001)  
	bool                                               bCanStraddleAudioVolume;                                    // 0x0062   (0x0001)  
	bool                                               bUseDistanceToEnableAudioVolume;                            // 0x0063   (0x0001)  
	float                                              MinDistanceToEnableAudioVolume;                             // 0x0064   (0x0004)  
	bool                                               bUseAreaSoundVolume;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            UpdateRateForFrame;                                         // 0x006C   (0x0004)  
	bool                                               bEconomicTick;                                              // 0x0070   (0x0001)  
	bool                                               bOverrideEconomicTickSettings;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              EconomicTickDistanceMargin;                                 // 0x0074   (0x0004)  
	int32_t                                            EconomicTickFrequency;                                      // 0x0078   (0x0004)  
	bool                                               bEnableDistanceCulling;                                     // 0x007C   (0x0001)  
	bool                                               bOverrideCullSettings;                                      // 0x007D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x007E   (0x0002)  MISSED
	float                                              CullDistanceMargin;                                         // 0x0080   (0x0004)  
	float                                              EconomicTickMarginDistance;                                 // 0x0084   (0x0004)  
	bool                                               bLoopSettingByAtomCraft;                                    // 0x0088   (0x0001)  
	bool                                               bCullingSoundPlayingProcessByDistance;                      // 0x0089   (0x0001)  
	bool                                               bUseLegacyCullingSettings;                                  // 0x008A   (0x0001)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x008B   (0x0001)  MISSED
	float                                              MaxProcessDistance;                                         // 0x008C   (0x0004)  
	bool                                               bOverrideCullingSettings;                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              CullingMarginDistance;                                      // 0x0094   (0x0004)  
	bool                                               bLoop;                                                      // 0x0098   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	class USoundAttenuation*                           DefaultAttenuation;                                         // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomCue.IsLooping
	// bool IsLooping();                                                                                                     // [0xaa6930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.IsEconomicTickEnabled
	// bool IsEconomicTickEnabled();                                                                                         // [0xaa68d0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToUse
	// float GetMaxAttenuationDistanceToUse();                                                                               // [0xaa6580] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToApply
	// float GetMaxAttenuationDistanceToApply();                                                                             // [0xaa6580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickMarginDistanceToUse
	// float GetEconomicTickMarginDistanceToUse();                                                                           // [0xaa6520] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToUse
	// float GetEconomicTickFrequencyToUse();                                                                                // [0xaa6550] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToApply
	// float GetEconomicTickFrequencyToApply();                                                                              // [0xaa6550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickDistanceMarginToApply
	// float GetEconomicTickDistanceMarginToApply();                                                                         // [0xaa6520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickDistance
	// float GetEconomicTickDistance();                                                                                      // [0xaa64f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickBoundaryDistanceToUse
	// float GetEconomicTickBoundaryDistanceToUse();                                                                         // [0xaa64f0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullingMarginDistanceToUse
	// float GetCullingMarginDistanceToUse();                                                                                // [0xaa6430] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullingBoundaryDistanceToUse
	// float GetCullingBoundaryDistanceToUse();                                                                              // [0xaa6400] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullDistanceMarginToApply
	// float GetCullDistanceMarginToApply();                                                                                 // [0xaa6430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullDistance
	// float GetCullDistance();                                                                                              // [0xaa6400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.BP_GetCueInfo
	// bool BP_GetCueInfo(FAtomCueInfo& CueInfo);                                                                            // [0xaa5c90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CriWareRuntime.AtomAttenuationDistanceParam
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAtomAttenuationDistanceParam
{ 
	float                                              MinDistance;                                                // 0x0000   (0x0004)  
	float                                              MaxDistance;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FAtomCueInfo
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1013) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	FTimespan                                          Duration;                                                   // 0x0018   (0x0008)  
	SDK_UNDEFINED(16,1014) /* FString */               __um(UserData);                                             // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1015) /* TArray<FString> */       __um(CategoryNames);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1016) /* TArray<FString> */       __um(AisacControlNames);                                    // 0x0040   (0x0010)  
	FAtomAttenuationDistanceParam                      AttenuationDistance;                                        // 0x0050   (0x0008)  
	bool                                               bLooping : 1;                                               // 0x0058:0 (0x0001)  
	bool                                               bIsParameterPalletAssigned : 1;                             // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<class USoundAtomCue*>                       SoundAtomCues;                                              // 0x0060   (0x0010)  
};

/// Class /Script/CriWareRuntime.SoundAtomCueSheet
/// Size: 0x00E8 (0x000028 - 0x000110)
class USoundAtomCueSheet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               Contains;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(16,1017) /* FString */               __um(AcbFilePath);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1018) /* FString */               __um(CueSheetName);                                         // 0x0040   (0x0010)  
	int32_t                                            NumSlots;                                                   // 0x0050   (0x0004)  
	bool                                               bOverrideAwbDirectory;                                      // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FDirectoryPath                                     AwbDirectory;                                               // 0x0058   (0x0010)  
	class UDataTable*                                  AdditionalData;                                             // 0x0068   (0x0008)  
	TArray<FAtomCueInfo>                               CueInfos;                                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData03_6[0x90];                                      // 0x0080   (0x0090)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
	// void ReleaseAcb(FName AcbName);                                                                                       // [0xaa6b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet
	// class USoundAtomCueSheet* LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet, bool bAddToLevel);                     // [0xaa6a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.LoadAcb
	// class USoundAtomCueSheet* LoadAcb(FName AcbName, bool bAddToLevel);                                                   // [0xaa69a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.IsLoaded
	// bool IsLoaded();                                                                                                      // [0xaa6900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetNumCues
	// int32_t GetNumCues();                                                                                                 // [0xaa6650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName
	// class USoundAtomCue* GetAtomCueByName(FString CueName);                                                               // [0xaa6230] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex
	// class USoundAtomCue* GetAtomCueByIndex(int32_t CueIndex);                                                             // [0xaa61a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueById
	// class USoundAtomCue* GetAtomCueById(int32_t CueId);                                                                   // [0xaa6110] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
	// void DetachDspBusSetting();                                                                                           // [0xaa6060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromName
	// bool BP_GetCueInfoFromName(FString Name, FAtomCueInfo& CueInfo);                                                      // [0xaa5f50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromIndex
	// bool BP_GetCueInfoFromIndex(int32_t Index, FAtomCueInfo& CueInfo);                                                    // [0xaa5e50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromId
	// bool BP_GetCueInfoFromId(int32_t ID, FAtomCueInfo& CueInfo);                                                          // [0xaa5d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
	// void AttachDspBusSetting(FString SettingName);                                                                        // [0xaa5bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
	// void ApplyDspBusSnapshot(FString SnapshotName, int32_t MilliSeconds);                                                 // [0xaa5ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/CriWareRuntime.AtomAisacInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomAisacInfo
{ 
	SDK_UNDEFINED(16,1019) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	bool                                               DefaultControlFlag;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              DefaultControlValue;                                        // 0x0014   (0x0004)  
	int32_t                                            ControlId;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1020) /* FString */               __um(ControlName);                                          // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomStringWithComment
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomStringWithComment
{ 
	SDK_UNDEFINED(16,1021) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomSelectorSettingsParam
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomSelectorSettingsParam
{ 
	SDK_UNDEFINED(16,1022) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1023) /* FString */               __um(DefaultSelectorLabel);                                 // 0x0010   (0x0010)  
	TArray<FAtomStringWithComment>                     Labels;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomAisacControlSettingsParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomAisacControlSettingsParam
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1024) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomGameVariableParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomGameVariableParam
{ 
	SDK_UNDEFINED(16,1025) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomGlobalAisacSettingsParam
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomGlobalAisacSettingsParam
{ 
	SDK_UNDEFINED(16,1026) /* FString */               __um(AisacControl);                                         // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCategoryParam
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomCategoryParam
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1027) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1028) /* FString */               __um(Group);                                                // 0x0018   (0x0010)  
	float                                              Volume;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomDspBusSettingsParam
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAtomDspBusSettingsParam
{ 
	SDK_UNDEFINED(16,1029) /* FString */               __um(BusSettingsName);                                      // 0x0000   (0x0010)  
	TArray<FAtomStringWithComment>                     Snapshot;                                                   // 0x0010   (0x0010)  
	TArray<FAtomStringWithComment>                     Bus;                                                        // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomConfigDataTable
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FAtomConfigDataTable : FTableRowBase
{ 
	SDK_UNDEFINED(16,1030) /* FString */               __um(BuildDate);                                            // 0x0008   (0x0010)  
	int32_t                                            NumCategoriesPerPlayback;                                   // 0x0018   (0x0004)  
	int32_t                                            NumCategories;                                              // 0x001C   (0x0004)  
	int32_t                                            NumAisacControls;                                           // 0x0020   (0x0004)  
	int32_t                                            NumGlobalAisacs;                                            // 0x0024   (0x0004)  
	int32_t                                            NumVoiceLimitGroups;                                        // 0x0028   (0x0004)  
	int32_t                                            NumDspBusSettings;                                          // 0x002C   (0x0004)  
	int32_t                                            NumDspBusSettingSnapshots;                                  // 0x0030   (0x0004)  
	int32_t                                            NumDspBus;                                                  // 0x0034   (0x0004)  
	int32_t                                            NumGameVariables;                                           // 0x0038   (0x0004)  
	int32_t                                            NumSelectors;                                               // 0x003C   (0x0004)  
	int32_t                                            NumReacts;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FAtomSelectorSettingsParam>                 Selector;                                                   // 0x0048   (0x0010)  
	TArray<FAtomAisacControlSettingsParam>             AisacControl;                                               // 0x0058   (0x0010)  
	TArray<FAtomGameVariableParam>                     GameVariable;                                               // 0x0068   (0x0010)  
	TArray<FAtomGlobalAisacSettingsParam>              GlobalAisac;                                                // 0x0078   (0x0010)  
	TArray<FAtomCategoryParam>                         Category;                                                   // 0x0088   (0x0010)  
	TArray<FAtomDspBusSettingsParam>                   DspBusSettings;                                             // 0x0098   (0x0010)  
	TArray<FAtomStringWithComment>                     React;                                                      // 0x00A8   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AcfDataTable
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
struct FAcfDataTable : FAtomConfigDataTable
{ 
};

/// Struct /Script/CriWareRuntime.AtomCueInfoSelectorParam
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomCueInfoSelectorParam
{ 
	SDK_UNDEFINED(16,1031) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1032) /* FString */               __um(Label);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoCategoryParam
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomCueInfoCategoryParam
{ 
	SDK_UNDEFINED(16,1033) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoTrackParam
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAtomCueInfoTrackParam
{ 
	float                                              Volume;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1034) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	FAtomCueInfoSelectorParam                          Selector;                                                   // 0x0018   (0x0020)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoBusSendParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomCueInfoBusSendParam
{ 
	SDK_UNDEFINED(16,1035) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	bool                                               Enable;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Level;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoBlocksParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomCueInfoBlocksParam
{ 
	SDK_UNDEFINED(16,1036) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            StartPosition;                                              // 0x0010   (0x0004)  
	int32_t                                            Length;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoAttachedSelectorParam
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAtomCueInfoAttachedSelectorParam
{ 
	SDK_UNDEFINED(16,1037) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoAttachedAisacControlParam
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAtomCueInfoAttachedAisacControlParam
{ 
	SDK_UNDEFINED(16,1038) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            ID;                                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomCueInfoDataTable
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FAtomCueInfoDataTable : FTableRowBase
{ 
	SDK_UNDEFINED(16,1039) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	int32_t                                            CueId;                                                      // 0x0018   (0x0004)  
	int32_t                                            CueTypeIndex;                                               // 0x001C   (0x0004)  
	SDK_UNDEFINED(16,1040) /* FString */               __um(CueType);                                              // 0x0020   (0x0010)  
	FAtomCueInfoSelectorParam                          DefaultSelectorLabel;                                       // 0x0030   (0x0020)  
	float                                              Volume;                                                     // 0x0050   (0x0004)  
	bool                                               Public;                                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            CategoryCuePriority;                                        // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1041) /* FString */               __um(CategoryCuePriorityType);                              // 0x0060   (0x0010)  
	int32_t                                            CategoryCuePriorityTypeIndex;                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(16,1042) /* FString */               __um(CuePriorityType);                                      // 0x0078   (0x0010)  
	int32_t                                            CuePriorityTypeIndex;                                       // 0x0088   (0x0004)  
	bool                                               EnableCueLimit;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            NumCueLimits;                                               // 0x0090   (0x0004)  
	int32_t                                            Probability;                                                // 0x0094   (0x0004)  
	int32_t                                            Length;                                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<FAtomCueInfoCategoryParam>                  Category;                                                   // 0x00A0   (0x0010)  
	TArray<FAtomCueInfoTrackParam>                     Track;                                                      // 0x00B0   (0x0010)  
	TArray<FAtomCueInfoBusSendParam>                   BusSend;                                                    // 0x00C0   (0x0010)  
	TArray<FAtomCueInfoBlocksParam>                    Blocks;                                                     // 0x00D0   (0x0010)  
	TArray<FAtomCueInfoAttachedSelectorParam>          AttachedSelector;                                           // 0x00E0   (0x0010)  
	TArray<FAtomCueInfoAttachedAisacControlParam>      AttachedAisacControl;                                       // 0x00F0   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueSheetDataTable
/// Size: 0x0068 (0x000008 - 0x000070)
struct FAtomCueSheetDataTable : FTableRowBase
{ 
	SDK_UNDEFINED(16,1043) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1044) /* FString */               __um(BuildDate);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,1045) /* FString */               __um(WorkUnit);                                             // 0x0028   (0x0010)  
	float                                              Volume;                                                     // 0x0038   (0x0004)  
	bool                                               EnableCueLimit;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            NumCueLimits;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,1046) /* FString */               __um(PriorityType);                                         // 0x0048   (0x0010)  
	int32_t                                            PriorityTypeIndex;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FAtomCueInfoDataTable>                      Cue;                                                        // 0x0060   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomProfileItem
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAtomProfileItem
{ 
	int32_t                                            AtomComponentID;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1047) /* FString */               __um(AtomCueName);                                          // 0x0008   (0x0010)  
	FVector                                            AtomComponentLocation;                                      // 0x0018   (0x000C)  
	float                                              DistanceFromListener;                                       // 0x0024   (0x0004)  
	float                                              PlayingTime;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1048) /* FString */               __um(PlayerState);                                          // 0x0030   (0x0010)  
	int32_t                                            NumSounds;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,1049) /* FString */               __um(ConcurrencyName);                                      // 0x0048   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0058   (0x0020)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomSoundManager
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAtomSoundManager
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomTriggerRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FAtomTriggerRow : FTableRowBase
{ 
	float                                              Time;                                                       // 0x0008   (0x0004)  
	FName                                              Bone;                                                       // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class USoundAtomCue*                               Cue;                                                        // 0x0018   (0x0008)  
};

/// Struct /Script/CriWareRuntime.MovieSceneAtomSectionTemplateData
/// Size: 0x0160 (0x000000 - 0x000160)
struct FMovieSceneAtomSectionTemplateData
{ 
	class USoundAtomCue*                               Sound;                                                      // 0x0000   (0x0008)  
	float                                              AtomStartOffset;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             SectionStartTimeSeconds;                                    // 0x0010   (0x0008)  
	FMovieSceneFloatChannel                            AtomPitchMultiplierCurve;                                   // 0x0018   (0x00A0)  
	FMovieSceneFloatChannel                            AtomVolumeCurve;                                            // 0x00B8   (0x00A0)  
	int32_t                                            RowIndex;                                                   // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.MovieSceneAtomSectionTemplate
/// Size: 0x0160 (0x000020 - 0x000180)
struct FMovieSceneAtomSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneAtomSectionTemplateData                 AtomData;                                                   // 0x0020   (0x0160)  
};

/// Struct /Script/CriWareRuntime.AtomCategoryInfoParam
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAtomCategoryInfoParam
{ 
	SDK_UNDEFINED(16,1050) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            category_id;                                                // 0x0010   (0x0004)  
	int32_t                                            group_no;                                                   // 0x0014   (0x0004)  
	float                                              Volume;                                                     // 0x0018   (0x0004)  
	bool                                               IsPaused;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

