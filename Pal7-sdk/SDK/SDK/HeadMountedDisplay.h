
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x07
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX                                   = 256
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX                                   = 8
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);                                        // [0x213b620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);                                              // [0x213b540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                       // [0x213b450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// void SetSpectatorScreenTexture(class UTexture* InTexture);                                                            // [0x213b360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // [0x213b170] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// void SetSpectatorScreenMode(ESpectatorScreenMode Mode);                                                               // [0x213b100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// void SetClippingPlanes(float Near, float Far);                                                                        // [0x213aca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);                            // [0x213ab70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// bool IsSpectatorScreenModeControllable();                                                                             // [0x213ab20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// bool IsInLowPersistenceMode();                                                                                        // [0xa96af0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// bool IsHeadMountedDisplayEnabled();                                                                                   // [0x213a800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// bool IsHeadMountedDisplayConnected();                                                                                 // [0x213a7d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// bool IsDeviceTracking(FXRDeviceId& XRDeviceId);                                                                       // [0x213a730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// bool HasValidTrackingPosition();                                                                                      // [0x213a6e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// float GetWorldToMetersScale(class UObject* WorldContext);                                                             // [0x213a650] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);                                                               // [0x213a570] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// FTransform GetTrackingToWorldTransform(class UObject* WorldContext);                                                  // [0x213a4b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // [0x213a0d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                  // [0x213a090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// float GetScreenPercentage();                                                                                          // [0x213a060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // [0x2139df0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// float GetPixelDensity();                                                                                              // [0x2139dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);                                    // [0x2139c20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// int32_t GetNumOfTrackingSensors();                                                                                    // [0x2139bf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                         // [0x2139a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// FName GetHMDDeviceName();                                                                                             // [0x2139a40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// void GetDeviceWorldPose(class UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x2139810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position); // [0x2139620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                         // [0x21394d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// void EnableLowPersistenceMode(bool bEnable);                                                                          // [0xa97f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// bool EnableHMD(bool bEnable);                                                                                         // [0x21391d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);                                           // [0x2138e80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00B0 (0x000410 - 0x0004C0)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0408   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x040C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x040D   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0410   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0418:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0419   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x041C   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x041D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x041E   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0420   (0x0008)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x0428   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x0430   (0x0010)  
	unsigned char                                      UnknownData03_5[0x60];                                      // 0x0440   (0x0060)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x04A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                    // [0x213b4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                        // [0x213b3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                   // [0x213b070] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                              // [0x213add0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                         // [0x213ad50] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                     // [0x213ac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                     // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                     // [0x213ab50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                  // [0x213a480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                             // [0x2139cf0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                  // [0x2139ab0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);                                                      // [0x213ae50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);                                         // [0x213aa60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);                                     // [0x213a9a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);                // [0x213a920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// bool IsMotionTrackedDeviceCountManagementNecessary();                                                                 // [0x213a8f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);                                                   // [0x213a830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// int32_t GetMotionTrackingEnabledControllerCount();                                                                    // [0x2139bc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// int32_t GetMaximumMotionTrackedControllerCount();                                                                     // [0x2139b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// FName GetActiveTrackingSystemName();                                                                                  // [0x21395e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// TArray<FName> EnumerateMotionSources();                                                                               // [0x2139450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                             // [0x2139390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                         // [0x21392d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                   // [0x2139250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                            // [0x2139120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                        // [0x2139070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);                                                // [0x2139000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// void DisableMotionTrackingOfAllControllers();                                                                         // [0x2138fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                  // [0x2138f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,2935) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate); // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,2936) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializedDelegate);                    // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,2937) /* FMulticastInlineDelegate */ __um(HMDRecenteredDelegate);                             // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,2938) /* FMulticastInlineDelegate */ __um(HMDLostDelegate);                                   // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,2939) /* FMulticastInlineDelegate */ __um(HMDReconnectedDelegate);                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,2940) /* FMulticastInlineDelegate */ __um(HMDConnectCanceledDelegate);                        // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,2941) /* FMulticastInlineDelegate */ __um(HMDPutOnHeadDelegate);                              // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,2942) /* FMulticastInlineDelegate */ __um(HMDRemovedFromHeadDelegate);                        // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,2943) /* FMulticastInlineDelegate */ __um(VRControllerRecenteredDelegate);                    // 0x0130   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId); // [0x2138c50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform); // [0x2138620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,2944) /* FMulticastInlineDelegate */ __um(OnModelLoaded);                                     // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2945) /* FMulticastInlineDelegate */ __um(OnLoadFailure);                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent); // [0x21389c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // [0x2138400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// void ShowLoadingScreen();                                                                                             // [0x213b600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // [0x213aed0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// void HideLoadingScreen();                                                                                             // [0x213a710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// void ClearLoadingScreenSplashes();                                                                                    // [0x2138f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x21387e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (0x000000 - 0x00000C)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

