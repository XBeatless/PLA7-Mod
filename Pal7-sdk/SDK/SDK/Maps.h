
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Pal7
/// dependency: PreViewContent

/// Class /Game/Maps/Level_001/XUAN/LEV_001_Xuan_Light_LevelInstance.LEV_001_Xuan_Light_C
/// Size: 0x0010 (0x000228 - 0x000238)
class ALEV_001_Xuan_Light_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	class ASkyLight*                                   SkyLight_1_ExecuteUbergraph_LEV_001_Xuan_Light_RefProperty; // 0x0230   (0x0008)  


	/// Functions
	// Function /Game/Maps/Level_001/XUAN/LEV_001_Xuan_Light_LevelInstance.LEV_001_Xuan_Light_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Level_001/XUAN/LEV_001_Xuan_Light_LevelInstance.LEV_001_Xuan_Light_C.ExecuteUbergraph_LEV_001_Xuan_Light
	// void ExecuteUbergraph_LEV_001_Xuan_Light(int32_t EntryPoint);                                                         // [0x15dd8c0] Final                
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Env_LevelInstance.LEV_001_PingXiCun_Env_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Env_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Fence_LevelInstance.LEV_001_PingXiCun_Fence_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Fence_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/XG/LEV_001_XiaGu_Env_LevelInstance.LEV_001_XiaGu_Env_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_XiaGu_Env_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Rocks_LevelInstance.LEV_001_PingXiCun_Rocks_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Rocks_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/Collison/LEV_001_Map_penzhaung_LevelInstance.LEV_001_Map_penzhaung_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_Map_penzhaung_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/LEV_001_Map_001_LevelInstance.LEV_001_Map_001_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_Map_001_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Effects_LevelInstance.LEV_001_PingXiCun_Effects_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Effects_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Features/QueueCamera.QueueCamera_C
/// Size: 0x0010 (0x0008C0 - 0x0008D0)
class AQueueCamera_C : public ACameraActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x08C0   (0x0008)  
	bool                                               bIsMain;                                                    // 0x08C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x08C9   (0x0003)  MISSED
	float                                              OriginFOV;                                                  // 0x08CC   (0x0004)  


	/// Functions
	// Function /Game/Maps/Features/QueueCamera.QueueCamera_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Features/QueueCamera.QueueCamera_C.K2_OnBecomeViewTarget
	// void K2_OnBecomeViewTarget(class APlayerController* PC);                                                              // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Features/QueueCamera.QueueCamera_C.ExecuteUbergraph_QueueCamera
	// void ExecuteUbergraph_QueueCamera(int32_t EntryPoint);                                                                // [0x15dd8c0] Final                
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_Map_001_pingxicun_Effects_LevelInstance.LEV_001_Map_001_pingxicun_Effects_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_Map_001_pingxicun_Effects_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C
/// Size: 0x01A8 (0x000228 - 0x0003D0)
class AQueueLevel1_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	FName                                              SelectedHero;                                               // 0x0230   (0x0008)  
	class ACameraActor*                                TargetCamera;                                               // 0x0238   (0x0008)  
	class USkeletalMeshComponent*                      TargetMesh;                                                 // 0x0240   (0x0008)  
	EPaladinHeroName                                   CurrentHeroName;                                            // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0249   (0x0007)  MISSED
	SDK_UNDEFINED(80,2995) /* TMap<FName, ABP_ModelBase_C*> */ __um(Pet_Models);                                   // 0x0250   (0x0050)  
	SDK_UNDEFINED(80,2996) /* TMap<FName, AQueueCamera_C*> */ __um(Pet_Cameras);                                   // 0x02A0   (0x0050)  
	SDK_UNDEFINED(80,2997) /* TMap<FName, AQueueCamera_C*> */ __um(HeroCamera);                                    // 0x02F0   (0x0050)  
	SDK_UNDEFINED(80,2998) /* TMap<FName, ABP_PaladinHeroForShow_C*> */ __um(HeroActor);                           // 0x0340   (0x0050)  
	TArray<FName>                                      TemPetName;                                                 // 0x0390   (0x0010)  
	class A3DModelForEquipment_C*                      HeroEquip;                                                  // 0x03A0   (0x0008)  
	class AQueueCamera_C*                              BP_Camera_Main_Pet_ExecuteUbergraph_QueueLevel1_RefProperty; // 0x03A8   (0x0008)  
	class ASkyLight*                                   SkyLight_3_ExecuteUbergraph_QueueLevel1_RefProperty;        // 0x03B0   (0x0008)  
	class AQueueCamera_C*                              Camera_Heros_Main_3_ExecuteUbergraph_QueueLevel1_RefProperty; // 0x03B8   (0x0008)  
	class AQueueCamera_C*                              Camera_Heros_Main_3_EdGraph_0_RefProperty;                  // 0x03C0   (0x0008)  
	class AQueueCamera_C*                              Camera_Heros_Main_3_EdGraph_1_RefProperty;                  // 0x03C8   (0x0008)  


	/// Functions
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.Clear
	// void Clear();                                                                                                         // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.CreateHeroEquip
	// void CreateHeroEquip(EPaladinHeroName HeroType, bool& IsFirstSpawn);                                                  // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.FindOrAddPetCamera
	// void FindOrAddPetCamera(FName PetName, class AQueueCamera_C*& Camera, class ABP_ModelBase_C*& PetModle);              // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.FindOrAddHeroCamera
	// void FindOrAddHeroCamera(FName HeroName, class AQueueCamera_C*& Camera);                                              // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.SetPetShow
	// void SetPetShow(class AActor* PetModel, bool bIsVisible);                                                             // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.EndShow
	// void EndShow();                                                                                                       // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.StartShow
	// void StartShow();                                                                                                     // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.OnHeroShowStateChanged_Event
	// void OnHeroShowStateChanged_Event(FName State);                                                                       // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.RefreshHeros
	// void RefreshHeros(FName HeroName);                                                                                    // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.O
	// void O(FName State);                                                                                                  // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.Interaction
	// void Interaction();                                                                                                   // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.StartPetShow
	// void StartPetShow();                                                                                                  // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.EndPetShow
	// void EndPetShow();                                                                                                    // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.OnAddedPet_Event
	// void OnAddedPet_Event(FName NewPet);                                                                                  // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.O
	// void O(FName PetName, bool bIsTouch);                                                                                 // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.LoadModelEquipOrEquipChange
	// void LoadModelEquipOrEquipChange(EPaladinHeroName HeroName, TWeakObjectPtr<UClass*> AnimBlueprint, bool bShowBattle); // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Features/QueueLevel1_LevelInstance.QueueLevel1_C.ExecuteUbergraph_QueueLevel1
	// void ExecuteUbergraph_QueueLevel1(int32_t EntryPoint);                                                                // [0x15dd8c0] Final|HasDefaults    
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Detail_LevelInstance.LEV_001_PingXiCun_Detail_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Detail_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Level_001/PXC/LEV_001_PingXiCun_Foliage_LevelInstance.LEV_001_PingXiCun_Foliage_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ALEV_001_PingXiCun_Foliage_C : public ALevelScriptActor
{ 
public:
};

