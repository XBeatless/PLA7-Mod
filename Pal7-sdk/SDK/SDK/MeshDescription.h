
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX                                     = 5
};

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0368 (0x000028 - 0x000390)
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x390];                                     // 0x0000   (0x0390)  MISSED


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	// void SetVertexPosition(FVertexID VertexID, FVector& Position);                                                        // [0x267ee70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	// void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID);      // [0x267ed60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                    // [0x267eca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                      // [0x267ec20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                 // [0x267eba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                   // [0x267e9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                               // [0x267eb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                 // [0x267eaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                       // [0x267ea20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                       // [0x267e9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	// bool IsVertexValid(FVertexID VertexID);                                                                               // [0x267e910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                            // [0x267e880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                       // [0x267e7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                         // [0x267e760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                    // [0x267e6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                            // [0x267e640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                             // [0x267e5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	// bool IsEmpty();                                                                                                       // [0x267e580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                     // [0x267e4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                   // [0x267e420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                  // [0x267e390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x267e2a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	// FVector GetVertexPosition(FVertexID VertexID);                                                                        // [0x267e200] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                  // [0x267e130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                // [0x267e090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);          // [0x267dfc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                     // [0x267def0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                        // [0x267de20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x267dd30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x267dc40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                   // [0x267db50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                      // [0x267da60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x267d970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                          // [0x267d880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                    // [0x267d790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);             // [0x267d6a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                   // [0x267d5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                      // [0x267d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                // [0x267d490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x267d3a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                       // [0x267d2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                       // [0x267d1c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x267d0d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                  // [0x267cfe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                         // [0x267cf40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                     // [0x267ce50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                      // [0x267cd60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                      // [0x267cc70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                             // [0x267cb80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                              // [0x267caf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                   // [0x267ca60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                    // [0x267c9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                           // [0x267c940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                            // [0x267c8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                               // [0x267c820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                  // [0x267c790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                 // [0x267c700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                             // [0x267c670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                   // [0x267c5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                 // [0x267c550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                  // [0x267c4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                // [0x267c3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                        // [0x267c300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                         // [0x267c210] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                            // [0x267c120] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	// void Empty();                                                                                                         // [0x267c100] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                   // [0x267c010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	// void DeleteVertex(FVertexID VertexID);                                                                                // [0x267bf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x267bdd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                              // [0x267bd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x267bb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                 // [0x267baa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// void CreateVertexWithID(FVertexID VertexID);                                                                          // [0x267ba20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                              // [0x267b960] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                           // [0x267b8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	// FVertexID CreateVertex();                                                                                             // [0x267b880] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x267b6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x267b570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x267b3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                        // [0x267b350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// FPolygonGroupID CreatePolygonGroup();                                                                                 // [0x267b310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x267b1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                      // [0x267b090] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                         // [0x267afc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                               // [0x267af40] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FTriangleID : FElementID
{ 
};

