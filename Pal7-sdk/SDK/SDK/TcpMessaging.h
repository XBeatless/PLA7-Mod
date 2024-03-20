
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UTcpMessagingSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               EnableTransport;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(16,3154) /* FString */               __um(ListenEndpoint);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3155) /* TArray<FString> */       __um(ConnectToEndpoints);                                   // 0x0040   (0x0010)  
	int32_t                                            ConnectionRetryDelay;                                       // 0x0050   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

