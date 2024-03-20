
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                            // [0xe32f70] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                           // [0xe32f90] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                           // [0xe45730] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                       // [0x21170c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                        // [0x2117090] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                              // [0x2116f90] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                     // [0x2116e80] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x0001F0 - 0x000260)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,928) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                               // 0x01F0   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0200   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0201   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0202   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0203   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0208   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0218   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0228   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0240   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0248   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                           // [0x2116fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x2116f10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0070 (0x000410 - 0x000480)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0408   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0410   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0418   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0419   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x041A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x041B   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0420   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0428   (0x0010)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0438   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0440   (0x0040)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                   // [0x2117050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                            // [0x2117030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                         // [0x2116e50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

