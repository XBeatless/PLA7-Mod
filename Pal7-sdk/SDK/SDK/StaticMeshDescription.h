
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: MeshDescription

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0000 (0x000390 - 0x000390)
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                          // [0x26878e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                // [0x2687800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                   // [0x2687730] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x2687400] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FUVMapSettings
{ 
	FVector                                            Size;                                                       // 0x0000   (0x000C)  
	FVector2D                                          UVTile;                                                     // 0x000C   (0x0008)  
	FVector                                            Position;                                                   // 0x0014   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x000C)  
	FVector                                            Scale;                                                      // 0x002C   (0x000C)  
};

