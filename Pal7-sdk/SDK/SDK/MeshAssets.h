
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/MeshAssets/Environment/Ocean/Blueprints/OceanShoreInterface.OceanShoreInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UOceanShoreInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/MeshAssets/Environment/Ocean/Blueprints/OceanShoreInterface.OceanShoreInterface_C.IsOceanShore
	// void IsOceanShore(bool& bIsOceanShore);                                                                               // [0x15dd8c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/MeshAssets/Bulidings/PXC/SceneComponent/SM_SceneComp51_geo_bp.SM_SceneComp51_geo_bp_C
/// Size: 0x0010 (0x000220 - 0x000230)
class ASM_SceneComp51_geo_bp_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_SceneComp51_geo;                                         // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/MeshAssets/Bulidings/changbaishan/SM_CBS_houyuan_05_deng_01_bp.SM_CBS_houyuan_05_deng_01_bp_C
/// Size: 0x0010 (0x000220 - 0x000230)
class ASM_CBS_houyuan_05_deng_01_bp_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_CBS_houyuan_05_deng_01;                                  // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/MeshAssets/Bulidings/changbaishan/BP_Lantern.BP_Lantern_C
/// Size: 0x00B4 (0x000220 - 0x0002D4)
class ABP_Lantern_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UPointLightComponent*                        PointLight;                                                 // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0230   (0x0008)  
	class UStaticMesh*                                 Lantern;                                                    // 0x0238   (0x0008)  
	FVector                                            PiovtPosition;                                              // 0x0240   (0x000C)  
	float                                              Number;                                                     // 0x024C   (0x0004)  
	float                                              WindWeightOffset;                                           // 0x0250   (0x0004)  
	float                                              SwingStrengthGlobal;                                        // 0x0254   (0x0004)  
	FVector                                            EndPointtPosition;                                          // 0x0258   (0x000C)  
	float                                              SwingStrengthLantern;                                       // 0x0264   (0x0004)  
	float                                              ShowSegments;                                               // 0x0268   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x026C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    LanternDIM_01;                                              // 0x0270   (0x0008)  
	class UMaterialInterface*                          Material_01;                                                // 0x0278   (0x0008)  
	class UMaterialInterface*                          Material_02;                                                // 0x0280   (0x0008)  
	class UMaterialInstanceDynamic*                    LanternDIM_02;                                              // 0x0288   (0x0008)  
	bool                                               LightAffectWorld;                                           // 0x0290   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0291   (0x0003)  MISSED
	float                                              LightIntensity;                                             // 0x0294   (0x0004)  
	float                                              Light_Z;                                                    // 0x0298   (0x0004)  
	float                                              LightTemperature;                                           // 0x029C   (0x0004)  
	float                                              LightSourceRadius;                                          // 0x02A0   (0x0004)  
	float                                              LightSourceLength;                                          // 0x02A4   (0x0004)  
	class UStaticMeshComponent*                        FakeLightMesh;                                              // 0x02A8   (0x0008)  
	bool                                               AddFakeLight;                                               // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              LightRadia;                                                 // 0x02B4   (0x0004)  
	float                                              lightPower;                                                 // 0x02B8   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x02BC   (0x0010)  
	float                                              LightBrightness;                                            // 0x02CC   (0x0004)  
	float                                              MaxCullDistance;                                            // 0x02D0   (0x0004)  


	/// Functions
	// Function /Game/MeshAssets/Bulidings/changbaishan/BP_Lantern.BP_Lantern_C.CreatFakeLight
	// void CreatFakeLight();                                                                                                // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/changbaishan/BP_Lantern.BP_Lantern_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/changbaishan/BP_Lantern.BP_Lantern_C.RefreshLightState
	// void RefreshLightState();                                                                                             // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/changbaishan/BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
	// void ExecuteUbergraph_BP_Lantern(int32_t EntryPoint);                                                                 // [0x15dd8c0] Final                
};

/// Class /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C
/// Size: 0x0030 (0x000220 - 0x000250)
class AArchitecture_Cloth_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0228   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x0230   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
	FName                                              Sk_Sim_Name1;                                               // 0x0248   (0x0008)  


	/// Functions
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.Physics_Set_On
	// void Physics_Set_On();                                                                                                // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.Overlap_off
	// void Overlap_off();                                                                                                   // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.Overlap_on
	// void Overlap_on();                                                                                                    // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.cloth_Simulate
	// void cloth_Simulate(bool Condition);                                                                                  // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x15dd8c0] BlueprintEvent       
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x15dd8c0] HasOutParms|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/Architecture_Cloth_BP.Architecture_Cloth_BP_C.ExecuteUbergraph_Architecture_Cloth_BP
	// void ExecuteUbergraph_Architecture_Cloth_BP(int32_t EntryPoint);                                                      // [0x15dd8c0] Final|HasDefaults    
};

/// Class /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/SM_17minju_03_01_Cloth/SM_17minju_03_01_Cloth_BP.SM_17minju_03_01_Cloth_BP_C
/// Size: 0x0000 (0x000250 - 0x000250)
class ASM_17minju_03_01_Cloth_BP_C : public AArchitecture_Cloth_BP_C
{ 
public:
};

/// Class /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/SM_ClotheslineE/SM_ClotheslineE_BP.SM_ClotheslineE_BP_C
/// Size: 0x0010 (0x000250 - 0x000260)
class ASM_ClotheslineE_BP_C : public AArchitecture_Cloth_BP_C
{ 
public:
	FName                                              Sk_Sim_Name3;                                               // 0x0250   (0x0008)  
	FName                                              Sk_Sim_Name2;                                               // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/SM_ClotheslineE/SM_ClotheslineE_BP.SM_ClotheslineE_BP_C.Physics_Set_On
	// void Physics_Set_On();                                                                                                // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/SM_ClotheslineE/SM_ClotheslineE_BP.SM_ClotheslineE_BP_C.Overlap_on
	// void Overlap_on();                                                                                                    // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/MeshAssets/Bulidings/PXC/Architecture/BP_Architecture/Cloth/SM_ClotheslineE/SM_ClotheslineE_BP.SM_ClotheslineE_BP_C.Overlap_off
	// void Overlap_off();                                                                                                   // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/MeshAssets/Bulidings/lulongzhen/SM_LLZ_Matoudenglong_02_bp.SM_LLZ_Matoudenglong_02_bp_C
/// Size: 0x0010 (0x000220 - 0x000230)
class ASM_LLZ_Matoudenglong_02_bp_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_LLZ_Matoudenglong_02;                                    // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/MeshAssets/Demo/Amberify/Blueprints/BP_SplineActor.BP_SplineActor_C
/// Size: 0x0029 (0x000220 - 0x000249)
class ABP_SplineActor_C : public AActor
{ 
public:
	class UArrowComponent*                             Arrow;                                                      // 0x0220   (0x0008)  
	class USplineComponent*                            Spline;                                                     // 0x0228   (0x0008)  
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0230   (0x0008)  
	SDK_UNDEFINED(1,3000) /* TEnumAsByte<ESplineMeshAxis> */ __um(ForwardAxis);                                    // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	float                                              _0;                                                         // 0x023C   (0x0004)  
	class UMaterialInstance*                           Material;                                                   // 0x0240   (0x0008)  
	bool                                               Visibility;                                                 // 0x0248   (0x0001)  


	/// Functions
	// Function /Game/MeshAssets/Demo/Amberify/Blueprints/BP_SplineActor.BP_SplineActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/MeshAssets/food/BP_Food.BP_Food_C
/// Size: 0x0029 (0x000220 - 0x000249)
class ABP_Food_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        JiuBei;                                                     // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        jiuhu;                                                      // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        food_di;                                                    // 0x0230   (0x0008)  
	class UStaticMeshComponent*                        Food;                                                       // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
	SDK_UNDEFINED(1,3001) /* TEnumAsByte<FoodDishMaterial> */ __um(DishMaterial);                                  // 0x0248   (0x0001)  
};

/// Class /Game/MeshAssets/food/BP_Qingguo.BP_Qingguo_C
/// Size: 0x0000 (0x000249 - 0x000249)
class ABP_Qingguo_C : public ABP_Food_C
{ 
public:
};

/// Class /Game/MeshAssets/food/BP_Guichengbaizhanji.BP_Guichengbaizhanji_C
/// Size: 0x0000 (0x000249 - 0x000249)
class ABP_Guichengbaizhanji_C : public ABP_Food_C
{ 
public:
};

