
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/ImgMediaFactory.ImgMediaSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UImgMediaSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FFrameRate                                         DefaultFrameRate;                                           // 0x0028   (0x0008)  
	float                                              CacheBehindPercentage;                                      // 0x0030   (0x0004)  
	float                                              CacheSizeGB;                                                // 0x0034   (0x0004)  
	int32_t                                            CacheThreads;                                               // 0x0038   (0x0004)  
	int32_t                                            CacheThreadStackSizeKB;                                     // 0x003C   (0x0004)  
	float                                              GlobalCacheSizeGB;                                          // 0x0040   (0x0004)  
	bool                                               UseGlobalCache;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	uint32_t                                           ExrDecoderThreads;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2948) /* FString */               __um(DefaultProxy);                                         // 0x0050   (0x0010)  
	bool                                               UseDefaultProxy;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

