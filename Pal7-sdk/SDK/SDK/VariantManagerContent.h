
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX                               = 129
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                       // [0xafade0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                            // [0xafad50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                          // [0xafa9f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0018 (0x000220 - 0x000238)
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0220   (0x0018)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                              // [0xafb1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                           // [0xafb0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                     // [0xafb050] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                             // [0xafa920] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCapturedPropSegment
{ 
	SDK_UNDEFINED(16,3166) /* FString */               __um(PropertyName);                                         // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,3167) /* FString */               __um(ComponentName);                                        // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0000   (0x0088)  MISSED
	SDK_UNDEFINED(16,3168) /* TArray<Properties> */    __um(Properties);                                           // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,3169) /* FString */               __um(FullDisplayString);                                    // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	SDK_UNDEFINED(80,3170) /* TMap<FString, FString> */ __um(PropertySetterParameterDefaults);                     // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6F];                                      // 0x0149   (0x006F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                               // [0xaa19c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                           // [0xafaad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                       // [0xafa8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000220 - 0x000248)
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0220   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0238   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                               // [0xafaf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                          // [0xafab70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                         // [0xafaa50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0048 (0x000028 - 0x000070)
class UVariant : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(24,3171) /* FText */                 __um(DisplayText);                                          // 0x0028   (0x0018)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0058   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                      // [0xafb0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0xafaf80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                      // [0xafaed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                     // [0xafaba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                               // [0xafa9c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0xafa840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                           // [0xafa7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0068 (0x000028 - 0x000090)
class UVariantObjectBinding : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3172) /* FString */               __um(CachedActorLabel);                                     // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0018)  
	SDK_UNDEFINED(28,3173) /* TLazyObjectPtr<UObject*> */ __um(LazyObjectPtr);                                     // 0x0050   (0x001C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0048 (0x000028 - 0x000070)
class UVariantSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(24,3174) /* FText */                 __um(DisplayText);                                          // 0x0028   (0x0018)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0060   (0x0010)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0xafaf80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                // [0xafac60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                     // [0xafabd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                             // [0xafaa20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0xafa840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

