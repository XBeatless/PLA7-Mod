
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)  
};

