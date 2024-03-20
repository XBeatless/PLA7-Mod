
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: Slate
/// dependency: SlateCore

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX                           = 5
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4,
	ESlateVisibility__ESlateVisibility_MAX                                           = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX                                   = 6
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9,
	EDragPivot__EDragPivot_MAX                                                       = 10
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x05
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__Overlay                                                         = 3,
	EDynamicBoxType__EDynamicBoxType_MAX                                             = 4
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1,
	ESlateSizeRule__ESlateSizeRule_MAX                                               = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX                                   = 3
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX                                 = 2
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX                                   = 2
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x05
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX                                       = 5
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum class EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1,
	EBindingKind__EBindingKind_MAX                                                   = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1,
	EWindowVisibility__EWindowVisibility_MAX                                         = 2
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX                                           = 3
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1,
	EWidgetSpace__EWidgetSpace_MAX                                                   = 2
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX                           = 4
};

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x001C (0x000000 - 0x00001C)
struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0008   (0x0008)  
	FVector2D                                          Shear;                                                      // 0x0010   (0x0008)  
	float                                              Angle;                                                      // 0x0018   (0x0004)  
};

/// Class /Script/UMG.Widget
/// Size: 0x00E0 (0x000028 - 0x000108)
class UWidget : public UVisual
{ 
public:
	class UPanelSlot*                                  Slot;                                                       // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,1155) /* FDelegateProperty */     __um(bIsEnabledDelegate);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(24,1156) /* FText */                 __um(ToolTipText);                                          // 0x0040   (0x0018)  
	SDK_UNDEFINED(16,1157) /* FDelegateProperty */     __um(ToolTipTextDelegate);                                  // 0x0058   (0x0010)  
	class UWidget*                                     ToolTipWidget;                                              // 0x0068   (0x0008)  
	SDK_UNDEFINED(16,1158) /* FDelegateProperty */     __um(ToolTipWidgetDelegate);                                // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1159) /* FDelegateProperty */     __um(VisibilityDelegate);                                   // 0x0080   (0x0010)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0090   (0x001C)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00AC   (0x0008)  
	bool                                               bIsVariable : 1;                                            // 0x00B4:0 (0x0001)  
	bool                                               bCreatedByConstructionScript : 1;                           // 0x00B4:1 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x00B4:2 (0x0001)  
	bool                                               bOverride_Cursor : 1;                                       // 0x00B4:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                       // 0x00B8   (0x0008)  
	bool                                               bIsVolatile : 1;                                            // 0x00C0:0 (0x0001)  
	SDK_UNDEFINED(1,1160) /* TEnumAsByte<EMouseCursor> */ __um(Cursor);                                            // 0x00C1   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00C2   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00C3   (0x0001)  
	float                                              RenderOpacity;                                              // 0x00C4   (0x0004)  
	class UWidgetNavigation*                           Navigation;                                                 // 0x00C8   (0x0008)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x27];                                      // 0x00D1   (0x0027)  MISSED
	TArray<class UPropertyBinding*>                    NativeBindings;                                             // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	// void SetVisibility(ESlateVisibility InVisibility);                                                                    // [0x2596730] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(class APlayerController* PlayerController);                                                         // [0x2596510] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                            // [0x2596440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(class UWidget* Widget);                                                                               // [0x25963c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                     // [0x25962b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                        // [0x2596230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	// void SetRenderTransformAngle(float Angle);                                                                            // [0x25961b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                // [0x25960d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                 // [0x2596050] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                 // [0x2595fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                               // [0x2595f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	// void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);                                     // [0x2595e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	// void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                    // [0x2595d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	// void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                            // [0x2595c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	// void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                          // [0x2595b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                         // [0x2595a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                              // [0x2595a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                 // [0x25959c0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	// void SetFocus();                                                                                                      // [0x2595920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                   // [0x25958a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                         // [0x2595820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                              // [0x2595760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                   // [0x2595740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                              // [0xe2d1e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                             // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                       // [0x15dd8c0] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                     // [0x2595710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                     // [0x21170c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                 // [0x25956f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(class APlayerController* PlayerController);                                            // [0x2595660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(class APlayerController* PlayerController);                                                         // [0x25955d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                  // [0x2595510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                               // [0x25954e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                              // [0x25954b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                         // [0x2595480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                               // [0x2595450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// class UWidget* GetWidget__DelegateSignature();                                                                        // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                     // [0x2595420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	// FGeometry GetTickSpaceGeometry();                                                                                     // [0x2595300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                             // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                       // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                       // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	// float GetRenderTransformAngle();                                                                                      // [0x25952a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                             // [0x2595270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// class UPanelWidget* GetParent();                                                                                      // [0x2595240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	// FGeometry GetPaintSpaceGeometry();                                                                                    // [0x2595200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// class APlayerController* GetOwningPlayer();                                                                           // [0x25951d0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                           // [0x25951a0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                        // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                     // [0x15dd8c0] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                  // [0x2595170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	// class UGameInstance* GetGameInstance();                                                                               // [0x2595140] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                  // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                           // [0x25950d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                        // [0x25950a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                 // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                        // [0x2595060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                    // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// class UWidget* GenerateWidgetForString__DelegateSignature(FString item);                                              // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* item);                                       // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                      // [0x2594fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                            // [0x2594fb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0038 (0x000108 - 0x000140)
class UPanelWidget : public UWidget
{ 
public:
	TArray<class UPanelSlot*>                          Slots;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	SDK_UNDEFINED(16,1161) /* FMulticastInlineDelegate */ __um(OnSelectedChildChangedDelegate);                    // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1162) /* FMulticastInlineDelegate */ __um(OnSelectedChildProcessedUIEvent);                   // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/UMG.PanelWidget.SetSelectedChildIndex
	// bool SetSelectedChildIndex(int32_t InSelectedChildIndex);                                                             // [0x25842c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	// bool RemoveChildAt(int32_t Index);                                                                                    // [0x2583410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(class UWidget* Content);                                                                             // [0x2583380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(class UWidget* Content);                                                                                // [0x25832f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                // [0x25832c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetSelectedChildIndex
	// int32_t GetSelectedChildIndex();                                                                                      // [0x2583080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.GetSelectedChild
	// class UWidget* GetSelectedChild();                                                                                    // [0x2583050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                           // [0x2582e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(class UWidget* Content);                                                                        // [0x2582d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// class UWidget* GetChildAt(int32_t Index);                                                                             // [0x2582d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	// TArray<UWidget*> GetAllChildren();                                                                                    // [0x2582c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                 // [0x2582c60] Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// class UPanelSlot* AddChild(class UWidget* Content);                                                                   // [0x2582b20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000140 - 0x000150)
class UCanvasPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);                                                     // [0x2574bc0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class UWidget*                                     Content;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnimationEventBinding
{ 
	class UWidgetAnimation*                            Animation;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1163) /* FDelegateProperty */     __um(Delegate);                                             // 0x0008   (0x0010)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0128 (0x000108 - 0x000230)
class UUserWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1164) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x0120   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x0130   (0x0028)  
	SDK_UNDEFINED(16,1165) /* FDelegateProperty */     __um(ForegroundColorDelegate);                              // 0x0158   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0168   (0x0010)  
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                      // 0x0178   (0x0010)  
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                     // 0x0188   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x0198   (0x0010)  
	class UWidgetTree*                                 WidgetTree;                                                 // 0x01A8   (0x0008)  
	int32_t                                            Priority;                                                   // 0x01B0   (0x0004)  
	bool                                               bSupportsKeyboardFocus : 1;                                 // 0x01B4:0 (0x0001)  
	bool                                               bIsFocusable : 1;                                           // 0x01B4:1 (0x0001)  
	bool                                               bStopAction : 1;                                            // 0x01B4:2 (0x0001)  
	bool                                               bHasScriptImplementedTick : 1;                              // 0x01B4:3 (0x0001)  
	bool                                               bHasScriptImplementedPaint : 1;                             // 0x01B4:4 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x01B4:5 (0x0001)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x01B4:6 (0x0001)  MISSED
	bool                                               bCookedWidgetTree : 1;                                      // 0x01B4:7 (0x0001)  
	unsigned char                                      UnknownData03_4[0xB];                                       // 0x01B5   (0x000B)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x01C1   (0x0007)  MISSED
	class UInputComponent*                             InputComponent;                                             // 0x01C8   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x50];                                      // 0x01E0   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	// void UnregisterInputComponent();                                                                                      // [0x2593110] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                       // [0x2593030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                      // [0x2592f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);                                                // [0x2592ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);                                               // [0x2592e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                               // [0x2592d90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                               // [0x2592d70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                // [0x2592d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(class UWidgetAnimation* InAnimation);                                                              // [0x2592cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                             // [0x2592cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                 // [0x25929e0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);                                      // [0x2592910] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2592880] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(class APlayerController* LocalPlayerController);                                                 // [0x2592800] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                  // [0x2592740] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                     // [0x25925c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                       // [0x2592530] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x25923c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                        // [0x2592340] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x2592240] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                          // [0x25921b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                     // [0x2592130] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(class UWidgetAnimation* InAnimation);                                                           // [0x25920b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                            // [0x2592090] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                        // [0x2592070] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(class USoundBase* SoundToPlay);                                                                        // [0x2591ff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	// class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x2591e00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	// class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x2591cf0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	// class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x2591be0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x2591a20] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(class UWidgetAnimation* InAnimation);                                                            // [0x2591980] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                        // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                        // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	// FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                   // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                             // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                         // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                   // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                            // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                         // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                       // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                            // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                       // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                      // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                    // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                        // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	// void OnInitialized();                                                                                                 // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                          // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                           // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                   // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);               // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                    // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);              // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);         // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                               // [0x15dd8c0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(class UWidgetAnimation* Animation);                                                           // [0x25918f0] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                          // [0x257e5a0] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                         // [0x15dd8c0] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                    // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x2591770] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                            // [0x2591740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                     // [0x25916b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInViewport
	// bool IsInViewport();                                                                                                  // [0x25914e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                         // [0x2591680] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);                                                  // [0x25915f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);                                                         // [0x2591560] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// class APawn* GetOwningPlayerPawn();                                                                                   // [0x2591510] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                  // [0x25914e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);                                                   // [0x2591440] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                      // [0x2591400] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                   // [0x25913c0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                      // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                     // [0x15dd8c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                           // [0x25913a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	// void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                           // [0x25912c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	// void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                          // [0x25911e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	// void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x2591070] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                   // [0x2590ff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToScaleBoxInViewport
	// void AddToScaleBoxInViewport(int32_t ZOrder, float Scale);                                                            // [0x2590f20] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                               // [0x2590e90] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000140 - 0x000150)
class UHorizontalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);                                            // [0x257d200] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
struct FShapedTextOptions
{ 
	bool                                               bOverride_TextShapingMethod : 1;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_TextFlowDirection : 1;                            // 0x0000:1 (0x0001)  
	ETextShapingMethod                                 TextShapingMethod;                                          // 0x0001   (0x0001)  
	ETextFlowDirection                                 TextFlowDirection;                                          // 0x0002   (0x0001)  
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000108 - 0x000128)
class UTextLayoutWidget : public UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0108   (0x0003)  
	SDK_UNDEFINED(1,1166) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x010B   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x010C   (0x0001)  
	bool                                               AutoWrapText : 1;                                           // 0x010D:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x010E   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0110   (0x0004)  
	FMargin                                            Margin;                                                     // 0x0114   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0124   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x258bdf0] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000140 - 0x000140)
class UContentWidget : public UPanelWidget
{ 
public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// class UPanelSlot* SetContent(class UWidget* Content);                                                                 // [0x2579ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// class UPanelSlot* GetContentSlot();                                                                                   // [0x2579710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// class UWidget* GetContent();                                                                                          // [0x25796e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000140 - 0x000150)
class UNamedSlot : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x0210 (0x000108 - 0x000318)
class UProgressBar : public UWidget
{ 
public:
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0108   (0x01A0)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x02A8   (0x0008)  
	class USlateBrushAsset*                            BackgroundImage;                                            // 0x02B0   (0x0008)  
	class USlateBrushAsset*                            FillImage;                                                  // 0x02B8   (0x0008)  
	class USlateBrushAsset*                            MarqueeImage;                                               // 0x02C0   (0x0008)  
	float                                              percent;                                                    // 0x02C8   (0x0004)  
	SDK_UNDEFINED(1,1167) /* TEnumAsByte<EProgressBarFillType> */ __um(BarFillType);                               // 0x02CC   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x02CD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02CE   (0x0002)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x02D0   (0x0008)  
	SDK_UNDEFINED(16,1168) /* FDelegateProperty */     __um(PercentDelegate);                                      // 0x02D8   (0x0010)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,1169) /* FDelegateProperty */     __um(FillColorAndOpacityDelegate);                          // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0308   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                     // [0x2584180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                 // [0x2583ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                    // [0x2583c00] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0540 (0x000128 - 0x000668)
class URichTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1170) /* FText */                 __um(Text);                                                 // 0x0128   (0x0018)  
	class UDataTable*                                  TextStyleSet;                                               // 0x0140   (0x0008)  
	TArray<class UClass*>                              DecoratorClasses;                                           // 0x0148   (0x0010)  
	bool                                               bOverrideDefaultStyle;                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	FTextBlockStyle                                    DefaultTextStyleOverride;                                   // 0x0160   (0x0268)  
	float                                              MinDesiredWidth;                                            // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x26C];                                     // 0x03CC   (0x026C)  MISSED
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                         // 0x0638   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0648   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                              // [0x2584690] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                          // [0x2584510] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x2584070] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                        // [0x25839f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                               // [0x2583870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                // [0x25837f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                           // [0x2583770] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                       // [0x2583640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                        // [0x2583550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x25834c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetText
	// FText GetText();                                                                                                      // [0x25831f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	// class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                     // [0x2582e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                 // [0x2582c40] Final|Native|Public  
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject
{ 
public:
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
public:
	class UPanelWidget*                                Parent;                                                     // 0x0028   (0x0008)  
	class UWidget*                                     Content;                                                    // 0x0030   (0x0008)  
};

/// Class /Script/UMG.Slider
/// Size: 0x03F0 (0x000108 - 0x0004F8)
class USlider : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0108   (0x0004)  
	SDK_UNDEFINED(16,1171) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x010C   (0x0010)  
	float                                              MinValue;                                                   // 0x011C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0120   (0x0004)  
	float                                              LimitValue;                                                 // 0x0124   (0x0004)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0128   (0x0340)  
	SDK_UNDEFINED(1,1172) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0469   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x046C   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x047C   (0x0010)  
	bool                                               IndentHandle;                                               // 0x048C   (0x0001)  
	bool                                               Locked;                                                     // 0x048D   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x048E   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x048F   (0x0001)  
	float                                              StepSize;                                                   // 0x0490   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0494   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0495   (0x0003)  MISSED
	SDK_UNDEFINED(16,1173) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0498   (0x0010)  
	SDK_UNDEFINED(16,1174) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x04A8   (0x0010)  
	SDK_UNDEFINED(16,1175) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x04B8   (0x0010)  
	SDK_UNDEFINED(16,1176) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x04C8   (0x0010)  
	SDK_UNDEFINED(16,1177) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x04E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x258c780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x258c700] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x258c680] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	// void SetMinValue(float InValue);                                                                                      // [0x258c300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	// void SetMaxValue(float InValue);                                                                                      // [0x258c080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x258bef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLimitValue
	// void SetLimitValue(float InValue);                                                                                    // [0x258be70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x258bc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                     // [0x258b4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	// float GetNormalizedValue();                                                                                           // [0x258b2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000140 - 0x000168)
class UUniformGridPanel : public UPanelWidget
{ 
public:
	FMargin                                            SlotPadding;                                                // 0x0140   (0x0010)  
	float                                              MinDesiredSlotWidth;                                        // 0x0150   (0x0004)  
	float                                              MinDesiredSlotHeight;                                       // 0x0154   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0158   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	// void SetSlotPadding(FMargin InSlotPadding);                                                                           // [0x2592b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                             // [0x25926c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                           // [0x2592640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);               // [0x2590d90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);                                                         // [0x259f7e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);                                           // [0x259f760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);                                                 // [0x259f6e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);                                                 // [0x259f660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);                                                         // [0x259f5e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);                                                     // [0x259f560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);                                                       // [0x259f4e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);                                                        // [0x259f460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);                                                         // [0x259f3e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);                                             // [0x259f360] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// class UGridSlot* SlotAsGridSlot(class UWidget* Widget);                                                               // [0x259f2e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);                                                      // [0x259f260] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);                                                           // [0x259f1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(class UObject* WorldContextObject);                                                             // [0x259e5e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // [0x259e2a0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);                                               // [0x259dde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(class UObject* WorldContextObject);                                                         // [0x259dd50] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(class UObject* WorldContextObject);                                                            // [0x259dcc0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);                                   // [0x259db50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);                // [0x259d9d0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);                                              // [0x259d940] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                               // [0x259d900] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000140 - 0x000150)
class UVerticalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);                                                // [0x2594d60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1178) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1179) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// class UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                            // [0x2574c50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x00B8 (0x000140 - 0x0001F8)
class UBackgroundBlur : public UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0140   (0x0010)  
	SDK_UNDEFINED(1,1180) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0150   (0x0001)  
	SDK_UNDEFINED(1,1181) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0151   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x0152   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0153   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x0154   (0x0004)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x015C   (0x0004)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x0160   (0x0088)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25763a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                // [0x2576010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                               // [0x25755e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                             // [0x2575560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                   // [0x25753c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1182) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1183) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2576430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575ce0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000028 - 0x000028)
struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0038 (0x000028 - 0x000060)
class UPropertyBinding : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,1184) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                       // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0028)  
	FName                                              DestinationProperty;                                        // 0x0058   (0x0008)  
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UBoolBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                      // [0x2575000] Final|Native|Public|Const 
};

/// Class /Script/UMG.Border
/// Size: 0x0150 (0x000140 - 0x000290)
class UBorder : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1185) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0140   (0x0001)  
	SDK_UNDEFINED(1,1186) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0141   (0x0001)  
	bool                                               bShowEffectWhenDisabled : 1;                                // 0x0142:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0143   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x0144   (0x0010)  
	SDK_UNDEFINED(16,1187) /* FDelegateProperty */     __um(ContentColorAndOpacityDelegate);                       // 0x0154   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0164   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	FSlateBrush                                        Background;                                                 // 0x0178   (0x0088)  
	SDK_UNDEFINED(16,1188) /* FDelegateProperty */     __um(BackgroundDelegate);                                   // 0x0200   (0x0010)  
	FLinearColor                                       BrushColor;                                                 // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,1189) /* FDelegateProperty */     __um(BrushColorDelegate);                                   // 0x0220   (0x0010)  
	FVector2D                                          DesiredSizeScale;                                           // 0x0230   (0x0008)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	SDK_UNDEFINED(16,1190) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x023C   (0x0010)  
	SDK_UNDEFINED(16,1191) /* FDelegateProperty */     __um(OnMouseButtonUpEvent);                                 // 0x024C   (0x0010)  
	SDK_UNDEFINED(16,1192) /* FDelegateProperty */     __um(OnMouseMoveEvent);                                     // 0x025C   (0x0010)  
	SDK_UNDEFINED(16,1193) /* FDelegateProperty */     __um(OnMouseDoubleClickEvent);                              // 0x026C   (0x0010)  
	unsigned char                                      UnknownData03_6[0x14];                                      // 0x027C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25764c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                          // [0x2575be0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                // [0x2575b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture);                                                                  // [0x2575960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x25758e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x2575860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                        // [0x25757e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x2575660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x2574e10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1194) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1195) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2576550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575de0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UBrushBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                               // [0x2575030] Final|Native|Public|Const 
};

/// Class /Script/UMG.Button
/// Size: 0x0308 (0x000140 - 0x000448)
class UButton : public UContentWidget
{ 
public:
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0140   (0x0008)  
	FButtonStyle                                       WidgetStyle;                                                // 0x0148   (0x0278)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x03C0   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x03D0   (0x0010)  
	SDK_UNDEFINED(1,1196) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x03E0   (0x0001)  
	SDK_UNDEFINED(1,1197) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x03E1   (0x0001)  
	SDK_UNDEFINED(1,1198) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x03E2   (0x0001)  
	bool                                               IsFocusable;                                                // 0x03E3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1199) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x03E8   (0x0010)  
	SDK_UNDEFINED(16,1200) /* FMulticastInlineDelegate */ __um(OnPressed);                                         // 0x03F8   (0x0010)  
	SDK_UNDEFINED(16,1201) /* FMulticastInlineDelegate */ __um(OnReleased);                                        // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,1202) /* FMulticastInlineDelegate */ __um(OnHovered);                                         // 0x0418   (0x0010)  
	SDK_UNDEFINED(16,1203) /* FMulticastInlineDelegate */ __um(OnUnhovered);                                       // 0x0428   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0438   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x25769d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                 // [0x25768f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x2576770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x2575ae0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x2575a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                              // [0x25754e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                     // [0x2575250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1204) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1205) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25765e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575e60] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnchorData
{ 
	FMargin                                            Offsets;                                                    // 0x0000   (0x0010)  
	FAnchors                                           Anchors;                                                    // 0x0010   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0020   (0x0008)  
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UCanvasPanelSlot : public UPanelSlot
{ 
public:
	FAnchorData                                        LayoutData;                                                 // 0x0038   (0x0028)  
	bool                                               bAutoSize;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            ZOrder;                                                     // 0x0064   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	// void SetZOrder(int32_t InZOrder);                                                                                     // [0x2576cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x2576870] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                               // [0x25766f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                    // [0x2576310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                          // [0x2576210] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                          // [0x2576190] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                            // [0x2575f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                   // [0x2575450] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                  // [0x2575330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                             // [0x25752b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                  // [0x25751f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                  // [0x2574f50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                              // [0x2574f10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                 // [0x2574ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                              // [0x2574e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                   // [0x2574db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                // [0x2574d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                             // [0x2574d30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0660 (0x000140 - 0x0007A0)
class UCheckBox : public UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	SDK_UNDEFINED(16,1206) /* FDelegateProperty */     __um(CheckedStateDelegate);                                 // 0x0144   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0158   (0x0580)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x06D8   (0x0008)  
	class USlateBrushAsset*                            UncheckedImage;                                             // 0x06E0   (0x0008)  
	class USlateBrushAsset*                            UncheckedHoveredImage;                                      // 0x06E8   (0x0008)  
	class USlateBrushAsset*                            UncheckedPressedImage;                                      // 0x06F0   (0x0008)  
	class USlateBrushAsset*                            CheckedImage;                                               // 0x06F8   (0x0008)  
	class USlateBrushAsset*                            CheckedHoveredImage;                                        // 0x0700   (0x0008)  
	class USlateBrushAsset*                            CheckedPressedImage;                                        // 0x0708   (0x0008)  
	class USlateBrushAsset*                            UndeterminedImage;                                          // 0x0710   (0x0008)  
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                   // 0x0718   (0x0008)  
	class USlateBrushAsset*                            UndeterminedPressedImage;                                   // 0x0720   (0x0008)  
	SDK_UNDEFINED(1,1207) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0728   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0729   (0x0003)  MISSED
	FMargin                                            Padding;                                                    // 0x072C   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x073C   (0x0004)  MISSED
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0740   (0x0028)  
	bool                                               IsFocusable;                                                // 0x0768   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0769   (0x0007)  MISSED
	SDK_UNDEFINED(16,1208) /* FMulticastInlineDelegate */ __um(OnCheckStateChanged);                               // 0x0770   (0x0010)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x0780   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                  // [0x2575ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                  // [0x25759e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                     // [0x2575280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                     // [0x2575220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                     // [0x2574de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UCheckedStateBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                            // [0x25751c0] Final|Native|Public|Const 
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00B8 (0x000108 - 0x0001C0)
class UCircularThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0108   (0x0004)  
	float                                              Period;                                                     // 0x010C   (0x0004)  
	float                                              Radius;                                                     // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	class USlateBrushAsset*                            PieceImage;                                                 // 0x0118   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0120   (0x0088)  
	bool                                               bEnableRadius;                                              // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x01A9   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	// void SetRadius(float InRadius);                                                                                       // [0x25767f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                       // [0x2576670] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x2576290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UColorBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                          // [0x2574f90] Final|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                        // [0x2574e90] Final|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0038 (0x000108 - 0x000140)
class UComboBox : public UWidget
{ 
public:
	TArray<class UObject*>                             Items;                                                      // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,1209) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0118   (0x0010)  
	bool                                               bIsFocusable;                                               // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0129   (0x0017)  MISSED
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x0CF0 (0x000108 - 0x000DF8)
class UComboBoxString : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1210) /* TArray<FString> */       __um(DefaultOptions);                                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,1211) /* FString */               __um(SelectedOption);                                       // 0x0118   (0x0010)  
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0128   (0x03F0)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x0518   (0x07C8)  
	FMargin                                            ContentPadding;                                             // 0x0CE0   (0x0010)  
	float                                              MaxListHeight;                                              // 0x0CF0   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x0CF4   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x0CF5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0CF6   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0CF8   (0x0050)  
	FSlateColor                                        ForegroundColor;                                            // 0x0D48   (0x0028)  
	bool                                               bIsFocusable;                                               // 0x0D70   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0D71   (0x0003)  MISSED
	SDK_UNDEFINED(16,1212) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0D74   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0D84   (0x0004)  MISSED
	SDK_UNDEFINED(16,1213) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0D88   (0x0010)  
	SDK_UNDEFINED(16,1214) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x0D98   (0x0010)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0DA8   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                               // [0x257ab50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x257aad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                    // [0x2579bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                // [0x2579b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);        // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	// bool IsOpen();                                                                                                        // [0x2579af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                          // [0x25798d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x25798a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                             // [0x2579870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                              // [0x25797a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                              // [0x25795a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                // [0x25791f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                  // [0x25791d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                       // [0x2579050] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0060 (0x000028 - 0x000088)
class UDragDropOperation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1215) /* FString */               __um(Tag);                                                  // 0x0028   (0x0010)  
	class UObject*                                     Payload;                                                    // 0x0038   (0x0008)  
	class UWidget*                                     DefaultDragVisual;                                          // 0x0040   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FVector2D                                          Offset;                                                     // 0x004C   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,1216) /* FMulticastInlineDelegate */ __um(OnDrop);                                            // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1217) /* FMulticastInlineDelegate */ __um(OnDragCancelled);                                   // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1218) /* FMulticastInlineDelegate */ __um(OnDragged);                                         // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                               // [0x2579470] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                            // [0x2579340] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                      // [0x2579210] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              value;                                                      // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1219) /* TEnumAsByte<ESlateSizeRule> */ __um(SizeRule);                                        // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0080 (0x000000 - 0x000080)
struct FUserWidgetPool
{ 
	TArray<class UUserWidget*>                         ActiveWidgets;                                              // 0x0000   (0x0010)  
	TArray<class UUserWidget*>                         InactiveWidgets;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00C0 (0x000108 - 0x0001C8)
class UDynamicEntryBoxBase : public UWidget
{ 
public:
	EDynamicBoxType                                    EntryBoxType;                                               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	FVector2D                                          EntrySpacing;                                               // 0x010C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FVector2D>                                  SpacingPattern;                                             // 0x0118   (0x0010)  
	FSlateChildSize                                    EntrySizeRule;                                              // 0x0128   (0x0008)  
	SDK_UNDEFINED(1,1220) /* TEnumAsByte<EHorizontalAlignment> */ __um(EntryHorizontalAlignment);                  // 0x0130   (0x0001)  
	SDK_UNDEFINED(1,1221) /* TEnumAsByte<EVerticalAlignment> */ __um(EntryVerticalAlignment);                      // 0x0131   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0132   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x0134   (0x0004)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0138   (0x0010)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0148   (0x0080)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                      // [0x2579f60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	// int32_t GetNumEntries();                                                                                              // [0x2579770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                 // [0x2579650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x01C8   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                      // [0x2579c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	// void RemoveEntry(class UUserWidget* EntryWidget);                                                                     // [0x2579b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);                                                   // [0x2579120] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	// class UUserWidget* BP_CreateEntry();                                                                                  // [0x25790f0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0348 (0x000108 - 0x000450)
class UEditableText : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1222) /* FText */                 __um(Text);                                                 // 0x0108   (0x0018)  
	SDK_UNDEFINED(16,1223) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0120   (0x0010)  
	SDK_UNDEFINED(24,1224) /* FText */                 __um(HintText);                                             // 0x0130   (0x0018)  
	SDK_UNDEFINED(16,1225) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0148   (0x0010)  
	FEditableTextStyle                                 WidgetStyle;                                                // 0x0158   (0x0218)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0370   (0x0008)  
	class USlateBrushAsset*                            BackgroundImageSelected;                                    // 0x0378   (0x0008)  
	class USlateBrushAsset*                            BackgroundImageComposing;                                   // 0x0380   (0x0008)  
	class USlateBrushAsset*                            CaretImage;                                                 // 0x0388   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x0390   (0x0050)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x03E0   (0x0028)  
	bool                                               IsReadOnly;                                                 // 0x0408   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0409   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x040A   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x040C   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0410   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0411   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0412   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0413   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0414   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0415   (0x0001)  
	SDK_UNDEFINED(1,1226) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0416   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0417   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0418   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0419   (0x0001)  
	SDK_UNDEFINED(1,1227) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x041A   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x041B   (0x0003)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x041E   (0x0002)  MISSED
	SDK_UNDEFINED(16,1228) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,1229) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0430   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0440   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x257ac30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x257a670] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                              // [0x257a550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                               // [0x257a430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x257a0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                      // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                      // [0x2579950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0920 (0x000108 - 0x000A28)
class UEditableTextBox : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1230) /* FText */                 __um(Text);                                                 // 0x0108   (0x0018)  
	SDK_UNDEFINED(16,1231) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0120   (0x0010)  
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0130   (0x07F0)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0920   (0x0008)  
	SDK_UNDEFINED(24,1232) /* FText */                 __um(HintText);                                             // 0x0928   (0x0018)  
	SDK_UNDEFINED(16,1233) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0940   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0950   (0x0050)  
	FLinearColor                                       ForegroundColor;                                            // 0x09A0   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x09B0   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x09C0   (0x0010)  
	bool                                               IsReadOnly;                                                 // 0x09D0   (0x0001)  
	bool                                               IsPassword;                                                 // 0x09D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x09D2   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x09D4   (0x0004)  
	FMargin                                            Padding;                                                    // 0x09D8   (0x0010)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x09E8   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x09E9   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x09EA   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x09EB   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x09EC   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x09ED   (0x0001)  
	SDK_UNDEFINED(1,1234) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x09EE   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x09EF   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x09F0   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x09F1   (0x0001)  
	SDK_UNDEFINED(1,1235) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x09F2   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x09F3   (0x0003)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x09F6   (0x0002)  MISSED
	SDK_UNDEFINED(16,1236) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x09F8   (0x0010)  
	SDK_UNDEFINED(16,1237) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0A08   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0A18   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x257ad10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x257a6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x257a5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	// void SetIsPassword(bool bIsPassword);                                                                                 // [0x257a4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                       // [0x257a1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x2579ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);          // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                   // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                      // [0x2579ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x25799f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                    // [0x25791b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x0230 (0x000108 - 0x000338)
class UExpandableArea : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	FExpandableAreaStyle                               Style;                                                      // 0x0110   (0x0120)  
	FSlateBrush                                        BorderBrush;                                                // 0x0230   (0x0088)  
	FSlateColor                                        BorderColor;                                                // 0x02B8   (0x0028)  
	bool                                               bIsExpanded;                                                // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x02E4   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x02E8   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,1238) /* FMulticastInlineDelegate */ __um(OnExpansionChanged);                                // 0x0308   (0x0010)  
	class UWidget*                                     HeaderContent;                                              // 0x0318   (0x0008)  
	class UWidget*                                     BodyContent;                                                // 0x0320   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                         // [0x257a3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                  // [0x257a310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0x2579740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UFloatBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                     // [0x2579a90] Final|Native|Public|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000140 - 0x000170)
class UGridPanel : public UPanelWidget
{ 
public:
	TArray<float>                                      ColumnFill;                                                 // 0x0140   (0x0010)  
	TArray<float>                                      RowFill;                                                    // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	// void SetRowFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x257a980] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                           // [0x2579d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                             // [0x2578f50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UGridSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1239) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1240) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x004C   (0x0004)  
	int32_t                                            RowSpan;                                                    // 0x0050   (0x0004)  
	int32_t                                            Column;                                                     // 0x0054   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0058   (0x0004)  
	int32_t                                            Layer;                                                      // 0x005C   (0x0004)  
	FVector2D                                          Nudge;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x257adf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                   // [0x257aa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x257a900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x257a870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	// void SetNudge(FVector2D InNudge);                                                                                     // [0x257a7f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                       // [0x257a770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x257a290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                             // [0x2579e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x2579d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0050   (0x0008)  
	SDK_UNDEFINED(1,1241) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1242) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x257f5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x257f4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x257f0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x257ee20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0108 (0x000108 - 0x000210)
class UImage : public UWidget
{ 
public:
	FSlateBrush                                        Brush;                                                      // 0x0108   (0x0088)  
	SDK_UNDEFINED(16,1243) /* FDelegateProperty */     __um(BrushDelegate);                                        // 0x0190   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,1244) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x01B0   (0x0010)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01C1   (0x0003)  MISSED
	SDK_UNDEFINED(16,1245) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x01C4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x01D4   (0x003C)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x257f060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x257ecb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                        // [0x257eb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushSize
	// void SetBrushSize(FVector2D DesiredSize);                                                                             // [0x257eab0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	// void SetBrushResourceObject(class UObject* ResourceObject);                                                           // [0x257ea30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);                                   // [0x257e960] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);                                                 // [0x257e890] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	// void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                               // [0x257e740] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	// void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                      // [0x257e630] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x257e5a0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                // [0x257e4b0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x257e420] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x257e2a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x257d990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x05E8 (0x000108 - 0x0006F0)
class UInputKeySelector : public UWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0108   (0x0278)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0380   (0x0268)  
	FInputChord                                        SelectedKey;                                                // 0x05E8   (0x0020)  
	FSlateFontInfo                                     Font;                                                       // 0x0608   (0x0050)  
	FMargin                                            Margin;                                                     // 0x0658   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0668   (0x0010)  
	SDK_UNDEFINED(24,1246) /* FText */                 __um(KeySelectionText);                                     // 0x0678   (0x0018)  
	SDK_UNDEFINED(24,1247) /* FText */                 __um(NoKeySpecifiedText);                                   // 0x0690   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x06A8   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x06A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x06AA   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,1248) /* FMulticastInlineDelegate */ __um(OnKeySelected);                                     // 0x06C0   (0x0010)  
	SDK_UNDEFINED(16,1249) /* FMulticastInlineDelegate */ __um(OnIsSelectingKeyChanged);                           // 0x06D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x06E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                           // [0x257f570] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                      // [0x257f370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                               // [0x257ef80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                   // [0x257eea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                             // [0x257ed30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                 // [0x257e210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                   // [0x257e180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                       // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                    // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                             // [0x257da50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000060 - 0x000060)
class UInt32Binding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                   // [0x257dcf0] Final|Native|Public|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000140 - 0x000158)
class UInvalidationBox : public UContentWidget
{ 
public:
	bool                                               bCanCache;                                                  // 0x0140   (0x0001)  
	bool                                               CacheRelativeTransforms;                                    // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0142   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	// void SetCanCache(bool CanCache);                                                                                      // [0x257ec20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                               // [0xbf6f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                   // [0x257d8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                     // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                     // [0x15dd8c0] Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                            // [0x15dd8c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected
	// bool IsListItemSelected(TScriptInterface<Class> UserListEntry);                                                       // [0x257ddf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded
	// bool IsListItemExpanded(TScriptInterface<Class> UserListEntry);                                                       // [0x257dd50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView
	// class UListViewBase* GetOwningListView(TScriptInterface<Class> UserListEntry);                                        // [0x257dc50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                              // [0x15dd8c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntryLibrary.GetListItemObject
	// class UObject* GetListItemObject(TScriptInterface<Class> UserObjectListEntry);                                        // [0x257db10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0110 (0x000108 - 0x000218)
class UListViewBase : public UWidget
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x0108   (0x0008)  
	float                                              WheelScrollMultiplier;                                      // 0x0110   (0x0004)  
	bool                                               bEnableScrollAnimation;                                     // 0x0114   (0x0001)  
	bool                                               bEnableFixedLineOffset;                                     // 0x0115   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0116   (0x0002)  MISSED
	float                                              FixedLineScrollOffset;                                      // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1250) /* FMulticastInlineDelegate */ __um(BP_OnEntryGenerated);                               // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,1251) /* FMulticastInlineDelegate */ __um(BP_OnEntryReleased);                                // 0x0130   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0140   (0x0080)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x01C0   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x257f670] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	// void SetScrollOffset(float InScrollOffset);                                                                           // [0x257f1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollBarVisibility
	// void SetScrollBarVisibility(ESlateVisibility InVisibility);                                                           // [0x257f270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	// void ScrollToTop();                                                                                                   // [0x257e160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	// void ScrollToBottom();                                                                                                // [0x257e140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	// void RequestRefresh();                                                                                                // [0x257e0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	// void RegenerateAllEntries();                                                                                          // [0x257e000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	// TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                      // [0x257d900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0150 (0x000218 - 0x000368)
class UListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xC0];                                      // 0x0218   (0x00C0)  MISSED
	SDK_UNDEFINED(1,1252) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x02D8   (0x0001)  
	SDK_UNDEFINED(1,1253) /* TEnumAsByte<ESelectionMode> */ __um(SelectionMode);                                   // 0x02D9   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x02DA   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x02DB   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02DD   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x02E0   (0x0004)  
	bool                                               bReturnFocusToSelection;                                    // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02E5   (0x0003)  MISSED
	TArray<class UObject*>                             ListItems;                                                  // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02F8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1254) /* FMulticastInlineDelegate */ __um(BP_OnEntryInitialized);                             // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,1255) /* FMulticastInlineDelegate */ __um(BP_OnItemClicked);                                  // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,1256) /* FMulticastInlineDelegate */ __um(BP_OnItemDoubleClicked);                            // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,1257) /* FMulticastInlineDelegate */ __um(BP_OnItemIsHoveredChanged);                         // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,1258) /* FMulticastInlineDelegate */ __um(BP_OnItemSelectionChanged);                         // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,1259) /* FMulticastInlineDelegate */ __um(BP_OnItemScrolledIntoView);                         // 0x0358   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                     // [0x257f460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                 // [0x257f2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	// void ScrollIndexIntoView(int32_t Index);                                                                              // [0x257e0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	// void RemoveItem(class UObject* item);                                                                                 // [0x257e020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.NavigateToIndex
	// void NavigateToIndex(int32_t Index);                                                                                  // [0x257def0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                              // [0x257dec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	// int32_t GetNumItems();                                                                                                // [0x257dc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	// TArray<UObject*> GetListItems();                                                                                      // [0x257dbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	// class UObject* GetItemAt(int32_t Index);                                                                              // [0x257da80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	// int32_t GetIndexForItem(class UObject* item);                                                                         // [0x257d9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	// void ClearListItems();                                                                                                // [0x257d800] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	// void BP_SetSelectedItem(class UObject* item);                                                                         // [0x257d780] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	// void BP_SetListItems(TArray<UObject*>& InListItems);                                                                  // [0x257d6d0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	// void BP_SetItemSelection(class UObject* item, bool bSelected);                                                        // [0x257d600] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	// void BP_ScrollItemIntoView(class UObject* item);                                                                      // [0x257d580] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	// void BP_NavigateToItem(class UObject* item);                                                                          // [0x257d500] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	// bool BP_IsItemVisible(class UObject* item);                                                                           // [0x257d470] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	// bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                    // [0x257d3b0] Final|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	// class UObject* BP_GetSelectedItem();                                                                                  // [0x257d380] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	// int32_t BP_GetNumItemsSelected();                                                                                     // [0x257d350] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	// void BP_ClearSelection();                                                                                             // [0x257d330] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	// void BP_CancelScrollIntoView();                                                                                       // [0x257d310] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	// void AddItem(class UObject* item);                                                                                    // [0x257d290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject
{ 
public:
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0040 (0x000140 - 0x000180)
class UMenuAnchor : public UContentWidget
{ 
public:
	class UClass*                                      MenuClass;                                                  // 0x0140   (0x0008)  
	SDK_UNDEFINED(16,1260) /* FDelegateProperty */     __um(OnGetMenuContentEvent);                                // 0x0148   (0x0010)  
	SDK_UNDEFINED(1,1261) /* TEnumAsByte<EMenuPlacement> */ __um(Placement);                                       // 0x0158   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x0159   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x015A   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x015B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1262) /* FMulticastInlineDelegate */ __um(OnMenuOpenChanged);                                 // 0x0160   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0170   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                   // [0x257f720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                          // [0x257f6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	// void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                           // [0x257f170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                           // [0x257df70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                        // [0x257de90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                               // [0x257dd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                          // [0x257dbe0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	// void FitInWindow(bool bFit);                                                                                          // [0x257d840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                         // [0x257d820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UMouseCursorBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                 // [0x2583290] Final|Native|Public|Const 
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieScene2DTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0470 (0x0000E0 - 0x000550)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
public:
	FMovieScene2DTransformMask                         TransformMask;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x00E8   (0x0140)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0228   (0x00A0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x02C8   (0x0140)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0408   (0x0140)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0548   (0x0008)  MISSED
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0280 (0x0000E0 - 0x000360)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0220   (0x00A0)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x02C0   (0x00A0)  
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0018 (0x000068 - 0x000080)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x0068   (0x0010)  
	FName                                              TrackName;                                                  // 0x0078   (0x0008)  
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0338 (0x000128 - 0x000460)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1263) /* FText */                 __um(Text);                                                 // 0x0128   (0x0018)  
	SDK_UNDEFINED(24,1264) /* FText */                 __um(HintText);                                             // 0x0140   (0x0018)  
	SDK_UNDEFINED(16,1265) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0158   (0x0010)  
	FTextBlockStyle                                    WidgetStyle;                                                // 0x0168   (0x0268)  
	bool                                               bIsReadOnly;                                                // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03D1   (0x0007)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x03D8   (0x0050)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0428   (0x0001)  
	bool                                               ClearTextSelectionOnFocusLoss;                              // 0x0429   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x042A   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x042B   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x042C   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x042D   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x042E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x042F   (0x0001)  MISSED
	SDK_UNDEFINED(16,1266) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0430   (0x0010)  
	SDK_UNDEFINED(16,1267) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0440   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0450   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	// void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                  // [0x2584810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x2584350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x2583f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x2583c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                             // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                      // [0x25830b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x2582f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0B58 (0x000128 - 0x000C80)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1268) /* FText */                 __um(Text);                                                 // 0x0128   (0x0018)  
	SDK_UNDEFINED(24,1269) /* FText */                 __um(HintText);                                             // 0x0140   (0x0018)  
	SDK_UNDEFINED(16,1270) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0158   (0x0010)  
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0168   (0x07F0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0958   (0x0268)  
	bool                                               bIsReadOnly;                                                // 0x0BC0   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0BC1   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0BC2   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0BC3   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0BC4   (0x0004)  MISSED
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0BC8   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x0BD0   (0x0050)  
	FLinearColor                                       ForegroundColor;                                            // 0x0C20   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0C30   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x0C40   (0x0010)  
	SDK_UNDEFINED(16,1271) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0C50   (0x0010)  
	SDK_UNDEFINED(16,1272) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0C60   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0C70   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	// void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                      // [0x25845e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x2584430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x2583fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x2583d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x2583b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                          // [0x15dd8c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x2583150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	// FText GetHintText();                                                                                                  // [0x2582fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface
{ 
public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000108 - 0x000118)
class UNativeWidgetHost : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000140 - 0x000150)
class UOverlay : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// class UOverlaySlot* AddChildToOverlay(class UWidget* Content);                                                        // [0x2582bb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1273) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1274) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2584790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25840f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2583e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000140 - 0x000170)
class URetainerBox : public UContentWidget
{ 
public:
	bool                                               RenderOnInvalidation;                                       // 0x0140   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0142   (0x0002)  MISSED
	int32_t                                            Phase;                                                      // 0x0144   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UMaterialInterface*                          EffectMaterial;                                             // 0x0150   (0x0008)  
	FName                                              TextureParameter;                                           // 0x0158   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	// void SetTextureParameter(FName TextureParameter);                                                                     // [0x2584710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                     // [0x2584200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(class UMaterialInterface* EffectMaterial);                                                     // [0x2583aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                 // [0x25834a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// class UMaterialInstanceDynamic* GetEffectMaterial();                                                                  // [0x2582ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
public:
	class UDataTable*                                  ImageSet;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000140 - 0x000158)
class USafeZone : public UContentWidget
{ 
public:
	bool                                               PadLeft;                                                    // 0x0140   (0x0001)  
	bool                                               PadRight;                                                   // 0x0141   (0x0001)  
	bool                                               PadTop;                                                     // 0x0142   (0x0001)  
	bool                                               PadBottom;                                                  // 0x0143   (0x0001)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0144   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                 // [0x25884f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USafeZoneSlot : public UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x003C   (0x0010)  
	SDK_UNDEFINED(1,1275) /* TEnumAsByte<EHorizontalAlignment> */ __um(HAlign);                                    // 0x004C   (0x0001)  
	SDK_UNDEFINED(1,1276) /* TEnumAsByte<EVerticalAlignment> */ __um(VAlign);                                      // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000140 - 0x000160)
class UScaleBox : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1277) /* TEnumAsByte<EStretch> */  __um(Stretch);                                              // 0x0140   (0x0001)  
	SDK_UNDEFINED(1,1278) /* TEnumAsByte<EStretchDirection> */ __um(StretchDirection);                             // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0142   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x0144   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0148   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0149   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                               // [0x2588820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                          // [0x25887a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                     // [0x2588720] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                           // [0x2587d90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScaleBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1279) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1280) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2576c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25881a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2575e60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0508 (0x000108 - 0x000610)
class UScrollBar : public UWidget
{ 
public:
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0108   (0x04D0)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x05D8   (0x0008)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x05E0   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x05E1   (0x0001)  
	SDK_UNDEFINED(1,1281) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x05E2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x05E3   (0x0001)  MISSED
	FVector2D                                          Thickness;                                                  // 0x05E4   (0x0008)  
	FMargin                                            Padding;                                                    // 0x05EC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x05FC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                     // [0x2588660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0760 (0x000140 - 0x0008A0)
class UScrollBox : public UPanelWidget
{ 
public:
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0140   (0x0228)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x0368   (0x04D0)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0838   (0x0008)  
	class USlateWidgetStyleAsset*                      BarStyle;                                                   // 0x0840   (0x0008)  
	SDK_UNDEFINED(1,1282) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0848   (0x0001)  
	ESlateVisibility                                   ScrollBarVisibility;                                        // 0x0849   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x084A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x084B   (0x0001)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x084C   (0x0008)  
	FMargin                                            ScrollbarPadding;                                           // 0x0854   (0x0010)  
	bool                                               AlwaysShowScrollbar;                                        // 0x0864   (0x0001)  
	bool                                               AlwaysShowScrollbarTrack;                                   // 0x0865   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x0866   (0x0001)  
	bool                                               bAnimateWheelScrolling;                                     // 0x0867   (0x0001)  
	EDescendantScrollDestination                       NavigationDestination;                                      // 0x0868   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0869   (0x0003)  MISSED
	float                                              NavigationScrollPadding;                                    // 0x086C   (0x0004)  
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                     // 0x0870   (0x0001)  
	bool                                               bAllowRightClickDragScrolling;                              // 0x0871   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0872   (0x0002)  MISSED
	float                                              WheelScrollMultiplier;                                      // 0x0874   (0x0004)  
	SDK_UNDEFINED(16,1283) /* FMulticastInlineDelegate */ __um(OnUserScrolled);                                    // 0x0878   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0888   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x2588920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                          // [0x2588340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility
	// void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);                                                 // [0x25882c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                         // [0x2588460] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	// void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                               // [0x25883c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                        // [0x2588120] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	// void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                   // [0x2587c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	// void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                     // [0x2587b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                             // [0x2587af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                     // [0x2587a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x2587910] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                 // [0x25878f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                   // [0x25878d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	// float GetViewOffsetFraction();                                                                                        // [0x25870a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	// float GetScrollOffsetOfEnd();                                                                                         // [0x2587070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x2587040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	// void EndInertialScrolling();                                                                                          // [0x2586b30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UScrollBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1284) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1285) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x004A   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0xed97c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0xed96b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0xed94d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000140 - 0x000178)
class USizeBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0140   (0x0010)  MISSED
	float                                              WidthOverride;                                              // 0x0150   (0x0004)  
	float                                              HeightOverride;                                             // 0x0154   (0x0004)  
	float                                              MinDesiredWidth;                                            // 0x0158   (0x0004)  
	float                                              MinDesiredHeight;                                           // 0x015C   (0x0004)  
	float                                              MaxDesiredWidth;                                            // 0x0160   (0x0004)  
	float                                              MaxDesiredHeight;                                           // 0x0164   (0x0004)  
	float                                              MinAspectRatio;                                             // 0x0168   (0x0004)  
	float                                              MaxAspectRatio;                                             // 0x016C   (0x0004)  
	bool                                               bOverride_WidthOverride : 1;                                // 0x0170:0 (0x0001)  
	bool                                               bOverride_HeightOverride : 1;                               // 0x0170:1 (0x0001)  
	bool                                               bOverride_MinDesiredWidth : 1;                              // 0x0170:2 (0x0001)  
	bool                                               bOverride_MinDesiredHeight : 1;                             // 0x0170:3 (0x0001)  
	bool                                               bOverride_MaxDesiredWidth : 1;                              // 0x0170:4 (0x0001)  
	bool                                               bOverride_MaxDesiredHeight : 1;                             // 0x0170:5 (0x0001)  
	bool                                               bOverride_MinAspectRatio : 1;                               // 0x0170:6 (0x0001)  
	bool                                               bOverride_MaxAspectRatio : 1;                               // 0x0170:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0171   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                         // [0x25889a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x25880a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                   // [0x2588020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	// void SetMinAspectRatio(float InMinAspectRatio);                                                                       // [0x2587fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                     // [0x2587f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                   // [0x2587ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                       // [0x2587e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                       // [0x2587c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                            // [0x2586b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                          // [0x2586af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                         // [0x2586ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	// void ClearMinAspectRatio();                                                                                           // [0x2586ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                          // [0x2586a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                         // [0x2586a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                           // [0x2586a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                           // [0x2586a30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(1,1286) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1287) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x25888a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2588230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2587d10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);                                 // [0x2588d20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);                              // [0x2588c20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);                                         // [0x2588b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);                                      // [0x2588a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // [0x2587700] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // [0x25875b0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);      // [0x25874b0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x25872d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                            // [0x25871d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                             // [0x25870d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// FVector2D GetLocalTopLeft(FGeometry& Geometry);                                                                       // [0x2586f80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                          // [0x2586ec0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                       // [0x2586e00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                           // [0x2586b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x25868e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                         // [0x25867e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
struct FSlateMeshVertex
{ 
	FVector2D                                          Position;                                                   // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0014   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x001C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0024   (0x0008)  
	FVector2D                                          UV4;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV5;                                                        // 0x0034   (0x0008)  
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0038 (0x000028 - 0x000060)
class USlateVectorArtData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FSlateMeshVertex>                           VertexData;                                                 // 0x0028   (0x0010)  
	TArray<uint32_t>                                   IndexData;                                                  // 0x0038   (0x0010)  
	class UMaterialInterface*                          Material;                                                   // 0x0048   (0x0008)  
	FVector2D                                          ExtentMin;                                                  // 0x0050   (0x0008)  
	FVector2D                                          ExtentMax;                                                  // 0x0058   (0x0008)  
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	SDK_UNDEFINED(24,1288) /* FText */                 __um(AccessibleText);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(16,1289) /* FDelegateProperty */     __um(AccessibleTextDelegate);                               // 0x0048   (0x0010)  
	SDK_UNDEFINED(24,1290) /* FText */                 __um(AccessibleSummaryText);                                // 0x0058   (0x0018)  
	SDK_UNDEFINED(16,1291) /* FDelegateProperty */     __um(AccessibleSummaryTextDelegate);                        // 0x0070   (0x0010)  
};

/// Class /Script/UMG.Spacer
/// Size: 0x0018 (0x000108 - 0x000120)
class USpacer : public UWidget
{ 
public:
	FVector2D                                          Size;                                                       // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x258c600] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x0410 (0x000108 - 0x000518)
class USpinBox : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0108   (0x0004)  
	SDK_UNDEFINED(16,1292) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x010C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FSpinBoxStyle                                      WidgetStyle;                                                // 0x0120   (0x02E8)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0408   (0x0008)  
	int32_t                                            MinFractionalDigits;                                        // 0x0410   (0x0004)  
	int32_t                                            MaxFractionalDigits;                                        // 0x0414   (0x0004)  
	bool                                               bAlwaysUsesDeltaSnap;                                       // 0x0418   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0419   (0x0003)  MISSED
	float                                              Delta;                                                      // 0x041C   (0x0004)  
	float                                              SliderExponent;                                             // 0x0420   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0424   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0428   (0x0050)  
	SDK_UNDEFINED(1,1293) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0478   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0479   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x047C   (0x0004)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0480   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0481   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0482   (0x0006)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x0488   (0x0028)  
	SDK_UNDEFINED(16,1294) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x04B0   (0x0010)  
	SDK_UNDEFINED(16,1295) /* FMulticastInlineDelegate */ __um(OnValueCommitted);                                  // 0x04C0   (0x0010)  
	SDK_UNDEFINED(16,1296) /* FMulticastInlineDelegate */ __um(OnBeginSliderMovement);                             // 0x04D0   (0x0010)  
	SDK_UNDEFINED(16,1297) /* FMulticastInlineDelegate */ __um(OnEndSliderMovement);                               // 0x04E0   (0x0010)  
	bool                                               bOverride_MinValue : 1;                                     // 0x04F0:0 (0x0001)  
	bool                                               bOverride_MaxValue : 1;                                     // 0x04F0:1 (0x0001)  
	bool                                               bOverride_MinSliderValue : 1;                               // 0x04F0:2 (0x0001)  
	bool                                               bOverride_MaxSliderValue : 1;                               // 0x04F0:3 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x04F1   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x04F4   (0x0004)  
	float                                              MaxValue;                                                   // 0x04F8   (0x0004)  
	float                                              MinSliderValue;                                             // 0x04FC   (0x0004)  
	float                                              MaxSliderValue;                                             // 0x0500   (0x0004)  
	unsigned char                                      UnknownData06_6[0x14];                                      // 0x0504   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	// void SetValue(float NewValue);                                                                                        // [0x258cb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                     // [0x258c380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                               // [0x258c280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	// void SetMinFractionalDigits(int32_t NewValue);                                                                        // [0x258c200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                     // [0x258c100] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                               // [0x258c000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	// void SetMaxFractionalDigits(int32_t NewValue);                                                                        // [0x258bf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x258bba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	// void SetDelta(float NewValue);                                                                                        // [0x258b8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                          // [0x258b530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);           // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                    // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                               // [0x15dd8c0] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                     // [0x258b500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                  // [0x258b2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                            // [0x258b280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	// int32_t GetMinFractionalDigits();                                                                                     // [0x258b250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                  // [0x258b220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                            // [0x258b1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	// int32_t GetMaxFractionalDigits();                                                                                     // [0x258b1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	// float GetDelta();                                                                                                     // [0x258b130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// bool GetAlwaysUsesDeltaSnap();                                                                                        // [0x258b100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                 // [0x258b0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                           // [0x258b080] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                 // [0x258b060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                           // [0x258b040] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000060 - 0x000068)
class UTextBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.TextBinding.GetTextValue
	// FText GetTextValue();                                                                                                 // [0x258b430] Final|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                             // [0x258b310] Final|Native|Public|Const 
};

/// Class /Script/UMG.TextBlock
/// Size: 0x0178 (0x000128 - 0x0002A0)
class UTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1298) /* FText */                 __um(Text);                                                 // 0x0128   (0x0018)  
	SDK_UNDEFINED(16,1299) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0140   (0x0010)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0150   (0x0028)  
	SDK_UNDEFINED(16,1300) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x0178   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0188   (0x0050)  
	FSlateBrush                                        StrikeBrush;                                                // 0x01D8   (0x0088)  
	FVector2D                                          ShadowOffset;                                               // 0x0260   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,1301) /* FDelegateProperty */     __um(ShadowColorAndOpacityDelegate);                        // 0x0278   (0x0010)  
	float                                              MinDesiredWidth;                                            // 0x0288   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x028C   (0x0001)  
	bool                                               bAutoWrapText;                                              // 0x028D   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x028E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x028F   (0x0011)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                           // [0x258ca30] Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                       // [0x258c800] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                       // [0x258c580] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                  // [0x258c500] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x258c480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x258c180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x258ba70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                               // [0x258b800] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x258b770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                      // [0x258b390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                          // [0x258b190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                             // [0x258b160] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00A8 (0x000108 - 0x0001B0)
class UThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0108   (0x0004)  
	bool                                               bAnimateHorizontally;                                       // 0x010C   (0x0001)  
	bool                                               bAnimateVertically;                                         // 0x010D   (0x0001)  
	bool                                               bAnimateOpacity;                                            // 0x010E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x010F   (0x0001)  MISSED
	class USlateBrushAsset*                            PieceImage;                                                 // 0x0110   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0118   (0x0088)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x258c400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                 // [0x258b6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                       // [0x258b650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                             // [0x258b5c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0020 (0x000368 - 0x000388)
class UTileView : public UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0368   (0x0004)  
	float                                              EntryWidth;                                                 // 0x036C   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0370   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0371   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0372   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	// void SetEntryWidth(float NewWidth);                                                                                   // [0x258b9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	// void SetEntryHeight(float NewHeight);                                                                                 // [0x258b970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0058 (0x000368 - 0x0003C0)
class UTreeView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0368   (0x0010)  MISSED
	SDK_UNDEFINED(16,1302) /* FDelegateProperty */     __um(BP_OnGetItemChildren);                                 // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,1303) /* FMulticastInlineDelegate */ __um(BP_OnItemExpansionChanged);                         // 0x0388   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0398   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	// void SetItemExpansion(class UObject* item, bool bExpandItem);                                                         // [0x258bd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	// void ExpandAll();                                                                                                     // [0x258b0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	// void CollapseAll();                                                                                                   // [0x258b0c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0780 (0x000028 - 0x0007A8)
class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x408];                                     // 0x0000   (0x0408)  MISSED
	class UWidgetAnimation*                            Animation;                                                  // 0x0408   (0x0008)  
	unsigned char                                      UnknownData01_6[0x398];                                     // 0x0410   (0x0398)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	// void SetUserTag(FName InUserTag);                                                                                     // [0x2592bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	// FName GetUserTag();                                                                                                   // [0x2591540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1304) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,1305) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Row;                                                        // 0x003C   (0x0004)  
	int32_t                                            Column;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2592c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x2592aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x25924b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x25922c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0038   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	SDK_UNDEFINED(1,1306) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1307) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x2596590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x2596330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x2595ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x2595940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0038 (0x000140 - 0x000178)
class UViewport : public UContentWidget
{ 
public:
	FLinearColor                                       BackgroundColor;                                            // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0150   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	// class AActor* Spawn(class UClass* ActorClass);                                                                        // [0x25967b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                              // [0x25966a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                               // [0x2596610] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x25953b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// class UWorld* GetViewportWorld();                                                                                     // [0x25953f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                            // [0x2595370] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UVisibilityBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                          // [0x2595340] Final|Native|Public|Const 
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetAnimationBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0008)  
	FName                                              SlotWidgetName;                                             // 0x0008   (0x0008)  
	FGuid                                              AnimationGuid;                                              // 0x0010   (0x0010)  
	bool                                               bIsRootWidget;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000348 - 0x000378)
class UWidgetAnimation : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0348   (0x0008)  
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                          // 0x0350   (0x0010)  
	bool                                               bLegacyFinishOnStop;                                        // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	SDK_UNDEFINED(16,1308) /* FString */               __um(DisplayLabel);                                         // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                               // [0x2596a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                              // [0x2596940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UUserWidget* Widget);                                                        // [0x25968c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UUserWidget* Widget);                                                       // [0x2596840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                 // [0x25952d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                   // [0x2595110] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	// void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                   // [0x2594ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	// void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                  // [0x2594df0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBlueprintWidgetAnimationDelegateBinding
{ 
	EWidgetAnimationEvent                              Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AnimationToBind;                                            // 0x0004   (0x0008)  
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	FName                                              UserTag;                                                    // 0x0014   (0x0008)  
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
public:
	TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings;                            // 0x0028   (0x0010)  
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1309) /* FMulticastInlineDelegate */ __um(Finished);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x25988b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x25986b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000060 - 0x000060)
class UWidgetBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// class UWidget* GetValue();                                                                                            // [0x259a990] Final|Native|Public|Const 
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDelegateRuntimeBinding
{ 
	SDK_UNDEFINED(16,1310) /* FString */               __um(ObjectName);                                           // 0x0000   (0x0010)  
	FName                                              PropertyName;                                               // 0x0010   (0x0008)  
	FName                                              FunctionName;                                               // 0x0018   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0020   (0x0028)  
	EBindingKind                                       Kind;                                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0070 (0x000328 - 0x000398)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	class UWidgetTree*                                 WidgetTree;                                                 // 0x0328   (0x0008)  
	bool                                               bAllowTemplate : 1;                                         // 0x0330:0 (0x0001)  
	bool                                               bAllowDynamicCreation : 1;                                  // 0x0330:1 (0x0001)  
	bool                                               bValidTemplate : 1;                                         // 0x0330:2 (0x0001)  
	bool                                               bTemplateInitialized : 1;                                   // 0x0330:3 (0x0001)  
	bool                                               bCookedTemplate : 1;                                        // 0x0330:4 (0x0001)  
	bool                                               bClassRequiresNativeTick : 1;                               // 0x0330:5 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0331   (0x0007)  MISSED
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                   // 0x0338   (0x0010)  
	TArray<class UWidgetAnimation*>                    Animations;                                                 // 0x0348   (0x0010)  
	TArray<FName>                                      NamedSlots;                                                 // 0x0358   (0x0010)  
	SDK_UNDEFINED(40,1311) /* TWeakObjectPtr<UUserWidget*> */ __um(TemplateAsset);                                 // 0x0368   (0x0028)  
	class UUserWidget*                                 Template;                                                   // 0x0390   (0x0008)  
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                          // [0x259bee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                              // [0x259be70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x259bce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate);                                             // [0x259bc50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                // [0x259bbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);                           // [0x2598170] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                         // [0x259bab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode); // [0x259b9c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport); // [0x259b8c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(class APlayerController* PlayerController);                                                // [0x259b850] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // [0x259b710] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // [0x259b5d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x259b4a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                        // [0x259b480] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // [0x259b330] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);                                        // [0x259b180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);                              // [0x259b180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                            // [0x259b160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                  // [0x259b070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                         // [0x2598410] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                     // [0x15dd8c0] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                        // [0x259afc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);                           // [0x259ae30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);                 // [0x259aca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);                                                   // [0x259ab90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                            // [0x259aa60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                // [0x259aa30] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                // [0x259a9c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x259a820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                  // [0x259a6a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                      // [0x259a550] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                // [0x259a470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                              // [0x259a350] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                  // [0x259a270] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                               // [0x259a0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// class UDragDropOperation* GetDragDroppingContent();                                                                   // [0x259a0c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                    // [0x2599f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                             // [0x2599dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// class UObject* GetBrushResource(FSlateBrush& Brush);                                                                  // [0x2599c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* Interface, bool TopLevelOnly); // [0x2599ae0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly); // [0x2599980] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                          // [0x2599890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, class UFont* Font, int32_t FontSize, FName FontTypeFace, FLinearColor Tint); // [0x2599630] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);                       // [0x25994b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x25992e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x25990e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint); // [0x2598f30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                               // [0x2598f10] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);       // [0x2598cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);                         // [0x2598af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);                                      // [0x2598630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer); // [0x2598540] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                     // [0x2598410] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                         // [0x25982e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);                // [0x2598170] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                // [0x2598150] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0120 (0x000430 - 0x000550)
class UWidgetComponent : public UMeshComponent
{ 
public:
	EWidgetSpace                                       Space;                                                      // 0x0430   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x0431   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0432   (0x0006)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0438   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x0440   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x0448   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x0449   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x044A   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x044C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0450   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x0458   (0x0008)  
	bool                                               bDrawAtDesiredSize;                                         // 0x0460   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	FVector2D                                          Pivot;                                                      // 0x0464   (0x0008)  
	bool                                               bReceiveHardwareInput;                                      // 0x046C   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x046D   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x046E   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x046F   (0x0001)  
	class ULocalPlayer*                                OwnerPlayer;                                                // 0x0470   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x0478   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x0488   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x0498   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x049C   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x049D   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x049E   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x049F   (0x0001)  MISSED
	class UUserWidget*                                 Widget;                                                     // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData05_5[0x20];                                      // 0x04A8   (0x0020)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x04C8   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial;                                        // 0x04D0   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                               // 0x04D8   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial;                                             // 0x04E0   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                    // 0x04E8   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial;                                             // 0x04F0   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                    // 0x04F8   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0500   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0508   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0510   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0511   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x0512   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x0514   (0x0008)  
	int32_t                                            LayerZOrder;                                                // 0x051C   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x0520   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0521   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x0524   (0x0004)  
	unsigned char                                      UnknownData08_6[0x28];                                      // 0x0528   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	// void SetWindowVisibility(EWindowVisibility InVisibility);                                                             // [0x259f160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	// void SetWindowFocusable(bool bInWindowFocusable);                                                                     // [0x259f0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	// void SetWidgetSpace(EWidgetSpace NewSpace);                                                                           // [0x259f050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(class UUserWidget* Widget);                                                                            // [0x259efc0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	// void SetTwoSided(bool bWantTwoSided);                                                                                 // [0x259ef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                     // [0x259eeb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	// void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                               // [0x259ee30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	// void SetRedrawTime(float InRedrawTime);                                                                               // [0x259edb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	// void SetPivot(FVector2D& InPivot);                                                                                    // [0x259ed20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);                                                                 // [0x259eca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	// void SetManuallyRedraw(bool bUseManualRedraw);                                                                        // [0x259ec10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	// void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                             // [0x259eb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                     // [0x259ea90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	// void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                 // [0x259ea10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	// void SetCylinderArcAngle(float InCylinderArcAngle);                                                                   // [0x259e990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                             // [0x259e830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                 // [0x259e650] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	// EWindowVisibility GetWindowVisiblility();                                                                             // [0x259ded0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	// bool GetWindowFocusable();                                                                                            // [0x259deb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	// EWidgetSpace GetWidgetSpace();                                                                                        // [0x259de90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// class UUserWidget* GetUserWidgetObject();                                                                             // [0x259dc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	// bool GetTwoSided();                                                                                                   // [0x259dc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	// bool GetTickWhenOffscreen();                                                                                          // [0x259dc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                      // [0x259dc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	// float GetRedrawTime();                                                                                                // [0x259dc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	// FVector2D GetPivot();                                                                                                 // [0x259db20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// class ULocalPlayer* GetOwnerPlayer();                                                                                 // [0x259daf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// class UMaterialInstanceDynamic* GetMaterialInstance();                                                                // [0x259d8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	// bool GetManuallyRedraw();                                                                                             // [0x213ab50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	// EWidgetGeometryMode GetGeometryMode();                                                                                // [0x259d800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                              // [0x259d7c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	// bool GetDrawAtDesiredSize();                                                                                          // [0x259d7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	// float GetCylinderArcAngle();                                                                                          // [0x259d780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	// FVector2D GetCurrentDrawSize();                                                                                       // [0x259d740] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x01F0 (0x0001F0 - 0x0003E0)
class UWidgetInteractionComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1312) /* FMulticastInlineDelegate */ __um(OnHoveredWidgetChanged);                            // 0x01F0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0200   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x0210   (0x0004)  
	float                                              PointerIndex;                                               // 0x0214   (0x0004)  
	SDK_UNDEFINED(1,1313) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x0218   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x021C   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x0220   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x0221   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x0222   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0223   (0x0001)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0224   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x0234   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x02B0   (0x0088)  
	FVector2D                                          LocalHitLocation;                                           // 0x0338   (0x0008)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x0340   (0x0008)  
	class UWidgetComponent*                            HoveredWidgetComponent;                                     // 0x0348   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x0350   (0x0088)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x03D8   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x03D9   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x03DA   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x03DB   (0x0005)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	// void SetFocus(class UWidget* FocusWidget);                                                                            // [0x259eb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                       // [0x259e8b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                   // [0x259e6f0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                  // [0x259e670] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                     // [0x259e500] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                            // [0x259e400] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                       // [0x259e1c0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                // [0x259e080] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                    // [0x259df80] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                      // [0x259df50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                    // [0x259df20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                         // [0x259def0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                        // [0x259d850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// class UWidgetComponent* GetHoveredWidgetComponent();                                                                  // [0x259d820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                         // [0x259d700] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x0008)  
	SDK_UNDEFINED(8,1314) /* TWeakObjectPtr<UWidget*> */ __um(Widget);                                             // 0x000C   (0x0008)  
	SDK_UNDEFINED(16,1315) /* FDelegateProperty */     __um(CustomDelegate);                                       // 0x0014   (0x0010)  
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00D8 (0x000028 - 0x000100)
class UWidgetNavigation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FWidgetNavigationData                              Up;                                                         // 0x0028   (0x0024)  
	FWidgetNavigationData                              Down;                                                       // 0x004C   (0x0024)  
	FWidgetNavigationData                              Left;                                                       // 0x0070   (0x0024)  
	FWidgetNavigationData                              Right;                                                      // 0x0094   (0x0024)  
	FWidgetNavigationData                              Next;                                                       // 0x00B8   (0x0024)  
	FWidgetNavigationData                              Previous;                                                   // 0x00DC   (0x0024)  
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000140 - 0x000158)
class UWidgetSwitcher : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0144   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                             // [0x25a0b80] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x25a0af0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                       // [0x25a0a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                              // [0x25a0a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x25a0a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                     // [0x25a09d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1316) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1317) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x25a11e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25a0fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x25a0d20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0008 (0x000028 - 0x000030)
class UWidgetTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UWidget*                                     RootWidget;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000140 - 0x000160)
class UWindowTitleBarArea : public UContentWidget
{ 
public:
	bool                                               bWindowButtonsEnabled;                                      // 0x0140   (0x0001)  
	bool                                               bDoubleClickTogglesFullscreen;                              // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x0142   (0x001E)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x25a1260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25a1030] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x25a0da0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,1318) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,1319) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x25a12e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25a10c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x25a0e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0020 (0x000140 - 0x000160)
class UWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0140   (0x0008)  
	float                                              WrapWidth;                                                  // 0x0148   (0x0004)  
	bool                                               bExplicitWrapWidth;                                         // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x014D   (0x0013)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                        // [0x25a0f20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	// class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                        // [0x25a0940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	bool                                               bFillEmptySpace;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FillSpanWhenLessThan;                                       // 0x004C   (0x0004)  
	SDK_UNDEFINED(1,1320) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1321) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                       // [0x25a1360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x25a1150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                 // [0x25a0ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                           // [0x25a0ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                       // [0x25a0c10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.MovieScene2DTransformSectionTemplate
/// Size: 0x0468 (0x000048 - 0x0004B0)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            Translation;                                                // 0x0048   (0x0140)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0188   (0x00A0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x0228   (0x0140)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0368   (0x0140)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x04A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04A9   (0x0003)  MISSED
	FMovieScene2DTransformMask                         Mask;                                                       // 0x04AC   (0x0004)  
};

/// Struct /Script/UMG.MovieSceneMarginSectionTemplate
/// Size: 0x0288 (0x000048 - 0x0002D0)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x0048   (0x00A0)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x00E8   (0x00A0)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0188   (0x00A0)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x0228   (0x00A0)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
};

/// Struct /Script/UMG.MovieSceneWidgetMaterialSectionTemplate
/// Size: 0x0010 (0x000080 - 0x000090)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x0080   (0x0010)  
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0268 (0x000008 - 0x000270)
struct FRichTextStyleRow : FTableRowBase
{ 
	FTextBlockStyle                                    TextStyle;                                                  // 0x0008   (0x0268)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRichImageRow : FTableRowBase
{ 
	FSlateBrush                                        Brush;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

