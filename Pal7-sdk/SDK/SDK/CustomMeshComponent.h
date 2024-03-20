
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0010 (0x000430 - 0x000440)
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0430   (0x0010)  MISSED


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                  // [0xb96f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                      // [0xb96f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                  // [0xb96eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x000C)  
	FVector                                            Vertex1;                                                    // 0x000C   (0x000C)  
	FVector                                            Vertex2;                                                    // 0x0018   (0x000C)  
};

