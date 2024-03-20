
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0750 (0x000028 - 0x000778)
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x778];                                     // 0x0000   (0x0778)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistryHelpers : public UObject
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);                                                            // [0x264d7a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                         // [0x264d470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	// bool IsValid(FAssetData& InAssetData);                                                                                // [0x264c960] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	// bool IsUAsset(FAssetData& InAssetData);                                                                               // [0x264c870] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	// bool IsRedirector(FAssetData& InAssetData);                                                                           // [0x264c780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// bool IsAssetLoaded(FAssetData& InAssetData);                                                                          // [0x264c660] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	// bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);                                    // [0x264c3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	// FString GetFullName(FAssetData& InAssetData);                                                                         // [0x264c120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// FString GetExportTextName(FAssetData& InAssetData);                                                                   // [0x264bfe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	// class UClass* GetClass(FAssetData& InAssetData);                                                                      // [0x264bef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// TScriptInterface<Class> GetAssetRegistry();                                                                           // [0x264b670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	// class UObject* GetAsset(FAssetData& InAssetData);                                                                     // [0x264b460] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);                                        // [0x264b120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                  // [0x264d8e0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets
	// void SearchAllAssets(bool bSynchronousSearch);                                                                        // [0x264d3e0] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan);                                               // [0x264d2c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);                                                            // [0x264d1f0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);                                           // [0x264d0d0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                    // [0x264cd90] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// void PrioritizeSearchPath(FString PathToPrioritize);                                                                  // [0x264ccf0] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers
	// bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // [0x264cba0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies
	// bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // [0x264ca50] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	// bool IsLoadingAssets();                                                                                               // [0x264c750] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	// bool HasAssets(FName PackagePath, bool bRecursive);                                                                   // [0x264c590] Native|Public|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                  // [0x264c260] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x264bd10] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);      // [0x264bb80] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	// bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);                     // [0x264b9f0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);                                                  // [0x264b6b0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);                                     // [0x264b550] Native|Public|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                 // [0x264b390] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                   // [0x264b240] Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Struct /Script/AssetRegistry.ARFilter
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ObjectPaths;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	SDK_UNDEFINED(80,924) /* TSet<FName> */            __um(RecursiveClassesExclusionSet);                         // 0x0090   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x00E0   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x00E1   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00E3   (0x0005)  MISSED
};

/// Struct /Script/AssetRegistry.AssetBundleEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAssetBundleEntry
{ 
	FPrimaryAssetId                                    BundleScope;                                                // 0x0000   (0x0010)  
	FName                                              BundleName;                                                 // 0x0010   (0x0008)  
	TArray<FSoftObjectPath>                            BundleAssets;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAssetData
{ 
	FName                                              ObjectPath;                                                 // 0x0000   (0x0008)  
	FName                                              PackageName;                                                // 0x0008   (0x0008)  
	FName                                              PackagePath;                                                // 0x0010   (0x0008)  
	FName                                              AssetName;                                                  // 0x0018   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,925) /* FString */                __um(value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (0x000000 - 0x000005)
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

