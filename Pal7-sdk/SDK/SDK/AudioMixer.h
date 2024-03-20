
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioMixer.EAudioSpectrumType
/// Size: 0x03
enum class EAudioSpectrumType : uint8_t
{
	EAudioSpectrumType__MagnitudeSpectrum                                            = 0,
	EAudioSpectrumType__PowerSpectrum                                                = 1,
	EAudioSpectrumType__EAudioSpectrumType_MAX                                       = 2
};

/// Enum /Script/AudioMixer.EFFTWindowType
/// Size: 0x05
enum class EFFTWindowType : uint8_t
{
	EFFTWindowType__None                                                             = 0,
	EFFTWindowType__Hamming                                                          = 1,
	EFFTWindowType__Hann                                                             = 2,
	EFFTWindowType__Blackman                                                         = 3,
	EFFTWindowType__EFFTWindowType_MAX                                               = 4
};

/// Enum /Script/AudioMixer.EFFTPeakInterpolationMethod
/// Size: 0x04
enum class EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor                                     = 0,
	EFFTPeakInterpolationMethod__Linear                                              = 1,
	EFFTPeakInterpolationMethod__Quadratic                                           = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX                     = 3
};

/// Enum /Script/AudioMixer.EFFTSize
/// Size: 0x06
enum class EFFTSize : uint8_t
{
	EFFTSize__DefaultSize                                                            = 0,
	EFFTSize__Min                                                                    = 1,
	EFFTSize__Small                                                                  = 2,
	EFFTSize__Medium                                                                 = 3,
	EFFTSize__Large                                                                  = 4,
	EFFTSize__Max                                                                    = 5
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x06
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__Count                                        = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 5
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x04E0 (0x0001F0 - 0x0006D0)
class USynthComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy : 1;                                           // 0x01F0:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x01F0:1 (0x0001)  
	bool                                               bAllowSpatialization : 1;                                   // 0x01F0:2 (0x0001)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x01F0:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x01F1   (0x0003)  MISSED
	bool                                               bOutputToBusOnly : 1;                                       // 0x01F4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x01F5   (0x0003)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x01F8   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0200   (0x03A0)  
	class USoundConcurrency*                           ConcurrencySettings;                                        // 0x05A0   (0x0008)  
	SDK_UNDEFINED(80,926) /* TSet<USoundConcurrency*> */ __um(ConcurrencySet);                                     // 0x05A8   (0x0050)  
	class USoundClass*                                 SoundClass;                                                 // 0x05F8   (0x0008)  
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                          // 0x0600   (0x0008)  
	class USoundSubmixBase*                            SoundSubmix;                                                // 0x0608   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x0610   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x0620   (0x0010)  
	FSoundModulation                                   Modulation;                                                 // 0x0630   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x0640   (0x0010)  
	bool                                               bIsUISound : 1;                                             // 0x0650:0 (0x0001)  
	bool                                               bIsPreviewSound : 1;                                        // 0x0650:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0651   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x0654   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0658   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x065C   (0x0004)  MISSED
	SDK_UNDEFINED(16,927) /* FMulticastInlineDelegate */ __um(OnAudioEnvelopeValue);                               // 0x0660   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0670   (0x0020)  MISSED
	class USynthSound*                                 Synth;                                                      // 0x0690   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x0698   (0x0008)  
	unsigned char                                      UnknownData05_6[0x30];                                      // 0x06A0   (0x0030)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	// void Stop();                                                                                                          // [0x2605190] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                         // [0x2604eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                     // [0x2604e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);                                                  // [0x2604d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x2603fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// float TrimAudioCache(float InMegabytesToFree);                                                                        // [0x2605470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite); // [0x2605260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);               // [0x26051b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord); // [0x2605090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize); // [0x2604ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // [0x2604720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                     // [0x2604670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x2604540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x2604450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x2604360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // [0x2604270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x26041c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty OnLoadCompletion);                          // [0x26040f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// void PrimeSoundCueForPlayback(class USoundCue* SoundCue);                                                             // [0x2604080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                      // [0x2603fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze); // [0x2603e20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain); // [0x2603d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze); // [0x2603be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);                          // [0x2603b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(class UObject* WorldContextObject);                                                     // [0x2603ac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x26039d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x26038d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);    // [0x2603820] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	class USoundSubmix*                                ExternalSubmix;                                             // 0x0020   (0x0008)  
	bool                                               bChannelLinked : 1;                                         // 0x0028:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0028:1 (0x0001)  
	bool                                               bKeyAudition : 1;                                           // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x002C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0030   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0034   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00C8 (0x000040 - 0x000108)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0040   (0x0078)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                   // [0x26048d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                   // [0x2604850] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                          // [0xc52a70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0034 (0x000000 - 0x000034)
struct FSubmixEffectReverbSettings
{ 
	float                                              Density;                                                    // 0x0000   (0x0004)  
	float                                              Diffusion;                                                  // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	float                                              GainHF;                                                     // 0x000C   (0x0004)  
	float                                              DecayTime;                                                  // 0x0010   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0014   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x0018   (0x0004)  
	float                                              ReflectionsDelay;                                           // 0x001C   (0x0004)  
	float                                              LateGain;                                                   // 0x0020   (0x0004)  
	float                                              LateDelay;                                                  // 0x0024   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0028   (0x0004)  
	float                                              WetLevel;                                                   // 0x002C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0030   (0x0004)  
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x0090 (0x000040 - 0x0000D0)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x5C];                                      // 0x0040   (0x005C)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x009C   (0x0034)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                // [0x2604c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                            // [0x2604aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectReverbFastSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSubmixEffectReverbFastSettings
{ 
	bool                                               bBypass;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Density;                                                    // 0x0004   (0x0004)  
	float                                              Diffusion;                                                  // 0x0008   (0x0004)  
	float                                              Gain;                                                       // 0x000C   (0x0004)  
	float                                              GainHF;                                                     // 0x0010   (0x0004)  
	float                                              DecayTime;                                                  // 0x0014   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0018   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x001C   (0x0004)  
	float                                              ReflectionsDelay;                                           // 0x0020   (0x0004)  
	float                                              LateGain;                                                   // 0x0024   (0x0004)  
	float                                              LateDelay;                                                  // 0x0028   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x002C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0030   (0x0004)  
	float                                              DryLevel;                                                   // 0x0034   (0x0004)  
};

/// Class /Script/AudioMixer.SubmixEffectReverbFastPreset
/// Size: 0x0098 (0x000040 - 0x0000D8)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0040   (0x0060)  MISSED
	FSubmixEffectReverbFastSettings                    Settings;                                                   // 0x00A0   (0x0038)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                // [0x2604b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbFastSettings& InSettings);                                                        // [0x26049e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000360 - 0x000380)
class USynthSound : public USoundWaveProcedural
{ 
public:
	class USynthComponent*                             OwningSynthComponent;                                       // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0368   (0x0018)  MISSED
};

