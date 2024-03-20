
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

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                            // [0xb90680] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                           // [0xb90660] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                              // [0xb90630] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                     // [0xb90590] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                            // [0xb90560] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x0006D0 - 0x000790)
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xBC];                                      // 0x06D4   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            NumInputChannels;                                           // 0x0008   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x000C   (0x0004)  
};

