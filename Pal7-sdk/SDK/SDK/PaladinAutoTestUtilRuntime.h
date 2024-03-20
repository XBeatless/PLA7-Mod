
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/PaladinAutoTestUtilRuntime.ERHIType
/// Size: 0x03
enum class ERHIType : uint8_t
{
	ERHIType__ERHIT_dx11                                                             = 0,
	ERHIType__ERHIT_dx12                                                             = 1,
	ERHIType__ERHIT_MAX                                                              = 2
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EStandardResolution
/// Size: 0x05
enum class EStandardResolution : uint8_t
{
	EStandardResolution__ESR                                                         = 0,
	EStandardResolution__ESR2                                                        = 1,
	EStandardResolution__ESR_2K                                                      = 2,
	EStandardResolution__ESR_4K                                                      = 3,
	EStandardResolution__ESR_MAX                                                     = 4
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EScreenPercentage
/// Size: 0x04
enum class EScreenPercentage : uint8_t
{
	EScreenPercentage__ESP                                                           = 0,
	EScreenPercentage__ESP2                                                          = 1,
	EScreenPercentage__ESP3                                                          = 2,
	EScreenPercentage__ESP_MAX                                                       = 3
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EGraphicsCardBrand
/// Size: 0x05
enum class EGraphicsCardBrand : uint8_t
{
	EGraphicsCardBrand__EGCB_NVIDIA                                                  = 0,
	EGraphicsCardBrand__EGCB_AMD                                                     = 1,
	EGraphicsCardBrand__EGCB_INTEL                                                   = 2,
	EGraphicsCardBrand__EGCB_OTHER                                                   = 3,
	EGraphicsCardBrand__EGCB_MAX                                                     = 4
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EAutoTestDLSSSetting
/// Size: 0x06
enum class EAutoTestDLSSSetting : uint8_t
{
	EAutoTestDLSSSetting__EATDSS_Off                                                 = 0,
	EAutoTestDLSSSetting__EATDSS_Low                                                 = 1,
	EAutoTestDLSSSetting__EATDSS_Medium                                              = 2,
	EAutoTestDLSSSetting__EATDSS_High                                                = 3,
	EAutoTestDLSSSetting__EATDSS_SuperHigh                                           = 4,
	EAutoTestDLSSSetting__EATDSS_MAX                                                 = 5
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EAutoTestRTSetting
/// Size: 0x06
enum class EAutoTestRTSetting : uint8_t
{
	EAutoTestRTSetting__EATRTS_Off                                                   = 0,
	EAutoTestRTSetting__EATRTS_Low                                                   = 1,
	EAutoTestRTSetting__EATRTS_Medium                                                = 2,
	EAutoTestRTSetting__EATRTS_High                                                  = 3,
	EAutoTestRTSetting__EATRTS_SuperHigh                                             = 4,
	EAutoTestRTSetting__EATRTS_MAX                                                   = 5
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EAutoTestVolumetricFogSetting
/// Size: 0x05
enum class EAutoTestVolumetricFogSetting : uint8_t
{
	EAutoTestVolumetricFogSetting__EATVFS_Invalid                                    = 0,
	EAutoTestVolumetricFogSetting__EATVFS_Low                                        = 1,
	EAutoTestVolumetricFogSetting__EATVFS_Medium                                     = 2,
	EAutoTestVolumetricFogSetting__EATVFS_High                                       = 3,
	EAutoTestVolumetricFogSetting__EATVFS_MAX                                        = 4
};

/// Enum /Script/PaladinAutoTestUtilRuntime.EAutoTestBaseGraphicsSetting
/// Size: 0x05
enum class EAutoTestBaseGraphicsSetting : uint8_t
{
	EAutoTestBaseGraphicsSetting__EATBGS_Invalid                                     = 0,
	EAutoTestBaseGraphicsSetting__EATBGS_Low                                         = 1,
	EAutoTestBaseGraphicsSetting__EATBGS_Medium                                      = 2,
	EAutoTestBaseGraphicsSetting__EATBGS_High                                        = 3,
	EAutoTestBaseGraphicsSetting__EATBGS_MAX                                         = 4
};

/// Class /Script/PaladinAutoTestUtilRuntime.PaladinAutoTestBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaladinAutoTestBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PaladinAutoTestUtilRuntime.PaladinAutoTestBlueprintLibrary.SelectGraphicsSettingFromTable
	// FAutoTestGraphicsSetting SelectGraphicsSettingFromTable(class UDataTable* DataTable, FName GpuVersion, bool bIsLaptop, bool bIsTi, bool bIsSuper, EGraphicsCardBrand GPUBrand); // [0xad0980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PaladinAutoTestUtilRuntime.PaladinAutoTestBlueprintLibrary.GetAutoTestParam
	// FString GetAutoTestParam(FString ParamName);                                                                          // [0xad0860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PaladinAutoTestUtilRuntime.PaladinAutoTestBlueprintLibrary.CheckStartupParam
	// bool CheckStartupParam(FString Param);                                                                                // [0xad0780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PaladinAutoTestUtilRuntime.PaladinAutoTestCheatManager
/// Size: 0x0000 (0x000078 - 0x000078)
class UPaladinAutoTestCheatManager : public UCheatManager
{ 
public:
};

/// Struct /Script/PaladinAutoTestUtilRuntime.AutoTestGPUMemoryUsage
/// Size: 0x0058 (0x000008 - 0x000060)
struct FAutoTestGPUMemoryUsage : FTableRowBase
{ 
	ERHIType                                           RHI;                                                        // 0x0008   (0x0001)  
	EStandardResolution                                Resolution;                                                 // 0x0009   (0x0001)  
	EAutoTestRTSetting                                 RT;                                                         // 0x000A   (0x0001)  
	EAutoTestDLSSSetting                               DLSS;                                                       // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,1360) /* TMap<EAutoTestBaseGraphicsSetting, float> */ __um(MemoryUsage);                      // 0x0010   (0x0050)  
};

/// Struct /Script/PaladinAutoTestUtilRuntime.AutoTestGraphicsSetting
/// Size: 0x0030 (0x000008 - 0x000038)
struct FAutoTestGraphicsSetting : FTableRowBase
{ 
	FName                                              GPUName;                                                    // 0x0008   (0x0008)  
	EGraphicsCardBrand                                 GPUBrand;                                                   // 0x0010   (0x0001)  
	bool                                               IsLaptop;                                                   // 0x0011   (0x0001)  
	bool                                               IsTi;                                                       // 0x0012   (0x0001)  
	bool                                               IsSuper;                                                    // 0x0013   (0x0001)  
	bool                                               bSameAs;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              SameConfigRowName;                                          // 0x0018   (0x0008)  
	SDK_UNDEFINED(16,1361) /* FString */               __um(Resolution);                                           // 0x0020   (0x0010)  
	EAutoTestBaseGraphicsSetting                       BaseGraphics;                                               // 0x0030   (0x0001)  
	EAutoTestVolumetricFogSetting                      VolumetricFog;                                              // 0x0031   (0x0001)  
	EAutoTestRTSetting                                 RT;                                                         // 0x0032   (0x0001)  
	EAutoTestDLSSSetting                               DLSS;                                                       // 0x0033   (0x0001)  
	EScreenPercentage                                  ScreenPercentage;                                           // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/PaladinAutoTestUtilRuntime.LevelPerformancePointInfo
/// Size: 0x0018 (0x000008 - 0x000020)
struct FLevelPerformancePointInfo : FTableRowBase
{ 
	FName                                              LevelID;                                                    // 0x0008   (0x0008)  
	TArray<FVector>                                    PerformancePoints;                                          // 0x0010   (0x0010)  
};

