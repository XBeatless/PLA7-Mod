
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX                             = 15
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX                                       = 5
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4,
	ESynthFilterType__ESynthFilterType_MAX                                           = 5
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX                                 = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX                                         = 9
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX                                       = 10
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3,
	ESynthLFOMode__ESynthLFOMode_MAX                                                 = 4
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7,
	ESynthLFOType__ESynthLFOType_MAX                                                 = 8
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5,
	ESynth1OscType__ESynth1OscType_MAX                                               = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x06
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX       = 5
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX                         = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX                             = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX                       = 4
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2,
	EStereoChannelMode__EStereoChannelMode_MAX                                       = 3
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7,
	EPhaserLFOType__EPhaserLFOType_MAX                                               = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX               = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX                           = 4
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX                               = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4,
	ESubmixFilterType__ESubmixFilterType_MAX                                         = 5
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2,
	ETapLineMode__ETapLineMode_MAX                                                   = 3
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX                               = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX                       = 15
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2,
	CurveInterpolationType__CurveInterpolationType_MAX                               = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2,
	ESynthKnobSize__ESynthKnobSize_MAX                                               = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX                                 = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX                                     = 4
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FModularSynthPresetBankEntry
{ 
	SDK_UNDEFINED(16,3131) /* FString */               __um(PresetName);                                           // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	// void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // [0xc4b7d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06A0 (0x0006D0 - 0x000D70)
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x69C];                                     // 0x06D4   (0x069C)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                // [0xc4dd40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                               // [0xc4dcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                     // [0xc4dc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                         // [0xc4dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// void SetStereoDelayRatio(float DelayRatio);                                                                           // [0xc4db40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                       // [0xc4dac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                // [0xc4da30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                     // [0xc4d9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	// void SetSpread(float Spread);                                                                                         // [0xc4d930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                           // [0xc4d8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	// void SetPortamento(float Portamento);                                                                                 // [0xc4d830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	// void SetPitchBend(float PitchBend);                                                                                   // [0xc4d7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	// void SetPan(float Pan);                                                                                               // [0xc4d730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                            // [0xc4d670] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	// void SetOscSync(bool bIsSynced);                                                                                      // [0xc4d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                              // [0xc4d510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                            // [0xc4d440] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                    // [0xc4d370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                               // [0xc4d2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                     // [0xc4d1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                          // [0xc4d100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                      // [0xc4d030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// void SetModEnvSustainGain(float SustainGain);                                                                         // [0xc4cfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// void SetModEnvReleaseTime(float Release);                                                                             // [0xc4cf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                   // [0xc4ceb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	// void SetModEnvInvert(bool bInvert);                                                                                   // [0xc4ce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	// void SetModEnvDepth(float Depth);                                                                                     // [0xc4cda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                         // [0xc4cd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                           // [0xc4cca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// void SetModEnvBiasInvert(bool bInvert);                                                                               // [0xc4cc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                       // [0xc4cb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                             // [0xc4cad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                  // [0xc4ca10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                             // [0xc4c950] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                  // [0xc4c880] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                        // [0xc4c7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                      // [0xc4c6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                            // [0xc4c610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	// void SetGainDb(float GainDb);                                                                                         // [0xc4c590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	// void SetFilterType(ESynthFilterType FilterType);                                                                      // [0xc4c510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	// void SetFilterQMod(float FilterQ);                                                                                    // [0xc4c490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	// void SetFilterQ(float FilterQ);                                                                                       // [0xc4c410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                  // [0xc4c390] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                     // [0xc4c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                       // [0xc4c290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	// void SetEnableUnison(bool EnableUnison);                                                                              // [0xc4c200] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                       // [0xc4c170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                       // [0xc4c0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                               // [0xc4c010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	// void SetEnableLegato(bool LegatoEnabled);                                                                             // [0xc4bf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                               // [0xc4bf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	// void SetChorusFrequency(float Frequency);                                                                             // [0xc4be80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	// void SetChorusFeedback(float Feedback);                                                                               // [0xc4be00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	// void SetChorusEnabled(bool EnableChorus);                                                                             // [0xc4bd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	// void SetChorusDepth(float Depth);                                                                                     // [0xc4bcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                             // [0xc4bc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                            // [0xc4bb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                      // [0xc4ba50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);  // [0xc4b910] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	float                                              CrushedBits;                                                // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// void SetSettings(FSourceEffectBitCrusherSettings& InSettings);                                                        // [0xc52860] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0058 (0x000040 - 0x000098)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0080   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	// void SetSettings(FSourceEffectChorusSettings& InSettings);                                                            // [0xc52910] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000040 - 0x0000B8)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0040   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x0090   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                 // [0xc529c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3132) /* FMulticastInlineDelegate */ __um(OnEnvelopeFollowerUpdate);                          // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                   // [0xc531e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                  // [0xc52b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                     // [0xc52760] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                // [0xc52a70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                            // [0xc52bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                // [0xc52c80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectMidSideSpreaderSettings
{ 
	EStereoChannelMode                                 InputMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SpreadAmount;                                               // 0x0004   (0x0004)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0008   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                   // [0xc52d30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                            // [0xc52de0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                            // [0xc52e90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x3C];                                      // 0x0040   (0x003C)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x007C   (0x0014)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                    // [0xc52f50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000040 - 0x000098)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x0080   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                       // [0xc52ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x3C];                                      // 0x0040   (0x003C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x007C   (0x0014)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                       // [0xc530a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                        // [0xc52de0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              SurroundRearChannelBleedDb;                                 // 0x0004   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x0008   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x000C   (0x0004)  
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0010   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0078 (0x000040 - 0x0000B8)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0040   (0x0020)  
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0060   (0x0008)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0068   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4E];                                      // 0x006A   (0x004E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                 // [0xc53140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                              // [0xc527e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x0074   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                             // [0xc588d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                // [0xc57e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	// void SetDelay(float Length);                                                                                          // [0xc56fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                    // [0xc56190] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                            // [0xc58990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	// void SetFilterType(ESubmixFilterType InType);                                                                         // [0xc57700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// void SetFilterQMod(float InQ);                                                                                        // [0xc57680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// void SetFilterQ(float InQ);                                                                                           // [0xc57600] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                  // [0xc57160] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// void SetFilterCutoffFrequency(float InFrequency);                                                                     // [0xc570e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                          // [0xc57060] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                         // [0xc58a40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000040 - 0x0000B0)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0098   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                   // [0xc58e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                          // [0xc58b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                // [0xc57e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// void RemoveTap(int32_t TapId);                                                                                        // [0xc56830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                              // [0xc56350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                   // [0xc56270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                    // [0xc561b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	// void AddTap(int32_t& TapId);                                                                                          // [0xc55f60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02B0 (0x000008 - 0x0002B8)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0088)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0090   (0x0088)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0118   (0x0088)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01A0   (0x0088)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0228   (0x0088)  
	float                                              BarThickness;                                               // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x0370 (0x000108 - 0x000478)
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0108   (0x0004)  
	float                                              ValueY;                                                     // 0x010C   (0x0004)  
	SDK_UNDEFINED(16,3133) /* FDelegateProperty */     __um(ValueXDelegate);                                       // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3134) /* FDelegateProperty */     __um(ValueYDelegate);                                       // 0x0120   (0x0010)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0130   (0x02B8)  
	FLinearColor                                       SliderHandleColor;                                          // 0x03E8   (0x0010)  
	bool                                               IndentHandle;                                               // 0x03F8   (0x0001)  
	bool                                               Locked;                                                     // 0x03F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x03FA   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x03FC   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0400   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	SDK_UNDEFINED(16,3135) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,3136) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0418   (0x0010)  
	SDK_UNDEFINED(16,3137) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0428   (0x0010)  
	SDK_UNDEFINED(16,3138) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0438   (0x0010)  
	SDK_UNDEFINED(16,3139) /* FMulticastInlineDelegate */ __um(OnValueChangedX);                                   // 0x0448   (0x0010)  
	SDK_UNDEFINED(16,3140) /* FMulticastInlineDelegate */ __um(OnValueChangedY);                                   // 0x0458   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0468   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	// void SetValue(FVector2D InValue);                                                                                     // [0xc58f30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0xc58cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0xc58bc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0xc57f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0xc57d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	// FVector2D GetValue();                                                                                                 // [0xc56400] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (0x0006D0 - 0x000A90)
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x06D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3B8];                                     // 0x06D8   (0x03B8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                               // [0xc58d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                     // [0xc58c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                   // [0xc58840] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                       // [0xc587c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                        // [0xc58120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                          // [0xc580a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                         // [0xc57c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                     // [0xc57d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	// void SetGrainProbability(float InGrainProbability);                                                                   // [0xc57bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                            // [0xc57b00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                  // [0xc57a40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                   // [0xc579c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                               // [0xc57900] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                               // [0xc56cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                             // [0xc56cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                            // [0xc565c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	// void NoteOff(float Note, bool bKill);                                                                                 // [0xc56470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	// bool IsLoaded();                                                                                                      // [0xc56440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	// float GetSampleDuration();                                                                                            // [0xc56240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	// float GetCurrentPlayheadTime();                                                                                       // [0xc55ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3141) /* FString */               __um(PresetName);                                           // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0740 (0x0006D0 - 0x000E10)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	SDK_UNDEFINED(16,3142) /* FMulticastInlineDelegate */ __um(OnTableAltered);                                    // 0x06D0   (0x0010)  
	SDK_UNDEFINED(16,3143) /* FMulticastInlineDelegate */ __um(OnNumTablesChanged);                                // 0x06E0   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x06F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x718];                                     // 0x06F8   (0x0718)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// void SetWaveTablePosition(float InPosition);                                                                          // [0xc58fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// void SetSustainPedalState(bool InSustainPedalState);                                                                  // [0xc58dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                          // [0xc58320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                        // [0xc582a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// void SetPosLfoDepth(float InLfoDepth);                                                                                // [0xc58220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                             // [0xc58740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                         // [0xc586c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                       // [0xc58630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// void SetPositionEnvelopeDepth(float InDepth);                                                                         // [0xc585b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                             // [0xc58530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                               // [0xc584a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                     // [0xc58420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                           // [0xc583a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// void SetLowPassFilterResonance(float InNewQ);                                                                         // [0xc58020] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
	// void SetLowPassFilterFrequency(float InNewFrequency);                                                                 // [0xc57fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                      // [0xc57880] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                               // [0xc57800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// void SetFrequency(float FrequencyHz);                                                                                 // [0xc57780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                               // [0xc57500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                           // [0xc57480] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                              // [0xc57580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                         // [0xc573f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// void SetFilterEnvelopeDepth(float InDepth);                                                                           // [0xc57370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                 // [0xc572e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                       // [0xc57260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                             // [0xc571e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                        // [0xc56ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                         // [0xc56e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                         // [0xc56d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                  // [0xc56c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0xc56bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                            // [0xc56b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// void SetAmpEnvelopeDepth(float InDepth);                                                                              // [0xc56ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                  // [0xc56a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0xc569b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                          // [0xc56930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0xc568b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// void RefreshWaveTable(int32_t Index);                                                                                 // [0xc567b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// void RefreshAllWaveTables();                                                                                          // [0xc56790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	// void NoteOn(float InMidiNote, float InVelocity);                                                                      // [0xc566d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	// void NoteOff(float InMidiNote);                                                                                       // [0xc56540] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// int32_t GetNumTableEntries();                                                                                         // [0xc56210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// int32_t GetMaxTableIndex();                                                                                           // [0xc561d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                            // [0xc560b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// float GetCurveTangent(int32_t TableIndex);                                                                            // [0xc56020] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x0006D0 - 0x000800)
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x06D0   (0x0008)  
	SDK_UNDEFINED(16,3144) /* FMulticastInlineDelegate */ __um(OnSampleLoaded);                                    // 0x06D8   (0x0010)  
	SDK_UNDEFINED(16,3145) /* FMulticastInlineDelegate */ __um(OnSamplePlaybackProgress);                          // 0x06E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x06F8   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                     // [0xc5a080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                    // [0xc5a000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                   // [0xc59f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	// void SetPitch(float InPitch, float TimeSec);                                                                          // [0xc59eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                           // [0xc59d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	// bool IsLoaded();                                                                                                      // [0xc59ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	// float GetSampleDuration();                                                                                            // [0xc59c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// float GetCurrentPlaybackProgressTime();                                                                               // [0xc59c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// float GetCurrentPlaybackProgressPercent();                                                                            // [0xc59c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0230 (0x000008 - 0x000238)
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0088)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0090   (0x0088)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0118   (0x0088)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01A0   (0x0088)  
	float                                              MinValueAngle;                                              // 0x0228   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x022C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x02F8 (0x000108 - 0x000400)
class USynthKnob : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0108   (0x0004)  
	float                                              StepSize;                                                   // 0x010C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0110   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0114   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0119   (0x0007)  MISSED
	SDK_UNDEFINED(24,3146) /* FText */                 __um(ParameterName);                                        // 0x0120   (0x0018)  
	SDK_UNDEFINED(24,3147) /* FText */                 __um(ParameterUnits);                                       // 0x0138   (0x0018)  
	SDK_UNDEFINED(16,3148) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0150   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0160   (0x0238)  
	bool                                               Locked;                                                     // 0x0398   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0399   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x039A   (0x0006)  MISSED
	SDK_UNDEFINED(16,3149) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,3150) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,3151) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,3152) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,3153) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	// void SetValue(float InValue);                                                                                         // [0xc5a180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0xc5a100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0xc59e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	// float GetValue();                                                                                                     // [0xc59cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

