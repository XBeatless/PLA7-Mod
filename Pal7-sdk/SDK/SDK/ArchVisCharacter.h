
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0060 (0x0004C0 - 0x000520)
class AArchVisCharacter : public ACharacter
{ 
public:
	SDK_UNDEFINED(16,918) /* FString */                __um(LookUpAxisName);                                       // 0x04B8   (0x0010)  
	SDK_UNDEFINED(16,919) /* FString */                __um(LookUpAtRateAxisName);                                 // 0x04C8   (0x0010)  
	SDK_UNDEFINED(16,920) /* FString */                __um(TurnAxisName);                                         // 0x04D8   (0x0010)  
	SDK_UNDEFINED(16,921) /* FString */                __um(TurnAtRateAxisName);                                   // 0x04E8   (0x0010)  
	SDK_UNDEFINED(16,922) /* FString */                __um(MoveForwardAxisName);                                  // 0x04F8   (0x0010)  
	SDK_UNDEFINED(16,923) /* FString */                __um(MoveRightAxisName);                                    // 0x0508   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0518   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x051C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0050 (0x000610 - 0x000660)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0610   (0x000C)  
	FRotator                                           RotationalDeceleration;                                     // 0x061C   (0x000C)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0628   (0x000C)  
	float                                              MinPitch;                                                   // 0x0634   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0638   (0x0004)  
	float                                              WalkingFriction;                                            // 0x063C   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0640   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0644   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0648   (0x0018)  MISSED
};

