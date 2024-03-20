
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: Blueprint
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: Pal7
/// dependency: PreViewContent

/// Enum /Game/Sequence/SeqPlayer/Weapons/Enum/Enum_SQ_WeaponType.Enum_SQ_WeaponType
/// Size: 0x04
enum class Enum_SQ_WeaponType : uint8_t
{
	Enum_SQ_WeaponType__NewEnumerator0                                               = 0,
	Enum_SQ_WeaponType__NewEnumerator1                                               = 1,
	Enum_SQ_WeaponType__NewEnumerator2                                               = 2,
	Enum_SQ_WeaponType__Enum_SQ_MAX                                                  = 3
};

/// Class /Game/Sequence/SeqPlayer/IBP_DynamicController.IBP_DynamicController_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UIBP_DynamicController_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Sequence/SeqPlayer/IBP_DynamicController.IBP_DynamicController_C.set_Nv1_Weight
	// void set_Nv1_Weight(float NewParam, float NewParam1, float NewParam2, float NewParam3, float NewParam4, float NewParam5); // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/IBP_DynamicController.IBP_DynamicController_C.set_Nan1_Weight
	// void set_Nan1_Weight(float Param1, float Param2, float Param3, float Param4);                                         // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/Sequence/SeqPlayer/Global/STC_SeqMeshContainer.STC_SeqMeshContainer
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSTC_SeqMeshContainer
{ 
	class USkeletalMesh*                               Mesh_Main_20_77FC09A548CCCCA361D5049AEFE90398;              // 0x0000   (0x0008)  
	class USkeletalMesh*                               Face_14_BBDFD51B41F7336AE0F709A0AF94091A;                   // 0x0008   (0x0008)  
	class UClass*                                      AnimInstance_19_A96ADC3E48AB162D79E3A4AC7EBEDCD3;           // 0x0010   (0x0008)  
	TArray<class USkeletalMesh*>                       Meshes_24_02CF9AE747914400F96C789179274CB1;                 // 0x0018   (0x0010)  
};

/// Class /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C
/// Size: 0x01C8 (0x0004C0 - 0x000688)
class ABP_BaseSequenceRole_C : public APaladinSequenceCharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UPaladinIkComponent*                         PaladinIk;                                                  // 0x04C8   (0x0008)  
	class UPaladinSequenceDataComponent*               PaladinSequenceData;                                        // 0x04D0   (0x0008)  
	float                                              ____0_cloth_size_1259451A4C2FCE736DE887B82191C185;          // 0x04D8   (0x0004)  
	SDK_UNDEFINED(1,2883) /* TEnumAsByte<ETimelineDirection> */ __um(____0__Direction_1259451A4C2FCE736DE887B82191C185); // 0x04DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04DD   (0x0003)  MISSED
	class UTimelineComponent*                          _e_;                                                        // 0x04E0   (0x0008)  
	class UMaterialInstanceDynamic*                    DMIEye;                                                     // 0x04E8   (0x0008)  
	float                                              EyeSpecularPos_X;                                           // 0x04F0   (0x0004)  
	float                                              EyeSpecularPos_Y;                                           // 0x04F4   (0x0004)  
	float                                              FollowCameraArea;                                           // 0x04F8   (0x0004)  
	float                                              FakeSpecularSize;                                           // 0x04FC   (0x0004)  
	float                                              FakeSpecularHardness;                                       // 0x0500   (0x0004)  
	float                                              FakeSpecularIntensity;                                      // 0x0504   (0x0004)  
	int32_t                                            EyeshaderSlot;                                              // 0x0508   (0x0004)  
	bool                                               EnableEyesSpecluarAnimation;                                // 0x050C   (0x0001)  
	bool                                               IsUseIK;                                                    // 0x050D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x050E   (0x0002)  MISSED
	FSTC_SeqMeshContainer                              DefaultMeshContainer;                                       // 0x0510   (0x0028)  
	SDK_UNDEFINED(16,2884) /* FString */               __um(CurrentMeshKey);                                       // 0x0538   (0x0010)  
	SDK_UNDEFINED(80,2885) /* TMap<FString, FSTC_SeqMeshContainer> */ __um(CustomMeshContainerMap);                // 0x0548   (0x0050)  
	SDK_UNDEFINED(16,2886) /* FString */               __um(DefaultMeshKey);                                       // 0x0598   (0x0010)  
	class AActor*                                      LookAtTarget;                                               // 0x05A8   (0x0008)  
	bool                                               bLookAtActive;                                              // 0x05B0   (0x0001)  
	bool                                               bNeedChangePlayerMSK;                                       // 0x05B1   (0x0001)  
	bool                                               LookAtOffsetEffect;                                         // 0x05B2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x05B3   (0x0001)  MISSED
	FVector                                            LookAtOffset_Head;                                          // 0x05B4   (0x000C)  
	FVector                                            LookAtOffset_Neck;                                          // 0x05C0   (0x000C)  
	FVector                                            LookAtOffset_Spine2;                                        // 0x05CC   (0x000C)  
	FVector                                            LookAtOffset_Spine1;                                        // 0x05D8   (0x000C)  
	bool                                               bMergeMesh;                                                 // 0x05E4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x05E5   (0x0003)  MISSED
	TArray<class USkeletalMesh*>                       MergeMeshList;                                              // 0x05E8   (0x0010)  
	TArray<FSkeletalMaterial>                          MergeOverrideMaterials;                                     // 0x05F8   (0x0010)  
	bool                                               bSetMasterPose;                                             // 0x0608   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0609   (0x0003)  MISSED
	float                                              alert;                                                      // 0x060C   (0x0004)  
	float                                              Eyes_Look_Up;                                               // 0x0610   (0x0004)  
	float                                              Eyes_Look_Dwn;                                              // 0x0614   (0x0004)  
	float                                              Eyes_Look_L;                                                // 0x0618   (0x0004)  
	float                                              Eyes_Look_R;                                                // 0x061C   (0x0004)  
	float                                              Eyes_Blink;                                                 // 0x0620   (0x0004)  
	float                                              Eyes_Wide;                                                  // 0x0624   (0x0004)  
	float                                              Brows_Up;                                                   // 0x0628   (0x0004)  
	float                                              Brows_Dwn;                                                  // 0x062C   (0x0004)  
	float                                              Happy;                                                      // 0x0630   (0x0004)  
	float                                              Unhappy;                                                    // 0x0634   (0x0004)  
	float                                              Angry;                                                      // 0x0638   (0x0004)  
	float                                              Shocked;                                                    // 0x063C   (0x0004)  
	float                                              Sad;                                                        // 0x0640   (0x0004)  
	float                                              Pain;                                                       // 0x0644   (0x0004)  
	float                                              Shy;                                                        // 0x0648   (0x0004)  
	float                                              Bad_Smile;                                                  // 0x064C   (0x0004)  
	float                                              Arrogant;                                                   // 0x0650   (0x0004)  
	float                                              Cowardiness;                                                // 0x0654   (0x0004)  
	float                                              Guilty;                                                     // 0x0658   (0x0004)  
	float                                              Thinking;                                                   // 0x065C   (0x0004)  
	float                                              Serious;                                                    // 0x0660   (0x0004)  
	float                                              Laugh;                                                      // 0x0664   (0x0004)  
	float                                              Strong;                                                     // 0x0668   (0x0004)  
	float                                              Sympathy;                                                   // 0x066C   (0x0004)  
	float                                              Panic;                                                      // 0x0670   (0x0004)  
	float                                              Worries;                                                    // 0x0674   (0x0004)  
	float                                              Disappointed;                                               // 0x0678   (0x0004)  
	float                                              doubt;                                                      // 0x067C   (0x0004)  
	float                                              Look_L;                                                     // 0x0680   (0x0004)  
	float                                              Look_R;                                                     // 0x0684   (0x0004)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.GetLookAtOffsetInfo
	// void GetLookAtOffsetInfo(FSTC_SQ_LookAtConfig& LookAtInfo);                                                           // [0x15dd8c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.GetLookAtLocation
	// void GetLookAtLocation(bool& IsFocusing, FVector& Location);                                                          // [0x15dd8c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.Expression
	// void Expression();                                                                                                    // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.Function_SET_cloth1
	// void Function_SET_cloth1();                                                                                           // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.Function_SET_Cloth0
	// void Function_SET_Cloth0();                                                                                           // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.SetMasterPoseFunc
	// void SetMasterPoseFunc();                                                                                             // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.Function_Cloth_1-0
	// void Function_Cloth_1-0();                                                                                            // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.MergeRoleMesh
	// void MergeRoleMesh();                                                                                                 // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.ChangeMSK
	// void ChangeMSK(EPaladinHeroName HeroName, class USkeletalMeshComponent* Mesh);                                        // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.SwitchMeshWithContainer
	// void SwitchMeshWithContainer(FSTC_SeqMeshContainer& STC_SeqMeshContainer);                                            // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.UseDefualtMesh
	// void UseDefualtMesh();                                                                                                // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.BindMesh
	// void BindMesh();                                                                                                      // [0x15dd8c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.ˆeÙïtè_
	// void ˆeÙïtè_();                                                                                                       // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.ˆeÙïtè_
	// void ˆeÙïtè_();                                                                                                       // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.SwitchMesh
	// void SwitchMesh(FString NewMesh);                                                                                     // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.Cloth_0-1_Event
	// void Cloth_0-1_Event();                                                                                               // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/BP_BaseSequenceRole.BP_BaseSequenceRole_C.ExecuteUbergraph_BP_BaseSequenceRole
	// void ExecuteUbergraph_BP_BaseSequenceRole(int32_t EntryPoint);                                                        // [0x15dd8c0] Final|HasDefaults    
};

/// Class /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C
/// Size: 0x0035 (0x000688 - 0x0006BD)
class ABP_YueYunYao_SQ_C : public ABP_BaseSequenceRole_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0688   (0x0008)  
	class UBP_TrailComponent_C*                        BP_Trail_RFoot;                                             // 0x0690   (0x0008)  
	class UBP_TrailComponent_C*                        BP_Trail_LFoot;                                             // 0x0698   (0x0008)  
	float                                              SkirtWeight;                                                // 0x06A0   (0x0004)  
	float                                              DefaultWeight;                                              // 0x06A4   (0x0004)  
	float                                              HeadwearWeight;                                             // 0x06A8   (0x0004)  
	float                                              HairWeight;                                                 // 0x06AC   (0x0004)  
	float                                              cuffWeight;                                                 // 0x06B0   (0x0004)  
	float                                              BangWeight;                                                 // 0x06B4   (0x0004)  
	float                                              ClothWeight;                                                // 0x06B8   (0x0004)  
	bool                                               SwitchOptimizeSkinMaterials;                                // 0x06BC   (0x0001)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.Function_Set_Cloth_Mesh
	// void Function_Set_Cloth_Mesh();                                                                                       // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.Function_Set_AN_Mesh
	// void Function_Set_AN_Mesh();                                                                                          // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.set_Nan1_Weight
	// void set_Nan1_Weight(float Param1, float Param2, float Param3, float Param4);                                         // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.set_Nv1_Weight
	// void set_Nv1_Weight(float NewParam, float NewParam1, float NewParam2, float NewParam3, float NewParam4, float NewParam5); // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.DynamicAnimation
	// void DynamicAnimation();                                                                                              // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.Event_Set_AN_Mesh
	// void Event_Set_AN_Mesh();                                                                                             // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.Event_Set_Cloth_Mesh
	// void Event_Set_Cloth_Mesh();                                                                                          // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.SwitchSkinMaterials
	// void SwitchSkinMaterials();                                                                                           // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Blueprints/BP_YueYunYao_SQ.BP_YueYunYao_SQ_C.ExecuteUbergraph_BP_YueYunYao_SQ
	// void ExecuteUbergraph_BP_YueYunYao_SQ(int32_t EntryPoint);                                                            // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/MapCG/Flay_up.SequenceDirector_C
/// Size: 0x0010 (0x000030 - 0x000040)
class USequenceDirector_C : public ULevelSequenceDirector
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  
	FTimerHandle                                       LevelReadyCheck;                                            // 0x0038   (0x0008)  


	/// Functions
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class ABP_YueYunYao_SQ_C* BP_Yue_Yun_Yao_SQ);                          // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class AFlay_Actor_C* Flay_Actor_new);                                  // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class AFlay_Actor_C* Target);                                          // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.SequenceEvent
	// void SequenceEvent(class AFlay_Actor_C* Target);                                                                      // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.SequenceEvent
	// void SequenceEvent();                                                                                                 // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.MakeSureLevelLoadingDone
	// void MakeSureLevelLoadingDone(class AFlay_Actor_C* Flay_Actor_new);                                                   // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.CustomEvent
	// void CustomEvent();                                                                                                   // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.BP_Yue_Yun_Yao_SQ_Event
	// void BP_Yue_Yun_Yao_SQ_Event(class ABP_YueYunYao_SQ_C* BP_Yue_Yun_Yao_SQ);                                            // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_up.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	// void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);                                                           // [0x15dd8c0] Final|HasDefaults    
};

/// Class /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_Base.BP_SQWeapon_Base_C
/// Size: 0x000B (0x0004C0 - 0x0004CB)
class ABP_SQWeapon_Base_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	bool                                               bNeedChangeMSK;                                             // 0x04C8   (0x0001)  
	EPaladinHeroName                                   HeroName;                                                   // 0x04C9   (0x0001)  
	SDK_UNDEFINED(1,2887) /* TEnumAsByte<Enum_SQ_WeaponType> */ __um(WeaponType);                                  // 0x04CA   (0x0001)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_Base.BP_SQWeapon_Base_C.ChangeWeaponMesh
	// void ChangeWeaponMesh();                                                                                              // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_Base.BP_SQWeapon_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_Base.BP_SQWeapon_Base_C.ExecuteUbergraph_BP_SQWeapon_Base
	// void ExecuteUbergraph_BP_SQWeapon_Base(int32_t EntryPoint);                                                           // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_WeaponCover_Nv1.BP_SQWeapon_WeaponCover_Nv1_C
/// Size: 0x0000 (0x0004CB - 0x0004CB)
class ABP_SQWeapon_WeaponCover_Nv1_C : public ABP_SQWeapon_Base_C
{ 
public:
};

/// Class /Game/Sequence/SeqPlayer/Characters/PlayerBase/SequencePlayerBase.SequencePlayerBase_C
/// Size: 0x0008 (0x000998 - 0x0009A0)
class ASequencePlayerBase_C : public ABaseNPC_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0998   (0x0008)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Characters/PlayerBase/SequencePlayerBase.SequencePlayerBase_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/PlayerBase/SequencePlayerBase.SequencePlayerBase_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/PlayerBase/SequencePlayerBase.SequencePlayerBase_C.ExecuteUbergraph_SequencePlayerBase
	// void ExecuteUbergraph_SequencePlayerBase(int32_t EntryPoint);                                                         // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/SeqPlayer/Characters/MingShuMen/QiaoLingAdult_CGPlayer.QiaoLingAdult_CGPlayer_C
/// Size: 0x0000 (0x0009A0 - 0x0009A0)
class AQiaoLingAdult_CGPlayer_C : public ASequencePlayerBase_C
{ 
public:
};

/// Struct /Game/Sequence/SeqPlayer/Global/STC_SQ_LookAtConfig.STC_SQ_LookAtConfig
/// Size: 0x0034 (0x000000 - 0x000034)
struct FSTC_SQ_LookAtConfig
{ 
	bool                                               bEnableLookAt_16_02E61E9245C934567CF3CBB590BC2ADF;          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            LookAtOffset_Head_24_82B2901B47F2DFCBDAA7ED82B37B7C38;      // 0x0004   (0x000C)  
	FVector                                            LookAtOffset_Neck_26_B48EF55C4BDDD7D4230207B101C9E9E9;      // 0x0010   (0x000C)  
	FVector                                            LookAtOffset_Spine2_28_EEE84FFB493624AF1283A4B4AB713386;    // 0x001C   (0x000C)  
	FVector                                            LookAtOffset_Spine1_30_B755ECE24F439171646AA8AE404D898E;    // 0x0028   (0x000C)  
};

/// Class /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C
/// Size: 0x13D4 (0x000270 - 0x001644)
class UABP_YueYunYao_SQ_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0268   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0270   (0x0008)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0278   (0x00B8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0330   (0x00C0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x03F0   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose0;                              // 0x0438   (0x00B8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04F0   (0x0078)  
	FAnimNode_Slot                                     AnimGraphNode_Slot1;                                        // 0x0568   (0x0048)  
	FAnimNode_Slot                                     AnimGraphNode_Slot2;                                        // 0x05B0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x05F8   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose3;                              // 0x0698   (0x00B8)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x0750   (0x0188)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace4;                    // 0x08D8   (0x0188)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend5;                            // 0x0A60   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0B20   (0x0028)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend6;                            // 0x0B48   (0x00C0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0C08   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0C28   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0C48   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone7;                                  // 0x0D50   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone8;                                  // 0x0E58   (0x0108)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone9;                                  // 0x0F60   (0x0108)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose10;                              // 0x1068   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose11;                             // 0x1090   (0x00B8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool12;                            // 0x1148   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose13;                              // 0x11E8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose14;                              // 0x1210   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose15;                             // 0x1238   (0x00B8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose16;                              // 0x12F0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose17;                              // 0x1318   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose18;                             // 0x1340   (0x00B8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose19;                              // 0x13F8   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose20;                             // 0x1420   (0x00B8)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose21;                              // 0x14D8   (0x0028)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x1500   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose22;                              // 0x1530   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose23;                              // 0x1558   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose24;                              // 0x1580   (0x0028)  
	class UPaladinSequenceDataComponent*               sequenceDataComponent;                                      // 0x15A8   (0x0008)  
	FVector2D                                          curLookat;                                                  // 0x15B0   (0x0008)  
	FVector2D                                          curEyeLookat;                                               // 0x15B8   (0x0008)  
	FVector2D                                          HeadLookat;                                                 // 0x15C0   (0x0008)  
	bool                                               UseIkComponent;                                             // 0x15C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x15C9   (0x0007)  MISSED
	class UPaladinIkComponent*                         IKComponent;                                                // 0x15D0   (0x0008)  
	float                                              PelvisZOffset;                                              // 0x15D8   (0x0004)  
	FVector                                            RightFootEffectorLocation;                                  // 0x15DC   (0x000C)  
	FVector                                            LeftFootEffectorLocation;                                   // 0x15E8   (0x000C)  
	FRotator                                           LeftFootRota;                                               // 0x15F4   (0x000C)  
	FRotator                                           RightFootRota;                                              // 0x1600   (0x000C)  
	bool                                               UseIKLeft;                                                  // 0x160C   (0x0001)  
	bool                                               UseIKRight;                                                 // 0x160D   (0x0001)  
	bool                                               bIsSequencePlaying;                                         // 0x160E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x160F   (0x0001)  MISSED
	FSTC_SQ_LookAtConfig                               LookAtConfig;                                               // 0x1610   (0x0034)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x15dd8c0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_EF22437646A3838E5E503CAC6F25138A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_EF22437646A3838E5E503CAC6F25138A(); // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_2099B94B4AF08865C232D5B5262F75F7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_2099B94B4AF08865C232D5B5262F75F7(); // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_654952514AF1F1812D43E08A86040253
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_654952514AF1F1812D43E08A86040253(); // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_1AA7B6484FF6027660B08F866EBA8DB5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_YueYunYao_SQ_AnimGraphNode_ModifyBone_1AA7B6484FF6027660B08F866EBA8DB5(); // [0x15dd8c0] BlueprintEvent       
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/Heroes/YueYunYao/Animations/ABP_YueYunYao_SQ.ABP_YueYunYao_SQ_C.ExecuteUbergraph_ABP_YueYunYao_SQ
	// void ExecuteUbergraph_ABP_YueYunYao_SQ(int32_t EntryPoint);                                                           // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/MapCG/Flay_down.SequenceDirector_C
/// Size: 0x0008 (0x000030 - 0x000038)
class USequenceDirector_Cdup_1 : public ULevelSequenceDirector
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector();                                                                     // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class AFlay_Actor_C* Flay_Actor);                                      // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class AFlay_Actor_C* Flay_Actor);                                      // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class AFlay_Actor_C* Target);                                          // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent
	// void SequenceEvent(class AFlay_Actor_C* Target);                                                                      // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.SequenceEvent
	// void SequenceEvent();                                                                                                 // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.Flay_Actor_Event
	// void Flay_Actor_Event(class AFlay_Actor_C* Flay_Actor);                                                               // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.Flay_Actor_Event
	// void Flay_Actor_Event(class AFlay_Actor_C* Flay_Actor);                                                               // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_down.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	// void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);                                                           // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/SeqPlayer/Characters/MingShuMen/QiaoLingAdult_SQPlayer.QiaoLingAdult_SQPlayer_C
/// Size: 0x0000 (0x0009A0 - 0x0009A0)
class AQiaoLingAdult_SQPlayer_C : public ASequencePlayerBase_C
{ 
public:
};

/// Class /Game/Sequence/SeqPlayer/Characters/MingShuMen/QiaoLingMini_SQPlayer.QiaoLingMini_SQPlayer_C
/// Size: 0x0008 (0x0009A0 - 0x0009A8)
class AQiaoLingMini_SQPlayer_C : public ASequencePlayerBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09A0   (0x0008)  


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Characters/MingShuMen/QiaoLingMini_SQPlayer.QiaoLingMini_SQPlayer_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Game/Sequence/SeqPlayer/Characters/MingShuMen/QiaoLingMini_SQPlayer.QiaoLingMini_SQPlayer_C.ExecuteUbergraph_QiaoLingMini_SQPlayer
	// void ExecuteUbergraph_QiaoLingMini_SQPlayer(int32_t EntryPoint);                                                      // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/MapCG/Flay_Actor.Flay_Actor_C
/// Size: 0x0018 (0x000220 - 0x000238)
class AFlay_Actor_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
	class ABP_PaladinPlayerStart_C*                    Neareast;                                                   // 0x0230   (0x0008)  


	/// Functions
	// Function /Game/Sequence/MapCG/Flay_Actor.Flay_Actor_C.Contains
	// void Contains(FName LandPointID, FPaladinDistrictInfo District, bool& Contain);                                       // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sequence/MapCG/Flay_Actor.Flay_Actor_C.GetNearesetFootRootLoc
	// void GetNearesetFootRootLoc(bool& Valid);                                                                             // [0x15dd8c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sequence/MapCG/Flay_Actor.Flay_Actor_C.SetPose
	// void SetPose(bool FlyUp);                                                                                             // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/MapCG/Flay_Actor.Flay_Actor_C.ExecuteUbergraph_Flay_Actor
	// void ExecuteUbergraph_Flay_Actor(int32_t EntryPoint);                                                                 // [0x15dd8c0] Final|HasDefaults    
};

/// Class /Game/Sequence/SeqPlayer/Weapons/BP_SQWeapon_BiHaiJian.BP_SQWeapon_BiHaiJian_C
/// Size: 0x0000 (0x0004CB - 0x0004CB)
class ABP_SQWeapon_BiHaiJian_C : public ABP_SQWeapon_Base_C
{ 
public:
};

/// Class /Game/Sequence/SeqPlayer/Interface/BPI_SQ_SequenceRole.BPI_SQ_SequenceRole_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_SQ_SequenceRole_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Sequence/SeqPlayer/Interface/BPI_SQ_SequenceRole.BPI_SQ_SequenceRole_C.GetLookAtOffsetInfo
	// void GetLookAtOffsetInfo(FSTC_SQ_LookAtConfig& LookAtInfo);                                                           // [0x15dd8c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Sequence/CGLevel/ZhaoHuanShen_ChuChang/JianShen/Jianshen_ChuChang_Charactor.SequenceDirector_C
/// Size: 0x0008 (0x000030 - 0x000038)
class USequenceDirector_Cdup_2 : public ULevelSequenceDirector
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/Sequence/CGLevel/ZhaoHuanShen_ChuChang/JianShen/Jianshen_ChuChang_Charactor.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(class ABP_PaladinNv1_C* BP_Paladin_Nv);                                // [0x15dd8c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/CGLevel/ZhaoHuanShen_ChuChang/JianShen/Jianshen_ChuChang_Charactor.SequenceDirector_C.SetHeroHiden
	// void SetHeroHiden(class ABP_PaladinNan1_C* BP_Paladin_Nan, bool bVisible);                                            // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/CGLevel/ZhaoHuanShen_ChuChang/JianShen/Jianshen_ChuChang_Charactor.SequenceDirector_C.BP_Paladin_Nv_1_Event
	// void BP_Paladin_Nv_1_Event(class ABP_PaladinNv1_C* BP_Paladin_Nv, bool bVisible);                                     // [0x15dd8c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sequence/CGLevel/ZhaoHuanShen_ChuChang/JianShen/Jianshen_ChuChang_Charactor.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	// void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);                                                           // [0x15dd8c0] Final                
};

/// Class /Game/Sequence/MapCG/Jingguan_Actor.Jingguan_Actor_C
/// Size: 0x0010 (0x000220 - 0x000230)
class AJingguan_Actor_C : public AActor
{ 
public:
	class UPaladinActorInfoComponent*                  PaladinActorInfo;                                           // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/Sequence/Tools/FullScreenCineCameraActor.FullScreenCineCameraActor_C
/// Size: 0x0000 (0x000920 - 0x000920)
class AFullScreenCineCameraActor_C : public ACineCameraActor
{ 
public:


	/// Functions
	// Function /Game/Sequence/Tools/FullScreenCineCameraActor.FullScreenCineCameraActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x15dd8c0] Event|Public|BlueprintCallable|BlueprintEvent 
};

