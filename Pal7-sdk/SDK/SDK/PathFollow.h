
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/PathFollow.EPFEventFireMode
/// Size: 0x04
enum class EPFEventFireMode : uint8_t
{
	EPFEventFireMode__Forward                                                        = 0,
	EPFEventFireMode__Reverse                                                        = 1,
	EPFEventFireMode__Always                                                         = 2,
	EPFEventFireMode__EPFEventFireMode_MAX                                           = 3
};

/// Enum /Script/PathFollow.EEasingType
/// Size: 0x14
enum class EEasingType : uint8_t
{
	EEasingType__Linear                                                              = 0,
	EEasingType__CircularIn                                                          = 1,
	EEasingType__CircularOut                                                         = 2,
	EEasingType__CircularInOut                                                       = 3,
	EEasingType__EaseIn                                                              = 4,
	EEasingType__EaseOut                                                             = 5,
	EEasingType__EaseInOut                                                           = 6,
	EEasingType__ExpoIn                                                              = 7,
	EEasingType__ExpoOut                                                             = 8,
	EEasingType__ExpoInOut                                                           = 9,
	EEasingType__SinIn                                                               = 10,
	EEasingType__SinOut                                                              = 11,
	EEasingType__SinInOut                                                            = 12,
	EEasingType__EEasingType_MAX                                                     = 13
};

/// Enum /Script/PathFollow.EPFFactorOperation
/// Size: 0x04
enum class EPFFactorOperation : uint8_t
{
	EPFFactorOperation__None                                                         = 0,
	EPFFactorOperation__Add                                                          = 1,
	EPFFactorOperation__Mul                                                          = 2,
	EPFFactorOperation__EPFFactorOperation_MAX                                       = 3
};

/// Enum /Script/PathFollow.EPFLoopType
/// Size: 0x04
enum class EPFLoopType : uint8_t
{
	EPFLoopType__Replay                                                              = 0,
	EPFLoopType__ReplayFromStart                                                     = 1,
	EPFLoopType__PingPong                                                            = 2,
	EPFLoopType__EPFLoopType_MAX                                                     = 3
};

/// Enum /Script/PathFollow.EPFRollInterpType
/// Size: 0x06
enum class EPFRollInterpType : uint8_t
{
	EPFRollInterpType__Constant                                                      = 0,
	EPFRollInterpType__Linear                                                        = 1,
	EPFRollInterpType__LinearStable                                                  = 2,
	EPFRollInterpType__Cubic                                                         = 3,
	EPFRollInterpType__CubicClamped                                                  = 4,
	EPFRollInterpType__EPFRollInterpType_MAX                                         = 5
};

/// Class /Script/PathFollow.EventPointDelegateHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UEventPointDelegateHolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1374) /* FMulticastInlineDelegate */ __um(OnEventPointReached);                               // 0x0028   (0x0010)  
};

/// Class /Script/PathFollow.PFPathBase
/// Size: 0x0008 (0x000220 - 0x000228)
class APFPathBase : public AActor
{ 
public:
	class UPFPathComponent*                            PathToFollow;                                               // 0x0220   (0x0008)  
};

/// Struct /Script/PathFollow.DrawerData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDrawerData
{ 
	bool                                               bDrawIfNotSelected;                                         // 0x0000   (0x0001)  
	bool                                               bDrawIfSelected;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FColor                                             PathColor;                                                  // 0x0004   (0x0004)  
	float                                              Thickness;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/PathFollow.PFEventPointsVisualization
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPFEventPointsVisualization
{ 
	bool                                               bHideEventPoints;                                           // 0x0000   (0x0001)  
	bool                                               bHideEventPointInfoText;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FColor                                             EventPointsColor;                                           // 0x0004   (0x0004)  
	float                                              EventPointHitProxySize;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UTexture2D*                                  _EventPointSpriteTexture;                                   // 0x0010   (0x0008)  
};

/// Struct /Script/PathFollow.EventPoint
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEventPoint
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	float                                              Distance;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<class UObject*>                             ActionEvents;                                               // 0x0010   (0x0010)  
	EPFEventFireMode                                   FireMode;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            FireCount;                                                  // 0x0024   (0x0004)  
	int32_t                                            Index;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PathFollow.PFEventPoints
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPFEventPoints
{ 
	TArray<FEventPoint>                                Points;                                                     // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0010   (0x0010)  MISSED
	class UEventPointDelegateHolder*                   AllEventHolder;                                             // 0x0020   (0x0008)  
	TArray<class UEventPointDelegateHolder*>           Holders;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/PathFollow.PFPathRoller
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPFPathRoller
{ 
	FInterpCurveVector                                 _rollAnglesCurve;                                           // 0x0000   (0x0018)  
	TArray<class UObject*>                             _curves;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/PathFollow.PFSpeedCurve
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPFSpeedCurve
{ 
	FInterpCurveFloat                                  _speedCurve;                                                // 0x0000   (0x0018)  
};

/// Struct /Script/PathFollow.PFAutoRollVisualConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPFAutoRollVisualConfig
{ 
	bool                                               bHidePointsVisualization;                                   // 0x0000   (0x0001)  
	bool                                               bHideTextInfo;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LineLength;                                                 // 0x0004   (0x0004)  
	FLinearColor                                       PointColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SelectedPointColor;                                         // 0x0018   (0x0010)  
	float                                              PointSize;                                                  // 0x0028   (0x0004)  
	float                                              LineThickness;                                              // 0x002C   (0x0004)  
};

/// Struct /Script/PathFollow.PFSpeedPointsDrawConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPFSpeedPointsDrawConfig
{ 
	bool                                               bHideSpeedPoints;                                           // 0x0000   (0x0001)  
	bool                                               bHideSpeedPointInfoText;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FColor                                             SpeedPointsColor;                                           // 0x0004   (0x0004)  
	float                                              SpeedPointHitProxySize;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UTexture2D*                                  _SpeedPointSpriteTexture;                                   // 0x0010   (0x0008)  
	bool                                               bVisualizeSpeed;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FLinearColor                                       LowSpeedColor;                                              // 0x001C   (0x0010)  
	FLinearColor                                       HighSpeedColor;                                             // 0x002C   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PathFollow.PFPathComponent
/// Size: 0x0130 (0x000500 - 0x000630)
class UPFPathComponent : public USplineComponent
{ 
public:
	FDrawerData                                        DrawerConfig;                                               // 0x0500   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x050C   (0x0004)  MISSED
	FPFEventPointsVisualization                        EventPointsVisualization;                                   // 0x0510   (0x0018)  
	FPFEventPoints                                     EventPoints;                                                // 0x0528   (0x0038)  
	FPFPathRoller                                      _PathRoller;                                                // 0x0560   (0x0028)  
	FPFSpeedCurve                                      _speedCurve;                                                // 0x0588   (0x0018)  
	bool                                               MirrorAroundX;                                              // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05A1   (0x0003)  MISSED
	FPFAutoRollVisualConfig                            AutoRollDebugConfig;                                        // 0x05A4   (0x0030)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05D4   (0x0004)  MISSED
	FPFSpeedPointsDrawConfig                           SpeedPointDrawConfig;                                       // 0x05D8   (0x0040)  
	class UPFPathFollowerComponent*                    _FollowerComponent;                                         // 0x0618   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0620   (0x0010)  MISSED


	/// Functions
	// Function /Script/PathFollow.PFPathComponent.GetLocationAtSplinePointMirrored
	// FVector GetLocationAtSplinePointMirrored(int32_t PointIdx, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);      // [0x799dd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathComponent.GetLocationAtSplineInputKeyMirrored
	// FVector GetLocationAtSplineInputKeyMirrored(float Key, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);          // [0x799cf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathComponent.GetLocationAtDistanceAlongSplineMirrored
	// FVector GetLocationAtDistanceAlongSplineMirrored(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0x799c10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PathFollow.PFPathFollowerComponent
/// Size: 0x01C0 (0x0000B0 - 0x000270)
class UPFPathFollowerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1375) /* FMulticastInlineDelegate */ __um(OnReachedEnd);                                      // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1376) /* FMulticastInlineDelegate */ __um(OnReachedStart);                                    // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,1377) /* FMulticastInlineDelegate */ __um(OnStartPath);                                       // 0x00D0   (0x0010)  
	SDK_UNDEFINED(8,1378) /* TWeakObjectPtr<AActor*> */ __um(PathOwner);                                           // 0x00E0   (0x0008)  
	bool                                               bTeleportPhysics;                                           // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              TickInterval;                                               // 0x00EC   (0x0004)  
	bool                                               bHidePathInfoText;                                          // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              SpeedDuration;                                              // 0x00F4   (0x0004)  
	bool                                               TimeBased;                                                  // 0x00F8   (0x0001)  
	bool                                               bFollowRotation;                                            // 0x00F9   (0x0001)  
	bool                                               bUseSpeedCurve;                                             // 0x00FA   (0x0001)  
	bool                                               bOverridePathSpeedPoints;                                   // 0x00FB   (0x0001)  
	EPFFactorOperation                                 SpeedFactorOperation;                                       // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              SpeedFactor;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FPFSpeedCurve                                      _speedCurve;                                                // 0x0108   (0x0018)  
	FInterpCurveFloat                                  _InterpSpeedCurve;                                          // 0x0120   (0x0018)  
	EEasingType                                        EasingType;                                                 // 0x0138   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              CurveDegree;                                                // 0x013C   (0x0004)  
	bool                                               bLoop;                                                      // 0x0140   (0x0001)  
	EPFLoopType                                        LoopType;                                                   // 0x0141   (0x0001)  
	bool                                               bStartAtPlay;                                               // 0x0142   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0143   (0x0001)  MISSED
	float                                              StartDelay;                                                 // 0x0144   (0x0004)  
	float                                              StartDistance;                                              // 0x0148   (0x0004)  
	bool                                               bReverse;                                                   // 0x014C   (0x0001)  
	bool                                               bInvertRotationOnReverse;                                   // 0x014D   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x014E   (0x0002)  MISSED
	float                                              LookAhead;                                                  // 0x0150   (0x0004)  
	bool                                               bUseRotationCurve;                                          // 0x0154   (0x0001)  
	bool                                               bUsePathPitchAndYaw;                                        // 0x0155   (0x0001)  
	bool                                               bAutoRecompute;                                             // 0x0156   (0x0001)  
	bool                                               bKeepRelativeDistances;                                     // 0x0157   (0x0001)  
	int32_t                                            RotationPointSteps;                                         // 0x0158   (0x0004)  
	bool                                               GenerateOnSplineControlPoints;                              // 0x015C   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              RollSampleDistance;                                         // 0x0160   (0x0004)  
	bool                                               bClampGeneratedAngles;                                      // 0x0164   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              RollAnglesClampMax;                                         // 0x0168   (0x0004)  
	float                                              RollAnglesClampMin;                                         // 0x016C   (0x0004)  
	EPFRollInterpType                                  RollIntepType;                                              // 0x0170   (0x0001)  
	EPFFactorOperation                                 RotationFactorOperation;                                    // 0x0171   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x0172   (0x0002)  MISSED
	FRotator                                           RotationFactor;                                             // 0x0174   (0x000C)  
	bool                                               RotationMaskLocal;                                          // 0x0180   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0181   (0x0003)  MISSED
	FIntVector                                         RotationUpdateMask;                                         // 0x0184   (0x000C)  
	FIntVector                                         LocationUpdateMask;                                         // 0x0190   (0x000C)  
	bool                                               bOverrideRotationCurve;                                     // 0x019C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x019D   (0x0003)  MISSED
	FPFPathRoller                                      _PathRoller;                                                // 0x01A0   (0x0028)  
	class USceneComponent*                             LocationComponent;                                          // 0x01C8   (0x0008)  
	class USceneComponent*                             RotationComponent;                                          // 0x01D0   (0x0008)  
	class USceneComponent*                             RollComponent;                                              // 0x01D8   (0x0008)  
	class USceneComponent*                             LookAtComponent;                                            // 0x01E0   (0x0008)  
	bool                                               bLookAtEvenIfNotStarted;                                    // 0x01E8   (0x0001)  
	bool                                               bStarted;                                                   // 0x01E9   (0x0001)  
	bool                                               bPause;                                                     // 0x01EA   (0x0001)  
	bool                                               bAlignToPathStart;                                          // 0x01EB   (0x0001)  
	float                                              CurrentDistanceOnPath;                                      // 0x01EC   (0x0004)  
	bool                                               bOverridePathEventPoints;                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FPFEventPoints                                     EventPoints;                                                // 0x01F8   (0x0038)  
	SDK_UNDEFINED(8,1379) /* TWeakObjectPtr<USplineComponent*> */ __um(SplineToFollow);                            // 0x0230   (0x0008)  
	float                                              _pathDuration;                                              // 0x0238   (0x0004)  
	float                                              _currSplineLength;                                          // 0x023C   (0x0004)  
	float                                              _ElapsedTime;                                               // 0x0240   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	FTimerHandle                                       _DelayTimer;                                                // 0x0248   (0x0008)  
	float                                              _lastTickTime;                                              // 0x0250   (0x0004)  
	unsigned char                                      UnknownData14_5[0x18];                                      // 0x0254   (0x0018)  MISSED
	int32_t                                            _LastPassedEventIndex;                                      // 0x026C   (0x0004)  


	/// Functions
	// Function /Script/PathFollow.PFPathFollowerComponent.UpdateLastMoveDirection
	// void UpdateLastMoveDirection(FVector& NewLocation);                                                                   // [0x79a5e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.UpdateAutoRotationPoints
	// void UpdateAutoRotationPoints();                                                                                      // [0x79a5c0] Final|Native|Public  
	// Function /Script/PathFollow.PFPathFollowerComponent.Stop
	// void Stop();                                                                                                          // [0x79a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.StartImpl
	// void StartImpl();                                                                                                     // [0x79a580] Final|Native|Private 
	// Function /Script/PathFollow.PFPathFollowerComponent.Start
	// void Start(float StartDelay);                                                                                         // [0x79a500] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.SetPathToFollow
	// void SetPathToFollow(class USplineComponent* Spline);                                                                 // [0x79a480] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.SetPathOwner
	// void SetPathOwner(class AActor* PathOwner);                                                                           // [0x79a400] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.SetCurrentDistance
	// void SetCurrentDistance(float NewDistance);                                                                           // [0x79a380] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.Reverse
	// void Reverse(bool Reverse);                                                                                           // [0x79a2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.Pause
	// void Pause();                                                                                                         // [0x79a2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.ModifyFinalRotation
	// FRotator ModifyFinalRotation(FRotator& NewRotation);                                                                  // [0x79a220] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/PathFollow.PFPathFollowerComponent.ModifyFinalLocation
	// FVector ModifyFinalLocation(FVector& NewLocation);                                                                    // [0x79a170] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/PathFollow.PFPathFollowerComponent.HasPath
	// bool HasPath();                                                                                                       // [0x79a140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetSpeedAtSpeedPoint
	// float GetSpeedAtSpeedPoint(int32_t PointIndex);                                                                       // [0x79a0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetSpeedAtDistance
	// float GetSpeedAtDistance(float Distance);                                                                             // [0x79a020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetRotationAtDistance
	// FRotator GetRotationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace> Coord);                            // [0x799f40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetPathToFollow
	// class UPFPathComponent* GetPathToFollow();                                                                            // [0x799f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetPathOwner
	// class AActor* GetPathOwner();                                                                                         // [0x799ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetMoveDirection
	// FVector GetMoveDirection();                                                                                           // [0x799ea0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetLocationAtDistance
	// FVector GetLocationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace> Coord);                             // [0x799b30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetEventPoints
	// FPFEventPoints GetEventPoints();                                                                                      // [0x799af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetEventPointDelegateByName
	// class UEventPointDelegateHolder* GetEventPointDelegateByName(FName& Name);                                            // [0x799a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetEventPointDelegateByIndex
	// class UEventPointDelegateHolder* GetEventPointDelegateByIndex(int32_t Index);                                         // [0x7999c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetEventPointDelegateAll
	// class UEventPointDelegateHolder* GetEventPointDelegateAll();                                                          // [0x799990] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.GetEventPointByName
	// FEventPoint GetEventPointByName(FName& Name);                                                                         // [0x7998c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.FollowPath
	// void FollowPath(float FollowStep);                                                                                    // [0x799840] Final|Native|Public|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.EventPointExistByName
	// bool EventPointExistByName(FName& Name);                                                                              // [0x7997a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PathFollow.PFPathFollowerComponent.ComputeLookAtRotation
	// FRotator ComputeLookAtRotation(class USceneComponent* TargetComponent, FVector& FollowerLocation);                    // [0x7996b0] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/PathFollow.PFPathFollowerComponent.ComputeAutoRotationPoints
	// void ComputeAutoRotationPoints();                                                                                     // [0x799690] Final|Native|Public  
};

/// Struct /Script/PathFollow.PathFollowerInstanceData
/// Size: 0x0078 (0x000058 - 0x0000D0)
struct FPathFollowerInstanceData : FActorComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0058   (0x0078)  MISSED
};

