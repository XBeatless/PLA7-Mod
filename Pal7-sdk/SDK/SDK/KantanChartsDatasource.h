
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/KantanChartsDatasource.KantanCartesianDatasourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UKantanCartesianDatasourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
	// FText GetSeriesName(int32_t SeriesIdx);                                                                               // [0x79d8e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
	// FName GetSeriesId(int32_t CatIdx);                                                                                    // [0x79d850] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
	// TArray<FKantanCartesianDatapoint> GetSeriesDatapoints(int32_t SeriesIdx);                                             // [0x79da90] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
	// int32_t GetNumSeries();                                                                                               // [0x79da60] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/KantanChartsDatasource.KantanCategoryDatasourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UKantanCategoryDatasourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
	// int32_t GetNumCategories();                                                                                           // [0x79da60] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
	// float GetCategoryValue(int32_t CatIdx);                                                                               // [0x79d9d0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
	// FText GetCategoryName(int32_t CatIdx);                                                                                // [0x79d8e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
	// FName GetCategoryId(int32_t CatIdx);                                                                                  // [0x79d850] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource
/// Size: 0x0018 (0x000028 - 0x000040)
class UKantanSimpleCartesianDatasource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED


	/// Functions
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
	// class UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource();                                               // [0x79db60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
	// void BP_RemoveSeries(FName ID, bool& bSuccess);                                                                       // [0x79d660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries
	// void BP_RemoveAllSeries();                                                                                            // [0x79d570] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
	// void BP_AddSeriesWithId(FName ID, FText Name, bool& bSuccess);                                                        // [0x79d3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
	// void BP_AddSeries(FText Name, FName& SeriesId);                                                                       // [0x79d2a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
	// void BP_AddDatapoint(FName SeriesId, FVector2D& Point, bool& bSuccess);                                               // [0x79d180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource
/// Size: 0x0018 (0x000028 - 0x000040)
class UKantanSimpleCategoryDatasource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED


	/// Functions
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
	// class UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();                                                 // [0x79db90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
	// void BP_UpdateCategoryValue(FName ID, float value, bool& bSuccess);                                                   // [0x79d730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
	// void BP_RemoveCategory(FName ID, bool& bSuccess);                                                                     // [0x79d590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories
	// void BP_RemoveAllCategories();                                                                                        // [0x79d550] Final|Native|Public|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
	// void BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess);                                                      // [0x79d010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
	// void BP_AddCategory(FText Name, FName& CatId);                                                                        // [0x79ced0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KantanChartsDatasource.KantanCartesianDatapoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FKantanCartesianDatapoint
{ 
	FVector2D                                          Coords;                                                     // 0x0000   (0x0008)  
};

