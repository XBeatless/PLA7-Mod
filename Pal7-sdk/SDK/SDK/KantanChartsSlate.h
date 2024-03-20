
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Enum /Script/KantanChartsSlate.EChartAxisPosition
/// Size: 0x04
enum class EChartAxisPosition : uint8_t
{
	EChartAxisPosition__LeftBottom                                                   = 0,
	EChartAxisPosition__RightTop                                                     = 1,
	EChartAxisPosition__Floating                                                     = 2,
	EChartAxisPosition__EChartAxisPosition_MAX                                       = 3
};

/// Enum /Script/KantanChartsSlate.EKantanDataPointSize
/// Size: 0x04
enum class EKantanDataPointSize : uint8_t
{
	EKantanDataPointSize__Small                                                      = 0,
	EKantanDataPointSize__Medium                                                     = 1,
	EKantanDataPointSize__Large                                                      = 2,
	EKantanDataPointSize__EKantanDataPointSize_MAX                                   = 3
};

/// Enum /Script/KantanChartsSlate.ECartesianRangeBoundType
/// Size: 0x04
enum class ECartesianRangeBoundType : uint8_t
{
	ECartesianRangeBoundType__FixedValue                                             = 0,
	ECartesianRangeBoundType__FitToData                                              = 1,
	ECartesianRangeBoundType__FitToDataRounded                                       = 2,
	ECartesianRangeBoundType__ECartesianRangeBoundType_MAX                           = 3
};

/// Enum /Script/KantanChartsSlate.ECartesianScalingType
/// Size: 0x03
enum class ECartesianScalingType : uint8_t
{
	ECartesianScalingType__FixedScale                                                = 0,
	ECartesianScalingType__FixedRange                                                = 1,
	ECartesianScalingType__ECartesianScalingType_MAX                                 = 2
};

/// Enum /Script/KantanChartsSlate.EKantanBarValueExtents
/// Size: 0x04
enum class EKantanBarValueExtents : uint8_t
{
	EKantanBarValueExtents__NoValueLines                                             = 0,
	EKantanBarValueExtents__ZeroLineOnly                                             = 1,
	EKantanBarValueExtents__ZeroAndMaxLines                                          = 2,
	EKantanBarValueExtents__EKantanBarValueExtents_MAX                               = 3
};

/// Enum /Script/KantanChartsSlate.EKantanBarLabelPosition
/// Size: 0x04
enum class EKantanBarLabelPosition : uint8_t
{
	EKantanBarLabelPosition__NoLabels                                                = 0,
	EKantanBarLabelPosition__Standard                                                = 1,
	EKantanBarLabelPosition__Overlaid                                                = 2,
	EKantanBarLabelPosition__EKantanBarLabelPosition_MAX                             = 3
};

/// Enum /Script/KantanChartsSlate.EKantanBarChartOrientation
/// Size: 0x03
enum class EKantanBarChartOrientation : uint8_t
{
	EKantanBarChartOrientation__Vertical                                             = 0,
	EKantanBarChartOrientation__Horizontal                                           = 1,
	EKantanBarChartOrientation__EKantanBarChartOrientation_MAX                       = 2
};

/// Struct /Script/KantanChartsSlate.KantanChartStyle
/// Size: 0x0110 (0x000008 - 0x000118)
struct FKantanChartStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Background;                                                 // 0x0008   (0x0088)  
	FLinearColor                                       ChartLineColor;                                             // 0x0090   (0x0010)  
	float                                              ChartLineThickness;                                         // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FSlateFontInfo                                     BaseFont;                                                   // 0x00A8   (0x0050)  
	int32_t                                            TitleFontSize;                                              // 0x00F8   (0x0004)  
	int32_t                                            AxisDescriptionFontSize;                                    // 0x00FC   (0x0004)  
	int32_t                                            AxisValueFontSize;                                          // 0x0100   (0x0004)  
	FLinearColor                                       FontColor;                                                  // 0x0104   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/KantanChartsSlate.KantanBarChartStyle
/// Size: 0x0010 (0x000118 - 0x000128)
struct FKantanBarChartStyle : FKantanChartStyle
{ 
	float                                              BarOpacity;                                                 // 0x0118   (0x0004)  
	float                                              BarOutlineOpacity;                                          // 0x011C   (0x0004)  
	float                                              BarOutlineThickness;                                        // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Class /Script/KantanChartsSlate.KantanBarChartWidgetStyle
/// Size: 0x0128 (0x000030 - 0x000158)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FKantanBarChartStyle                               ChartStyle;                                                 // 0x0030   (0x0128)  
};

/// Struct /Script/KantanChartsSlate.KantanCartesianChartStyle
/// Size: 0x0008 (0x000118 - 0x000120)
struct FKantanCartesianChartStyle : FKantanChartStyle
{ 
	float                                              DataOpacity;                                                // 0x0118   (0x0004)  
	float                                              DataLineThickness;                                          // 0x011C   (0x0004)  
};

/// Class /Script/KantanChartsSlate.KantanCartesianChartWidgetStyle
/// Size: 0x0120 (0x000030 - 0x000150)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FKantanCartesianChartStyle                         ChartStyle;                                                 // 0x0030   (0x0120)  
};

/// Struct /Script/KantanChartsSlate.KantanCategoryStyle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKantanCategoryStyle
{ 
	FName                                              CategoryStyleId;                                            // 0x0000   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
};

/// Class /Script/KantanChartsSlate.KantanCategoryStyleSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UKantanCategoryStyleSet : public UDataAsset
{ 
public:
	TArray<FKantanCategoryStyle>                       Styles;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/KantanChartsSlate.KantanPointStyle
/// Size: 0x0020 (0x000030 - 0x000050)
class UKantanPointStyle : public UDataAsset
{ 
public:
	class UTexture2D*                                  DataPointTexture;                                           // 0x0030   (0x0008)  
	FIntPoint                                          PointSizeTextureOffsets;                                    // 0x0038   (0x0018)  
};

/// Struct /Script/KantanChartsSlate.KantanSeriesStyle
/// Size: 0x0020 (0x000000 - 0x000020)
struct FKantanSeriesStyle
{ 
	FName                                              StyleId;                                                    // 0x0000   (0x0008)  
	class UKantanPointStyle*                           PointStyle;                                                 // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/KantanChartsSlate.KantanSeriesStyleSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UKantanSeriesStyleSet : public UDataAsset
{ 
public:
	TArray<FKantanSeriesStyle>                         Styles;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/KantanChartsSlate.CartesianAxisInstanceConfig
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCartesianAxisInstanceConfig
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	bool                                               bShowTitle;                                                 // 0x0001   (0x0001)  
	bool                                               bShowMarkers;                                               // 0x0002   (0x0001)  
	bool                                               bShowLabels;                                                // 0x0003   (0x0001)  
};

/// Struct /Script/KantanChartsSlate.CartesianAxisConfig
/// Size: 0x0048 (0x000000 - 0x000048)
struct FCartesianAxisConfig
{ 
	SDK_UNDEFINED(24,1142) /* FText */                 __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1143) /* FText */                 __um(Unit);                                                 // 0x0018   (0x0018)  
	float                                              MarkerSpacing;                                              // 0x0030   (0x0004)  
	int32_t                                            MaxValueDigits;                                             // 0x0034   (0x0004)  
	FCartesianAxisInstanceConfig                       LeftBottomAxis;                                             // 0x0038   (0x0004)  
	FCartesianAxisInstanceConfig                       RightTopAxis;                                               // 0x003C   (0x0004)  
	FCartesianAxisInstanceConfig                       FloatingAxis;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/KantanChartsSlate.CartesianRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCartesianRangeBound
{ 
	ECartesianRangeBoundType                           Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FixedBoundValue;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/KantanChartsSlate.CartesianAxisRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCartesianAxisRange
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/KantanChartsSlate.KantanCartesianPlotScale
/// Size: 0x0024 (0x000000 - 0x000024)
struct FKantanCartesianPlotScale
{ 
	ECartesianScalingType                              Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector2D                                          Scale;                                                      // 0x0004   (0x0008)  
	FVector2D                                          FocalCoordinates;                                           // 0x000C   (0x0008)  
	FCartesianAxisRange                                RangeX;                                                     // 0x0014   (0x0008)  
	FCartesianAxisRange                                RangeY;                                                     // 0x001C   (0x0008)  
};

