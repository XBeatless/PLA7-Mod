
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x03
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1,
	LSBM_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x05
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3,
	LSE_MAX                                                                          = 4
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x04
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3,
	Clear_MAX                                                                        = 4
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2,
	LGT_MAX                                                                          = 3
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x04
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2,
	EGrassScaling__EGrassScaling_MAX                                                 = 3
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x05
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX                       = 4
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX                                   = 2
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x04
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX                       = 3
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX       = 4
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX                   = 2
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x03
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1,
	LSMO_MAX                                                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x04
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2,
	LB_MAX                                                                           = 3
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x06
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4,
	LCCT_MAX                                                                         = 5
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x05
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3,
	TCMT_MAX                                                                         = 4
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x0220   (0x0008)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0340 (0x000220 - 0x000560)
class ALandscapeProxy : public AActor
{ 
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x0220   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0228   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x0238   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x0240   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x0244   (0x0004)  
	SDK_UNDEFINED(1,2981) /* TEnumAsByte<ELandscapeLODFalloff> */ __um(LODFalloff);                                // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x024C   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x0250   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x0254   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x0258   (0x0004)  
	float                                              TessellationComponentScreenSize;                            // 0x025C   (0x0004)  
	bool                                               UseTessellationComponentScreenSizeFalloff;                  // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              TessellationComponentScreenSizeFalloff;                     // 0x0264   (0x0004)  
	int32_t                                            OccluderGeometryLOD;                                        // 0x0268   (0x0004)  
	int32_t                                            StaticLightingLOD;                                          // 0x026C   (0x0004)  
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x0270   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x0278   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0280   (0x0008)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0288   (0x0020)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x02A8   (0x0008)  
	TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride;                                 // 0x02B0   (0x0010)  
	bool                                               bMeshHoles;                                                 // 0x02C0   (0x0001)  
	char                                               MeshHolesMaxLod;                                            // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x02C2   (0x0006)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x02C8   (0x0010)  
	int32_t                                            VirtualTextureNumLods;                                      // 0x02D8   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x02DC   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x02E4   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x02F0   (0x0010)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x0300   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x0310   (0x0010)  
	unsigned char                                      UnknownData07_5[0x64];                                      // 0x0320   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x0384   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x0388   (0x0004)  
	bool                                               bCastStaticShadow : 1;                                      // 0x038C:0 (0x0001)  
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x038C:1 (0x0001)  
	bool                                               bCastFarShadow : 1;                                         // 0x038C:2 (0x0001)  
	unsigned char                                      UnknownData09_3[0x3];                                       // 0x038D   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0390:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0391   (0x0001)  
	unsigned char                                      UnknownData10_5[0x2];                                       // 0x0392   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x0394:0 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0394:1 (0x0001)  
	unsigned char                                      UnknownData11_4[0x3];                                       // 0x0395   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0398   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x039C   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x03A0   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x03B8   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x03BC   (0x0004)  
	float                                              CollisionThickness;                                         // 0x03C0   (0x0004)  
	unsigned char                                      UnknownData12_5[0x4];                                       // 0x03C4   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x03C8   (0x0130)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x04F8:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x04F8:1 (0x0001)  
	unsigned char                                      UnknownData13_4[0x3];                                       // 0x04F9   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x04FC   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0500   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0504   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x0508:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x0508:1 (0x0001)  
	unsigned char                                      UnknownData14_4[0x3];                                       // 0x0509   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x050C   (0x0001)  
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                            // 0x050D   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x050E   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x050F   (0x0001)  
	SDK_UNDEFINED(80,2982) /* TMap<UTexture2D*, ULandscapeWeightmapUsage*> */ __um(WeightmapUsageMap);             // 0x0510   (0x0050)  


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor value);                               // [0x2394f60] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* value);                           // [0x2394ea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float value);                                      // [0x2394dd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                      // [0xee5140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer); // [0x2394a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                     // [0x23949b0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                 // [0x2394930] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                  // [0x23948b0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                              // [0x2394830] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                          // [0x23947b0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x000560 - 0x000560)
class ALandscape : public ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000220 - 0x000220)
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate();                                                                                        // [0xbf6f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x15dd8c0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize); // [0x15dd8c0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UTexture2D*>& OutStreamableAssets);                                        // [0x15dd8c0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x01F0 (0x000410 - 0x000600)
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x0408   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x040C   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0410   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0414   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0418   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0420   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x0428   (0x0008)  
	TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials;                                          // 0x0430   (0x0010)  
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0440   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x0450   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x0460   (0x0010)  
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;                // 0x0470   (0x0010)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x0480   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0488   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x0490   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x04A4   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x04B0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x04C0   (0x001C)  
	SDK_UNDEFINED(28,2983) /* TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent*> */ __um(CollisionComponent); // 0x04DC   (0x001C)  
	class UTexture2D*                                  HeightmapTexture;                                           // 0x04F8   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x0500   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x0510   (0x0010)  
	FGuid                                              MapBuildDataId;                                             // 0x0520   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0530   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x0540   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x0544   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x0548   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x054C   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x0550   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x0554   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x0558   (0x0004)  
	FGuid                                              StateId;                                                    // 0x055C   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x056C   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x057C   (0x0004)  MISSED
	class UTexture2D*                                  GIBakedBaseColorTexture;                                    // 0x0580   (0x0008)  
	char                                               MobileBlendableLayerMask;                                   // 0x0588   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x0590   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x0598   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x48];                                      // 0x05B8   (0x0048)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                          // [0x2392fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                         // [0x2392ec0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);          // [0x2392ec0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000220 - 0x000220)
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000220 - 0x000270)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0220   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000410 - 0x000410)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0008   (0x0004)  
	bool                                               bUseGrid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0010   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0014   (0x0004)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x0018   (0x0004)  
	int32_t                                            MinLOD;                                                     // 0x001C   (0x0004)  
	EGrassScaling                                      Scaling;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0024   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x002C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0034   (0x0008)  
	bool                                               RandomRotation;                                             // 0x003C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x003D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x003E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x003F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0040   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0041   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0042   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0040   (0x0008)  
	float                                              GrassDensity;                                               // 0x0048   (0x0004)  
	float                                              PlacementJitter;                                            // 0x004C   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0050   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x0054   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0058   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (0x000410 - 0x0004F0)
#pragma pack(push, 0x1)
class alignas(0x10) ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x0408   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0418   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x041C   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0420   (0x0004)  
	float                                              CollisionScale;                                             // 0x0424   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0428   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x042C   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0430   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0440   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0450   (0x001C)  
	SDK_UNDEFINED(28,2984) /* TLazyObjectPtr<ULandscapeComponent*> */ __um(RenderComponent);                       // 0x046C   (0x001C)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0488   (0x0010)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x0498   (0x0010)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x04A8   (0x0040)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                      // [0x2393030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01E8 (0x000028 - 0x000210)
class ULandscapeInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(28,2985) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x0028   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x0044   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0054   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0058   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x005C   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData01_5[0xA4];                                      // 0x006C   (0x00A4)  MISSED
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData02_6[0xF0];                                      // 0x0120   (0x00F0)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000410 - 0x000428)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x0410   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x0420:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x0420:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x0420:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x0420:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0421   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0010 (0x0004F0 - 0x000500)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x04F8   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000220 - 0x000228)
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x0220   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0020 (0x0004A0 - 0x0004C0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x0498   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x04A8   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04B9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000410 - 0x000440)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x0408   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0418   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x0428   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                              // [0x2394d50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Left;                                                       // 0x000C   (0x000C)  
	FVector                                            Right;                                                      // 0x0018   (0x000C)  
	FVector                                            FalloffLeft;                                                // 0x0024   (0x000C)  
	FVector                                            FalloffRight;                                               // 0x0030   (0x000C)  
	FVector                                            LayerLeft;                                                  // 0x003C   (0x000C)  
	FVector                                            LayerRight;                                                 // 0x0048   (0x000C)  
	FVector                                            LayerFalloffLeft;                                           // 0x0054   (0x000C)  
	FVector                                            LayerFalloffRight;                                          // 0x0060   (0x000C)  
	float                                              StartEndFalloff;                                            // 0x006C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0034   (0x000C)  
	float                                              Width;                                                      // 0x0040   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0044   (0x0004)  
	float                                              SideFalloff;                                                // 0x0048   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x004C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0050   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0054   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0058   (0x0004)  
	float                                              EndFalloff;                                                 // 0x005C   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0060   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00A0   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (0x000028 - 0x0000B0)
class ULandscapeSplineSegment : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FLandscapeSplineSegmentConnection                  Connections;                                                // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (0x000560 - 0x000580)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	SDK_UNDEFINED(28,2986) /* TLazyObjectPtr<ALandscape*> */ __um(LandscapeActor);                                 // 0x0560   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x057C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class ULandscapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class ULandscapeComponent*                         ChannelUsage;                                               // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0048 (0x000000 - 0x000048)
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,2987) /* TEnumAsByte<ELandscapeLayerBlendType> */ __um(BlendType);                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x000C   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FExpressionInput                                   HeightInput;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x002C   (0x0008)  MISSED
	float                                              PreviewWeight;                                              // 0x0034   (0x0004)  
	FVector                                            ConstLayerInput;                                            // 0x0038   (0x000C)  
	float                                              ConstHeightInput;                                           // 0x0044   (0x0004)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x0040   (0x0010)  
	FGuid                                              ExpressionGUID;                                             // 0x0050   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x000040 - 0x000058)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	SDK_UNDEFINED(1,2988) /* TEnumAsByte<ETerrainCoordMappingType> */ __um(MappingType);                           // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,2989) /* TEnumAsByte<ELandscapeCustomizedCoordType> */ __um(CustomUVType);                     // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x0044   (0x0004)  
	float                                              MappingRotation;                                            // 0x0048   (0x0004)  
	float                                              MappingPanU;                                                // 0x004C   (0x0004)  
	float                                              MappingPanV;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x0040   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0048   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x004C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0048 (0x000040 - 0x000088)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   LayerNotUsed;                                               // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	bool                                               PreviewUsed : 1;                                            // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0050 (0x000040 - 0x000090)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   Layer;                                                      // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0070   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0074   (0x000C)  
	FGuid                                              ExpressionGUID;                                             // 0x0080   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,2990) /* TEnumAsByte<ELandscapeBlendMode> */ __um(BlendMode);                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,2991) /* TMap<ULandscapeLayerInfoObject*, bool> */ __um(WeightmapLayerAllocationBlend);       // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x001C   (0x0008)  
	bool                                               bScaleToWidth : 1;                                          // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0028   (0x000C)  
	SDK_UNDEFINED(1,2992) /* TEnumAsByte<LandscapeSplineMeshOrientation> */ __um(Orientation);                     // 0x0034   (0x0001)  
	SDK_UNDEFINED(1,2993) /* TEnumAsByte<ESplineMeshAxis> */ __um(ForwardAxis);                                    // 0x0035   (0x0001)  
	SDK_UNDEFINED(1,2994) /* TEnumAsByte<ESplineMeshAxis> */ __um(UpAxis);                                         // 0x0036   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0037   (0x0001)  MISSED
};

