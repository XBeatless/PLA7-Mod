
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000220 - 0x000228)
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0220   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0090 (0x000430 - 0x0004C0)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0430   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0431   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0432   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0438   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x0460   (0x0008)  
	FVector                                            EndLocation;                                                // 0x0468   (0x000C)  
	float                                              CableLength;                                                // 0x0474   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x0478   (0x0004)  
	float                                              SubstepTime;                                                // 0x047C   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x0480   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0484   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x0485   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0486   (0x0002)  MISSED
	float                                              CollisionFriction;                                          // 0x0488   (0x0004)  
	FVector                                            CableForce;                                                 // 0x048C   (0x000C)  
	float                                              CableGravityScale;                                          // 0x0498   (0x0004)  
	float                                              CableWidth;                                                 // 0x049C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04A0   (0x0004)  
	float                                              TileMaterial;                                               // 0x04A4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x04A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                     // [0xb95050] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                  // [0xb94f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                           // [0xb94ea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                        // [0xb94e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                     // [0xb94e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

