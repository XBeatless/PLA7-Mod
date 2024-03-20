
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: KantanChartsSlate
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/KantanChartsUMG.KantanChart
/// Size: 0x0050 (0x000108 - 0x000158)
class UKantanChart : public UWidget
{ 
public:
	FMargin                                            Margins;                                                    // 0x0108   (0x0010)  
	SDK_UNDEFINED(24,1322) /* FText */                 __um(ChartTitle);                                           // 0x0118   (0x0018)  
	FMargin                                            TitlePadding;                                               // 0x0130   (0x0010)  
	float                                              UpdateTickRate;                                             // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0144   (0x0014)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.KantanChart.SetUpdateTickRate
	// void SetUpdateTickRate(float InRate);                                                                                 // [0x7c31a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChart.SetMargins
	// void SetMargins(FMargin& InMargins);                                                                                  // [0x7c2d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChart.SetChartTitlePadding
	// void SetChartTitlePadding(FMargin& InPadding);                                                                        // [0x7c27b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChart.SetChartTitle
	// void SetChartTitle(FText& InTitle);                                                                                   // [0x7c26e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KantanChartsUMG.CategoryStyleManualMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCategoryStyleManualMapping
{ 
	FName                                              CategoryId;                                                 // 0x0000   (0x0008)  
	FKantanCategoryStyle                               Style;                                                      // 0x0008   (0x0018)  
};

/// Class /Script/KantanChartsUMG.KantanCategoryChart
/// Size: 0x0020 (0x000158 - 0x000178)
class UKantanCategoryChart : public UKantanChart
{ 
public:
	bool                                               bAutoPerCategoryStyles;                                     // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0159   (0x0007)  MISSED
	class UKantanCategoryStyleSet*                     CategoryStyleSet;                                           // 0x0160   (0x0008)  
	TArray<FCategoryStyleManualMapping>                ManualStyleMappings;                                        // 0x0168   (0x0010)  


	/// Functions
	// Function /Script/KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride
	// void AddCategoryStyleOverride(FName CategoryId, FLinearColor Color);                                                  // [0x7c0d80] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.KantanBarChartBase
/// Size: 0x0188 (0x000178 - 0x000300)
class UKantanBarChartBase : public UKantanCategoryChart
{ 
public:
	FKantanBarChartStyle                               WidgetStyle;                                                // 0x0178   (0x0128)  
	EKantanBarChartOrientation                         Orientation;                                                // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	float                                              MaxBarValue;                                                // 0x02A4   (0x0004)  
	EKantanBarLabelPosition                            LabelPosition;                                              // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              BarToGapRatio;                                              // 0x02AC   (0x0004)  
	EKantanBarValueExtents                             ValueExtentsDisplay;                                        // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	FCartesianAxisConfig                               ValueAxisCfg;                                               // 0x02B8   (0x0048)  


	/// Functions
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig
	// void SetValueAxisConfig(FCartesianAxisConfig& InCfg);                                                                 // [0x7c3320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetOrientation
	// void SetOrientation(EKantanBarChartOrientation InOrientation);                                                        // [0x7c2ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetMaxBarValue
	// void SetMaxBarValue(float InMaxValue);                                                                                // [0x7c2e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetLabelPosition
	// void SetLabelPosition(EKantanBarLabelPosition InPosition);                                                            // [0x7c2b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay
	// void SetExtentsDisplay(EKantanBarValueExtents InExtents);                                                             // [0x7c2a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio
	// void SetBarToGapRatio(float InRatio);                                                                                 // [0x7c25e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.BarChart
/// Size: 0x0008 (0x000300 - 0x000308)
class UBarChart : public UKantanBarChartBase
{ 
public:
	class UObject*                                     DataSource;                                                 // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/KantanChartsUMG.BarChart.SetDatasource
	// bool SetDatasource(class UObject* InDatasource);                                                                      // [0x7c28d0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KantanChartsUMG.SeriesStyleManualMapping
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSeriesStyleManualMapping
{ 
	FName                                              SeriesId;                                                   // 0x0000   (0x0008)  
	FKantanSeriesStyle                                 Style;                                                      // 0x0008   (0x0020)  
};

/// Class /Script/KantanChartsUMG.KantanCartesianChartBase
/// Size: 0x0208 (0x000158 - 0x000360)
class UKantanCartesianChartBase : public UKantanChart
{ 
public:
	FKantanCartesianChartStyle                         WidgetStyle;                                                // 0x0158   (0x0120)  
	FKantanCartesianPlotScale                          PlotScale;                                                  // 0x0278   (0x0024)  
	SDK_UNDEFINED(1,1323) /* TEnumAsByte<EKantanDataPointSize> */ __um(DataPointSize);                             // 0x029C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x029D   (0x0003)  MISSED
	FCartesianAxisConfig                               XAxisCfg;                                                   // 0x02A0   (0x0048)  
	FCartesianAxisConfig                               YAxisCfg;                                                   // 0x02E8   (0x0048)  
	FMargin                                            AxisTitlePadding;                                           // 0x0330   (0x0010)  
	class UKantanSeriesStyleSet*                       SeriesStyleSet;                                             // 0x0340   (0x0008)  
	TArray<FSeriesStyleManualMapping>                  ManualStyleMappings;                                        // 0x0348   (0x0010)  
	bool                                               bAntiAlias;                                                 // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0359   (0x0007)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig
	// void SetYAxisConfig(FCartesianAxisConfig& InCfg);                                                                     // [0x7c35a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig
	// void SetXAxisConfig(FCartesianAxisConfig& InCfg);                                                                     // [0x7c3460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange
	// void SetPlotScaleByRange(FCartesianAxisRange& InRangeX, FCartesianAxisRange& InRangeY);                               // [0x7c3010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetPlotScale
	// void SetPlotScale(FVector2D& InScale, FVector2D& InFocalCoords);                                                      // [0x7c2f40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize
	// void SetDataPointSize(TEnumAsByte<EKantanDataPointSize> InSize);                                                      // [0x7c2850] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding
	// void SetAxisTitlePadding(FMargin& InPadding);                                                                         // [0x7c23c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.EnableSeries
	// void EnableSeries(FName ID, bool bEnable);                                                                            // [0x7c22f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries
	// void ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines);                                                    // [0x7c21e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride
	// void AddSeriesStyleOverride(FName SeriesId, class UKantanPointStyle* PointStyle, FLinearColor Color);                 // [0x7c0e50] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.KantanCartesianPlotBase
/// Size: 0x0000 (0x000360 - 0x000360)
class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{ 
public:
};

/// Class /Script/KantanChartsUMG.CartesianPlot
/// Size: 0x0008 (0x000360 - 0x000368)
class UCartesianPlot : public UKantanCartesianPlotBase
{ 
public:
	class UObject*                                     DataSource;                                                 // 0x0360   (0x0008)  


	/// Functions
	// Function /Script/KantanChartsUMG.CartesianPlot.SetDatasource
	// bool SetDatasource(class UObject* InDatasource);                                                                      // [0x7c2960] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.KantanChartLegend
/// Size: 0x00C8 (0x000108 - 0x0001D0)
class UKantanChartLegend : public UWidget
{ 
public:
	FMargin                                            Margins;                                                    // 0x0108   (0x0010)  
	FMargin                                            SeriesPadding;                                              // 0x0118   (0x0010)  
	FSlateBrush                                        Background;                                                 // 0x0128   (0x0088)  
	int32_t                                            FontSize;                                                   // 0x01B0   (0x0004)  
	SDK_UNDEFINED(8,1324) /* TWeakObjectPtr<UKantanCartesianChartBase*> */ __um(Chart);                            // 0x01B4   (0x0008)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x01BC   (0x0014)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.KantanChartLegend.SetSeriesPadding
	// void SetSeriesPadding(FMargin& InPadding);                                                                            // [0x7c3100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChartLegend.SetMargins
	// void SetMargins(FMargin& InMargins);                                                                                  // [0x7c2da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChartLegend.SetFontSize
	// void SetFontSize(int32_t InFontSize);                                                                                 // [0x7c2b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChartLegend.SetChart
	// void SetChart(class UKantanCartesianChartBase* InChart);                                                              // [0x7c2660] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanChartLegend.SetBackground
	// void SetBackground(FSlateBrush& InBrush);                                                                             // [0x7c2460] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.KantanTimeSeriesPlotBase
/// Size: 0x0030 (0x000360 - 0x000390)
class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{ 
public:
	bool                                               bUseFixedTimeRange;                                         // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0361   (0x0003)  MISSED
	float                                              DisplayTimeRange;                                           // 0x0364   (0x0004)  
	FCartesianRangeBound                               LowerTimeBound;                                             // 0x0368   (0x0008)  
	FCartesianRangeBound                               UpperTimeBound;                                             // 0x0370   (0x0008)  
	FCartesianRangeBound                               LowerValueBound;                                            // 0x0378   (0x0008)  
	FCartesianRangeBound                               UpperValueBound;                                            // 0x0380   (0x0008)  
	bool                                               bExtendValueRangeToZero;                                    // 0x0388   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0389   (0x0007)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperValueBound
	// void SetUpperValueBound(FCartesianRangeBound InUpperBound);                                                           // [0x7c32a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperTimeBound
	// void SetUpperTimeBound(FCartesianRangeBound InUpperBound);                                                            // [0x7c3220] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerValueBound
	// void SetLowerValueBound(FCartesianRangeBound InLowerBound);                                                           // [0x7c2c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.KantanTimeSeriesPlotBase.SetLowerTimeBound
	// void SetLowerTimeBound(FCartesianRangeBound InLowerBound);                                                            // [0x7c2c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.SimpleBarChart
/// Size: 0x0018 (0x000300 - 0x000318)
class USimpleBarChart : public UKantanBarChartBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0300   (0x0018)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue
	// void BP_UpdateCategoryValue(FName ID, float value, bool& bSuccess);                                                   // [0x7c20c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleBarChart.BP_RemoveCategory
	// void BP_RemoveCategory(FName ID, bool& bSuccess);                                                                     // [0x7c1e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories
	// void BP_RemoveAllCategories();                                                                                        // [0x7c1df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId
	// void BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess);                                                      // [0x7c10a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleBarChart.BP_AddCategory
	// void BP_AddCategory(FText Name, FName& CatId);                                                                        // [0x7c0f60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.SimpleCartesianPlot
/// Size: 0x0018 (0x000360 - 0x000378)
class USimpleCartesianPlot : public UKantanCartesianPlotBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0360   (0x0018)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries
	// void BP_RemoveSeries(FName ID, bool& bSuccess);                                                                       // [0x7c1f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries
	// void BP_RemoveAllSeries();                                                                                            // [0x7c1e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId
	// void BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);      // [0x7c1970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries
	// void BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);                     // [0x7c1570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint
	// void BP_AddDatapoint(FName SeriesId, FVector2D& Point, bool& bSuccess);                                               // [0x7c1210] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.SimpleTimeSeriesPlot
/// Size: 0x0018 (0x000390 - 0x0003A8)
class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0390   (0x0018)  MISSED


	/// Functions
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries
	// void BP_RemoveSeries(FName ID, bool& bSuccess);                                                                       // [0x7c1ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries
	// void BP_RemoveAllSeries();                                                                                            // [0x7c1e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId
	// void BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);      // [0x7c1bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries
	// void BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);                     // [0x7c1770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow
	// void BP_AddDatapointNow(FName SeriesId, float value, bool& bSuccess);                                                 // [0x7c1450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint
	// void BP_AddDatapoint(FName SeriesId, FVector2D& Point, bool& bSuccess);                                               // [0x7c1330] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/KantanChartsUMG.TimeSeriesPlot
/// Size: 0x0008 (0x000390 - 0x000398)
class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{ 
public:
	class UObject*                                     DataSource;                                                 // 0x0390   (0x0008)  


	/// Functions
	// Function /Script/KantanChartsUMG.TimeSeriesPlot.SetDatasource
	// bool SetDatasource(class UObject* InDatasource);                                                                      // [0x7c29f0] Final|Native|Public|BlueprintCallable 
};

