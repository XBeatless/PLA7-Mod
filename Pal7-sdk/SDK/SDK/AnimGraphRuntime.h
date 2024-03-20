
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1,
	ESphericalLimitType__ESphericalLimitType_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x06
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX                                   = 5
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX                   = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX                 = 2
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x03
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX                           = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX                               = 3
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x04
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX                     = 3
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x03
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX                             = 2
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x03
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x08
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6,
	EInterpolationBlend__MAX                                                         = 7
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x04
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2,
	BMM_MAX                                                                          = 3
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x06
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX                                 = 5
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1,
	EPoseDriverSource__EPoseDriverSource_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x04
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2,
	EPoseDriverType__EPoseDriverType_MAX                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1,
	EIT_MAX                                                                          = 2
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x04
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2,
	ESimulationSpace__ESimulationSpace_MAX                                           = 3
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x04
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX                           = 3
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x04
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX                                     = 3
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x05
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX                                             = 4
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x07
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5,
	ERotationComponent__ERotationComponent_MAX                                       = 6
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x16
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14,
	EEasingFuncType__EEasingFuncType_MAX                                             = 15
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x05
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX                                     = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x06
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX                                       = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x07
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5,
	ERBFFunctionType__ERBFFunctionType_MAX                                           = 6
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x03
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1,
	ERBFSolverType__ERBFSolverType_MAX                                               = 2
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0000 (0x000270 - 0x000270)
class UAnimSequencerInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
public:
	FName                                              NotifyName;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
public:
	FName                                              NotifyName;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x24590f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// void K2_StartProfilingTimer();                                                                                        // [0x24590d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x2458e20] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// float K2_MakePerlinNoiseAndRemap(float value, float RangeOutMin, float RangeOutMax);                                  // [0x2458d10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x2458a90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                             // [0x24589a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x24586e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x24585e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x24581d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x2457fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPlayMontageCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,882) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,883) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,884) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,885) /* FMulticastInlineDelegate */ __um(OnNotifyBegin);                                      // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,886) /* FMulticastInlineDelegate */ __um(OnNotifyEnd);                                        // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0078   (0x0030)  MISSED


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                // [0x24596a0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x24595c0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                  // [0x24594f0] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                            // [0x2459420] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x2457e40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationSupport : public UInterface
{ 
public:
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0250 (0x0006E0 - 0x000930)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x250];                                     // 0x06E0   (0x0250)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00B0 (0x000030 - 0x0000E0)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{ 
	float                                              X;                                                          // 0x0030   (0x0004)  
	float                                              Y;                                                          // 0x0034   (0x0004)  
	float                                              Z;                                                          // 0x0038   (0x0004)  
	float                                              PlayRate;                                                   // 0x003C   (0x0004)  
	bool                                               bLoop;                                                      // 0x0040   (0x0001)  
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              StartPosition;                                              // 0x0044   (0x0004)  
	class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x0050   (0x0088)  MISSED
	class UBlendSpaceBase*                             PreviousBlendSpace;                                         // 0x00D8   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00D0 (0x0000E0 - 0x0001B0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x00E0   (0x0060)  MISSED
	FPoseLink                                          BasePose;                                                   // 0x0140   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0150   (0x0004)  
	FName                                              SourceSocketName;                                           // 0x0154   (0x0008)  
	FName                                              PivotSocketName;                                            // 0x015C   (0x0008)  
	FVector                                            LookAtLocation;                                             // 0x0164   (0x000C)  
	FVector                                            SocketAxis;                                                 // 0x0170   (0x000C)  
	float                                              Alpha;                                                      // 0x017C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0180   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAnimPhysConstraintSetup
{ 
	AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)  
	AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)  
	AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            LinearAxesMin;                                              // 0x0004   (0x000C)  
	FVector                                            LinearAxesMax;                                              // 0x0010   (0x000C)  
	AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x001C   (0x0001)  
	AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x001D   (0x0001)  
	AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	float                                              ConeAngle;                                                  // 0x0020   (0x0004)  
	FVector                                            AngularLimitsMin;                                           // 0x0024   (0x000C)  
	FVector                                            AngularLimitsMax;                                           // 0x0030   (0x000C)  
	FVector                                            AngularTarget;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0024 (0x000000 - 0x000024)
struct FAnimPhysSphericalLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            SphereLocalOffset;                                          // 0x0010   (0x000C)  
	float                                              LimitRadius;                                                // 0x001C   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAnimPhysPlanarLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FTransform                                         PlaneTransform;                                             // 0x0010   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (0x000000 - 0x000130)
struct FRotationRetargetingInfo
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	FTransform                                         Target;                                                     // 0x0040   (0x0030)  
	ERotationComponent                                 RotationComponent;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0074   (0x000C)  
	bool                                               bUseAbsoluteAngle;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0084   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0088   (0x0004)  
	float                                              TargetMinimum;                                              // 0x008C   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0090   (0x0004)  
	EEasingFuncType                                    EasingType;                                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0098   (0x0088)  
	bool                                               bFlipEasing;                                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              EasingWeight;                                               // 0x0124   (0x0004)  
	bool                                               bClamp;                                                     // 0x0128   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0378 (0x0000C8 - 0x000440)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
	float                                              LinearDampingOverride;                                      // 0x00C8   (0x0004)  
	float                                              AngularDampingOverride;                                     // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x00D0   (0x0060)  MISSED
	FBoneReference                                     RelativeSpaceBone;                                          // 0x0130   (0x0010)  
	FBoneReference                                     BoundBone;                                                  // 0x0140   (0x0010)  
	FBoneReference                                     ChainEnd;                                                   // 0x0150   (0x0010)  
	FVector                                            BoxExtents;                                                 // 0x0160   (0x000C)  
	FVector                                            LocalJointOffset;                                           // 0x016C   (0x000C)  
	float                                              GravityScale;                                               // 0x0178   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x017C   (0x000C)  
	float                                              LinearSpringConstant;                                       // 0x0188   (0x0004)  
	float                                              AngularSpringConstant;                                      // 0x018C   (0x0004)  
	float                                              WindScale;                                                  // 0x0190   (0x0004)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0194   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x01A0   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01AC   (0x000C)  
	float                                              AngularBiasOverride;                                        // 0x01B8   (0x0004)  
	int32_t                                            NumSolverIterationsPreUpdate;                               // 0x01BC   (0x0004)  
	int32_t                                            NumSolverIterationsPostUpdate;                              // 0x01C0   (0x0004)  
	FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x01C4   (0x0048)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x020C   (0x0004)  MISSED
	TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0210   (0x0010)  
	float                                              SphereCollisionRadius;                                      // 0x0220   (0x0004)  
	FVector                                            ExternalForce;                                              // 0x0224   (0x000C)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0230   (0x0010)  
	AnimPhysCollisionType                              CollisionType;                                              // 0x0240   (0x0001)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0242   (0x0002)  MISSED
	bool                                               bUseSphericalLimits : 1;                                    // 0x0244:0 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0244:1 (0x0001)  
	bool                                               bDoUpdate : 1;                                              // 0x0244:2 (0x0001)  
	bool                                               bDoEval : 1;                                                // 0x0244:3 (0x0001)  
	bool                                               bOverrideLinearDamping : 1;                                 // 0x0244:4 (0x0001)  
	bool                                               bOverrideAngularBias : 1;                                   // 0x0244:5 (0x0001)  
	bool                                               bOverrideAngularDamping : 1;                                // 0x0244:6 (0x0001)  
	bool                                               bEnableWind : 1;                                            // 0x0244:7 (0x0001)  
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0245:0 (0x0001)  MISSED
	bool                                               bUseGravityOverride : 1;                                    // 0x0245:1 (0x0001)  
	bool                                               bLinearSpring : 1;                                          // 0x0245:2 (0x0001)  
	bool                                               bAngularSpring : 1;                                         // 0x0245:3 (0x0001)  
	bool                                               bChain : 1;                                                 // 0x0245:4 (0x0001)  
	unsigned char                                      UnknownData04_4[0xA];                                       // 0x0246   (0x000A)  MISSED
	FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x0250   (0x0130)  
	unsigned char                                      UnknownData05_6[0xC0];                                      // 0x0380   (0x00C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	float                                              Alpha;                                                      // 0x0030   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)  
	int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C0   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C4   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAngularRangeLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
	FBoneReference                                     Bone;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
	TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00C8   (0x0010)  
	TArray<FVector>                                    AngularOffsets;                                             // 0x00D8   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0024 (0x000000 - 0x000024)
struct FBlendBoneByChannelEntry
{ 
	FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x0010   (0x0010)  
	bool                                               bBlendTranslation;                                          // 0x0020   (0x0001)  
	bool                                               bBlendRotation;                                             // 0x0021   (0x0001)  
	bool                                               bBlendScale;                                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	SDK_UNDEFINED(1,887) /* TEnumAsByte<EBoneControlSpace> */ __um(TransformsSpace);                               // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0088 (0x000010 - 0x000098)
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)  
	TArray<float>                                      BlendTime;                                                  // 0x0020   (0x0010)  
	EBlendListTransitionType                           TransitionType;                                             // 0x0030   (0x0001)  
	EAlphaBlendOption                                  BlendType;                                                  // 0x0031   (0x0001)  
	bool                                               bResetChildOnActivation;                                    // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	class UCurveFloat*                                 CustomBlendCurve;                                           // 0x0038   (0x0008)  
	class UBlendProfile*                               BlendProfile;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
	bool                                               bActiveValue;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (0x000098 - 0x0000B0)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
	TArray<int32_t>                                    EnumToPoseIndex;                                            // 0x0098   (0x0010)  
	char                                               ActiveEnumValue;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
	int32_t                                            ActiveChildIndex;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
	float                                              NormalizedTime;                                             // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0050 (0x0000C8 - 0x000118)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	class UCurveFloat*                                 DrivingCurve;                                               // 0x00D8   (0x0008)  
	float                                              Multiplier;                                                 // 0x00E0   (0x0004)  
	float                                              RangeMin;                                                   // 0x00E4   (0x0004)  
	float                                              RangeMax;                                                   // 0x00E8   (0x0004)  
	float                                              RemappedMin;                                                // 0x00EC   (0x0004)  
	float                                              RemappedMax;                                                // 0x00F0   (0x0004)  
	FName                                              ParameterName;                                              // 0x00F4   (0x0008)  
	FBoneReference                                     TargetBone;                                                 // 0x00FC   (0x0010)  
	EDrivenDestinationMode                             DestinationMode;                                            // 0x010C   (0x0001)  
	EDrivenBoneModificationMode                        ModificationMode;                                           // 0x010D   (0x0001)  
	SDK_UNDEFINED(1,888) /* TEnumAsByte<EComponentType> */ __um(SourceComponent);                                  // 0x010E   (0x0001)  
	bool                                               bUseRange : 1;                                              // 0x010F:0 (0x0001)  
	bool                                               bAffectTargetTranslationX : 1;                              // 0x010F:1 (0x0001)  
	bool                                               bAffectTargetTranslationY : 1;                              // 0x010F:2 (0x0001)  
	bool                                               bAffectTargetTranslationZ : 1;                              // 0x010F:3 (0x0001)  
	bool                                               bAffectTargetRotationX : 1;                                 // 0x010F:4 (0x0001)  
	bool                                               bAffectTargetRotationY : 1;                                 // 0x010F:5 (0x0001)  
	bool                                               bAffectTargetRotationZ : 1;                                 // 0x010F:6 (0x0001)  
	bool                                               bAffectTargetScaleX : 1;                                    // 0x010F:7 (0x0001)  
	bool                                               bAffectTargetScaleY : 1;                                    // 0x0110:0 (0x0001)  
	bool                                               bAffectTargetScaleZ : 1;                                    // 0x0110:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSocketReference
{ 
	FName                                              SocketName;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0060 (0x000000 - 0x000060)
struct FBoneSocketTarget
{ 
	bool                                               bUseSocket;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BoneReference;                                              // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FSocketReference                                   SocketReference;                                            // 0x0020   (0x0040)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00B8 (0x0000C8 - 0x000180)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
	FVector                                            EffectorLocation;                                           // 0x00C8   (0x000C)  
	SDK_UNDEFINED(1,889) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorLocationSpace);                         // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x00D5   (0x000B)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00E0   (0x0060)  
	FBoneReference                                     TipBone;                                                    // 0x0140   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0150   (0x0010)  
	float                                              Precision;                                                  // 0x0160   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0164   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x0168   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x016A   (0x0006)  MISSED
	TArray<float>                                      RotationLimitPerJoints;                                     // 0x0170   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x001C (0x000000 - 0x00001C)
struct FConstraint
{ 
	FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0010)  
	EConstraintOffsetOption                            OffsetOption;                                               // 0x0010   (0x0001)  
	ETransformConstraintType                           TransformType;                                              // 0x0011   (0x0001)  
	FFilterOptionPerAxis                               PerAxis;                                                    // 0x0012   (0x0003)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0015   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (0x0000C8 - 0x000108)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	TArray<FConstraint>                                ConstraintSetup;                                            // 0x00D8   (0x0010)  
	TArray<float>                                      ConstraintWeights;                                          // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	SDK_UNDEFINED(1,890) /* TEnumAsByte<EBoneControlSpace> */ __um(ControlSpace);                                  // 0x00EB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     TargetBone;                                                 // 0x00D8   (0x0010)  
	bool                                               bCopyTranslation;                                           // 0x00E8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00E9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00EA   (0x0001)  
	CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00EB   (0x0001)  
	float                                              TranslationMultiplier;                                      // 0x00EC   (0x0004)  
	float                                              RotationMultiplier;                                         // 0x00F0   (0x0004)  
	float                                              ScaleMultiplier;                                            // 0x00F4   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x0130 (0x000010 - 0x000140)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
	SDK_UNDEFINED(8,891) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                  // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0018   (0x0001)  
	bool                                               bCopyCurves;                                                // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x126];                                     // 0x001A   (0x0126)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (0x000010 - 0x000040)
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	FName                                              SourceBinding;                                              // 0x0020   (0x0008)  
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,892) /* TScriptInterface<Class> */ __um(CurveSource);                                         // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x00C8 (0x0000C8 - 0x000190)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0030)  
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0060)  
	FBoneReference                                     TipBone;                                                    // 0x0160   (0x0010)  
	FBoneReference                                     RootBone;                                                   // 0x0170   (0x0010)  
	float                                              Precision;                                                  // 0x0180   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0184   (0x0004)  
	SDK_UNDEFINED(1,893) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorTransformSpace);                        // 0x0188   (0x0001)  
	SDK_UNDEFINED(1,894) /* TEnumAsByte<EBoneRotationSource> */ __um(EffectorRotationSource);                      // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x018A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0058 (0x0000C8 - 0x000120)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RightHandFK;                                                // 0x00C8   (0x0010)  
	FBoneReference                                     LeftHandFK;                                                 // 0x00D8   (0x0010)  
	FBoneReference                                     RightHandIK;                                                // 0x00E8   (0x0010)  
	FBoneReference                                     LeftHandIK;                                                 // 0x00F8   (0x0010)  
	TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0108   (0x0010)  
	float                                              HandFKWeight;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (0x000010 - 0x0000C0)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0030   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0040   (0x0010)  
	bool                                               bMeshSpaceRotationBlend;                                    // 0x0050   (0x0001)  
	bool                                               bMeshSpaceScaleBlend;                                       // 0x0051   (0x0001)  
	SDK_UNDEFINED(1,895) /* TEnumAsByte<ECurveBlendOption> */ __um(CurveBlendOption);                              // 0x0052   (0x0001)  
	bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x0053   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0060   (0x0010)  
	FGuid                                              SkeletonGuid;                                               // 0x0070   (0x0010)  
	FGuid                                              VirtualBoneGuid;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0090   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAnimLegIKDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
	float                                              MinRotationAngle;                                           // 0x0024   (0x0004)  
	SDK_UNDEFINED(1,896) /* TEnumAsByte<EAxis> */      __um(FootBoneForwardAxis);                                  // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,897) /* TEnumAsByte<EAxis> */      __um(HingeRotationAxis);                                    // 0x0029   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x002A   (0x0001)  
	bool                                               bEnableKneeTwistCorrection;                                 // 0x002B   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
	float                                              ReachPrecision;                                             // 0x00C8   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00CC   (0x0004)  
	TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FAnimLegIKData
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (0x000000 - 0x000038)
struct FIKChain
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x003C (0x000000 - 0x00003C)
struct FIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0x3C];                                      // 0x0000   (0x003C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x00E8 (0x0000C8 - 0x0001B0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FBoneSocketTarget                                  LookAtTarget;                                               // 0x00E0   (0x0060)  
	FVector                                            LookAtLocation;                                             // 0x0140   (0x000C)  
	FAxis                                              LookAt_Axis;                                                // 0x014C   (0x0010)  
	bool                                               bUseLookUpAxis;                                             // 0x015C   (0x0001)  
	SDK_UNDEFINED(1,898) /* TEnumAsByte<EInterpolationBlend> */ __um(InterpolationType);                           // 0x015D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x015E   (0x0002)  MISSED
	FAxis                                              LookUp_Axis;                                                // 0x0160   (0x0010)  
	float                                              LookAtClamp;                                                // 0x0170   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0174   (0x0004)  
	float                                              InterpolationTriggerThreashold;                             // 0x0178   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x017C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0040 (0x0000C8 - 0x000108)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00C8   (0x0010)  
	FVector                                            Translation;                                                // 0x00D8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00E4   (0x000C)  
	FVector                                            Scale;                                                      // 0x00F0   (0x000C)  
	SDK_UNDEFINED(1,899) /* TEnumAsByte<EBoneModificationMode> */ __um(TranslationMode);                           // 0x00FC   (0x0001)  
	SDK_UNDEFINED(1,900) /* TEnumAsByte<EBoneModificationMode> */ __um(RotationMode);                              // 0x00FD   (0x0001)  
	SDK_UNDEFINED(1,901) /* TEnumAsByte<EBoneModificationMode> */ __um(ScaleMode);                                 // 0x00FE   (0x0001)  
	SDK_UNDEFINED(1,902) /* TEnumAsByte<EBoneControlSpace> */ __um(TranslationSpace);                              // 0x00FF   (0x0001)  
	SDK_UNDEFINED(1,903) /* TEnumAsByte<EBoneControlSpace> */ __um(RotationSpace);                                 // 0x0100   (0x0001)  
	SDK_UNDEFINED(1,904) /* TEnumAsByte<EBoneControlSpace> */ __um(ScaleSpace);                                    // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0102   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (0x000010 - 0x000058)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TArray<float>                                      CurveValues;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	EModifyCurveApplyMode                              ApplyMode;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0040   (0x0008)  
	bool                                               bAdditiveNode;                                              // 0x0048   (0x0001)  
	bool                                               bNormalizeAlpha;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0038 (0x0000C8 - 0x000100)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToObserve;                                              // 0x00C8   (0x0010)  
	SDK_UNDEFINED(1,905) /* TEnumAsByte<EBoneControlSpace> */ __um(DisplaySpace);                                  // 0x00D8   (0x0001)  
	bool                                               bRelativeToRefPose;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00DA   (0x0002)  MISSED
	FVector                                            Translation;                                                // 0x00DC   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00E8   (0x000C)  
	FVector                                            Scale;                                                      // 0x00F4   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0048 (0x000030 - 0x000078)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
	class UPoseAsset*                                  PoseAsset;                                                  // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0038   (0x0040)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (0x000078 - 0x000098)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0078   (0x0010)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	class UCurveFloat*                                 CustomCurve;                                                // 0x0090   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0018 (0x000078 - 0x000090)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
	FName                                              PoseName;                                                   // 0x0078   (0x0008)  
	float                                              PoseWeight;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPoseDriverTransform
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)  
	FRotator                                           TargetRotation;                                             // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FPoseDriverTarget
{ 
	TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0010   (0x000C)  
	float                                              TargetScale;                                                // 0x001C   (0x0004)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0020   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0021   (0x0001)  
	bool                                               bApplyCustomCurve;                                          // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0028   (0x0080)  
	FName                                              DrivenName;                                                 // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	bool                                               bIsHidden;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (0x000000 - 0x00002C)
struct FRBFParams
{ 
	int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)  
	ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	ERBFFunctionType                                   Function;                                                   // 0x000C   (0x0001)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000D   (0x0001)  
	SDK_UNDEFINED(1,906) /* TEnumAsByte<EBoneAxis> */  __um(TwistAxis);                                            // 0x000E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x000F   (0x0001)  MISSED
	float                                              WeightThreshold;                                            // 0x0010   (0x0004)  
	ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            MedianReference;                                            // 0x0018   (0x000C)  
	float                                              MedianMin;                                                  // 0x0024   (0x0004)  
	float                                              MedianMax;                                                  // 0x0028   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00B0 (0x000078 - 0x000128)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0078   (0x0010)  
	TArray<FBoneReference>                             SourceBones;                                                // 0x0088   (0x0010)  
	TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x0098   (0x0010)  
	TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x00B8   (0x0030)  MISSED
	FBoneReference                                     EvalSpaceBone;                                              // 0x00E8   (0x0010)  
	FRBFParams                                         RBFParams;                                                  // 0x00F8   (0x002C)  
	EPoseDriverSource                                  DriveSource;                                                // 0x0124   (0x0001)  
	EPoseDriverOutput                                  DriveOutput;                                                // 0x0125   (0x0001)  
	bool                                               bOnlyDriveSelectedBones : 1;                                // 0x0126:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0127   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0080 (0x000010 - 0x000090)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
	FName                                              SnapshotName;                                               // 0x0010   (0x0008)  
	FPoseSnapshot                                      Snapshot;                                                   // 0x0018   (0x0038)  
	ESnapshotSourceMode                                Mode;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0051   (0x003F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRandomPlayerSequenceEntry
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	float                                              ChanceToPlay;                                               // 0x0008   (0x0004)  
	int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)  
	int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0014   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
struct FAnimNode_RandomPlayer : FAnimNode_Base
{ 
	TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0020   (0x0050)  MISSED
	bool                                               bShuffleMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (0x000010 - 0x000018)
struct FAnimNode_RefPose : FAnimNode_Base
{ 
	SDK_UNDEFINED(1,907) /* TEnumAsByte<ERefPoseType> */ __um(RefPoseType);                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x04C8 (0x0000C8 - 0x000590)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x98];                                      // 0x00D0   (0x0098)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x0168   (0x000C)  
	FVector                                            ExternalForce;                                              // 0x0174   (0x000C)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0180   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x018C   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0198   (0x000C)  
	float                                              CachedBoundsScale;                                          // 0x01A4   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x01A8   (0x0010)  
	SDK_UNDEFINED(1,908) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                                // 0x01B8   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x01B9   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x01BA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x01BB   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x01BC:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x01BC:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x01BC:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x01BC:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x01BC:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x01BD   (0x0003)  MISSED
	FSolverIterations                                  OverrideSolverIterations;                                   // 0x01C0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x3B8];                                     // 0x01D8   (0x03B8)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody_Chaos
/// Size: 0x04B8 (0x0000C8 - 0x000580)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	FVector                                            OverrideWorldGravity;                                       // 0x00D0   (0x000C)  
	FVector                                            ExternalForce;                                              // 0x00DC   (0x000C)  
	FVector                                            ComponentLinearAccScale;                                    // 0x00E8   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x00F4   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0100   (0x000C)  
	float                                              CachedBoundsScale;                                          // 0x010C   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x0110   (0x0010)  
	SDK_UNDEFINED(1,909) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                                // 0x0120   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x0121   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x0122   (0x0001)  
	bool                                               bEnableWorldGeometry : 1;                                   // 0x0123:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x0123:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x0123:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x0123:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x0123:4 (0x0001)  
	FSolverIterations                                  OverrideSolverIterations;                                   // 0x0124   (0x0018)  
	unsigned char                                      UnknownData00_6[0x444];                                     // 0x013C   (0x0444)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0090 (0x000010 - 0x0000A0)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              Pitch;                                                      // 0x0020   (0x0004)  
	float                                              Yaw;                                                        // 0x0024   (0x0004)  
	FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)  
	FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)  
	FRotator                                           MeshToComponent;                                            // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00C8   (0x0010)  
	FBoneReference                                     SourceBone;                                                 // 0x00D8   (0x0010)  
	float                                              Multiplier;                                                 // 0x00E8   (0x0004)  
	SDK_UNDEFINED(1,910) /* TEnumAsByte<EBoneAxis> */  __um(RotationAxisToRefer);                                  // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EE   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (0x0000E0 - 0x000188)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
	FPoseLink                                          BasePose;                                                   // 0x00E0   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x00F0   (0x0004)  
	float                                              Alpha;                                                      // 0x00F4   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x00F8   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0100   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0148   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0150   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0180   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0184   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0185   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0186   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0068 (0x000010 - 0x000078)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              DefaultChainLength;                                         // 0x0020   (0x0004)  
	FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0010)  
	FBoneReference                                     ChainEndBone;                                               // 0x0034   (0x0010)  
	FVector                                            TargetLocation;                                             // 0x0044   (0x000C)  
	float                                              Alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0061   (0x0017)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (0x000030 - 0x000048)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{ 
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0030   (0x0008)  
	float                                              ExplicitTime;                                               // 0x0038   (0x0004)  
	bool                                               bShouldLoop;                                                // 0x003C   (0x0001)  
	bool                                               bTeleportToExplicitTime;                                    // 0x003D   (0x0001)  
	SDK_UNDEFINED(1,911) /* TEnumAsByte<ESequenceEvalReinit> */ __um(ReinitializationBehavior);                    // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x003F   (0x0001)  MISSED
	float                                              StartPosition;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (0x000010 - 0x000048)
struct FAnimNode_Slot : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              SlotName;                                                   // 0x0020   (0x0008)  
	bool                                               bAlwaysUpdateSourcePose;                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0029   (0x001F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x0198 (0x0000C8 - 0x000260)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00C8   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00D8   (0x0010)  
	ESplineBoneAxis                                    BoneAxis;                                                   // 0x00E8   (0x0001)  
	bool                                               bAutoCalculateSpline;                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00EA   (0x0002)  MISSED
	int32_t                                            PointCount;                                                 // 0x00EC   (0x0004)  
	TArray<FTransform>                                 ControlPoints;                                              // 0x00F0   (0x0010)  
	float                                              Roll;                                                       // 0x0100   (0x0004)  
	float                                              TwistStart;                                                 // 0x0104   (0x0004)  
	float                                              TwistEnd;                                                   // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FAlphaBlend                                        TwistBlend;                                                 // 0x0110   (0x0030)  
	float                                              Stretch;                                                    // 0x0140   (0x0004)  
	float                                              Offset;                                                     // 0x0144   (0x0004)  
	unsigned char                                      UnknownData02_6[0x118];                                     // 0x0148   (0x0118)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSplineIKCachedBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SpringBone;                                                 // 0x00C8   (0x0010)  
	float                                              MaxDisplacement;                                            // 0x00D8   (0x0004)  
	float                                              SpringStiffness;                                            // 0x00DC   (0x0004)  
	float                                              SpringDamping;                                              // 0x00E0   (0x0004)  
	float                                              ErrorResetThresh;                                           // 0x00E4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x00E8   (0x003C)  MISSED
	bool                                               bLimitDisplacement : 1;                                     // 0x0124:0 (0x0001)  
	bool                                               bTranslateX : 1;                                            // 0x0124:1 (0x0001)  
	bool                                               bTranslateY : 1;                                            // 0x0124:2 (0x0001)  
	bool                                               bTranslateZ : 1;                                            // 0x0124:3 (0x0001)  
	bool                                               bRotateX : 1;                                               // 0x0124:4 (0x0001)  
	bool                                               bRotateY : 1;                                               // 0x0124:5 (0x0001)  
	bool                                               bRotateZ : 1;                                               // 0x0124:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0x000030 - 0x000030)
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotationLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x0198 (0x0000C8 - 0x000260)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x00C8   (0x0038)  MISSED
	FBoneReference                                     TrailBone;                                                  // 0x0100   (0x0010)  
	int32_t                                            ChainLength;                                                // 0x0110   (0x0004)  
	SDK_UNDEFINED(1,912) /* TEnumAsByte<EAxis> */      __um(ChainBoneAxis);                                        // 0x0114   (0x0001)  
	bool                                               bInvertChainBoneAxis : 1;                                   // 0x0115:0 (0x0001)  
	bool                                               bLimitStretch : 1;                                          // 0x0115:1 (0x0001)  
	bool                                               bLimitRotation : 1;                                         // 0x0115:2 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0115:3 (0x0001)  
	bool                                               bActorSpaceFakeVel : 1;                                     // 0x0115:4 (0x0001)  
	bool                                               bReorientParentToChild : 1;                                 // 0x0115:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x0116   (0x0002)  MISSED
	float                                              MaxDeltaTime;                                               // 0x0118   (0x0004)  
	float                                              RelaxationSpeedScale;                                       // 0x011C   (0x0004)  
	FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0120   (0x0088)  
	FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01A8   (0x0030)  
	TArray<FRotationLimit>                             RotationLimits;                                             // 0x01D8   (0x0010)  
	TArray<FVector>                                    RotationOffsets;                                            // 0x01E8   (0x0010)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x01F8   (0x0010)  
	float                                              StretchLimit;                                               // 0x0208   (0x0004)  
	FVector                                            FakeVelocity;                                               // 0x020C   (0x000C)  
	FBoneReference                                     BaseJoint;                                                  // 0x0218   (0x0010)  
	float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0228   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x022C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0020 (0x000000 - 0x000020)
struct FReferenceBoneFrame
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	FAxis                                              Axis;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0070 (0x0000C8 - 0x000138)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
	FReferenceBoneFrame                                BaseFrame;                                                  // 0x00C8   (0x0020)  
	FReferenceBoneFrame                                TwistFrame;                                                 // 0x00E8   (0x0020)  
	FAxis                                              TwistPlaneNormalAxis;                                       // 0x0108   (0x0010)  
	float                                              RangeMax;                                                   // 0x0118   (0x0004)  
	float                                              RemappedMin;                                                // 0x011C   (0x0004)  
	float                                              RemappedMax;                                                // 0x0120   (0x0004)  
	FAnimCurveParam                                    Curve;                                                      // 0x0124   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0130   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00C8   (0x0010)  
	float                                              StartStretchRatio;                                          // 0x00D8   (0x0004)  
	float                                              MaxStretchScale;                                            // 0x00DC   (0x0004)  
	FVector                                            EffectorLocation;                                           // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00F0   (0x0060)  
	FVector                                            JointTargetLocation;                                        // 0x0150   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FBoneSocketTarget                                  JointTarget;                                                // 0x0160   (0x0060)  
	FAxis                                              TwistAxis;                                                  // 0x01C0   (0x0010)  
	SDK_UNDEFINED(1,913) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorLocationSpace);                         // 0x01D0   (0x0001)  
	SDK_UNDEFINED(1,914) /* TEnumAsByte<EBoneControlSpace> */ __um(JointTargetLocationSpace);                      // 0x01D1   (0x0001)  
	bool                                               bAllowStretching : 1;                                       // 0x01D2:0 (0x0001)  
	bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x01D2:1 (0x0001)  
	bool                                               bMaintainEffectorRelRot : 1;                                // 0x01D2:2 (0x0001)  
	bool                                               bAllowTwist : 1;                                            // 0x01D2:3 (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x01D3   (0x000D)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0031:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0031:2 (0x0001)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x0034   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0090   (0x0030)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPositionHistory
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	float                                              Range;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRBFEntry
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (0x000010 - 0x0000A0)
struct FRBFTarget : FRBFEntry
{ 
	float                                              ScaleFactor;                                                // 0x0010   (0x0004)  
	bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

