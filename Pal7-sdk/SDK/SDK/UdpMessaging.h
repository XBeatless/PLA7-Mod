
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x06
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX                                         = 5
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UUdpMessagingSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               EnableTransport;                                            // 0x0028   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x0029   (0x0001)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x002B   (0x0005)  MISSED
	SDK_UNDEFINED(16,3160) /* FString */               __um(UnicastEndpoint);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3161) /* FString */               __um(MulticastEndpoint);                                    // 0x0040   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0050   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	SDK_UNDEFINED(16,3162) /* TArray<FString> */       __um(StaticEndpoints);                                      // 0x0058   (0x0010)  
	bool                                               EnableTunnel;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	SDK_UNDEFINED(16,3163) /* FString */               __um(TunnelUnicastEndpoint);                                // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,3164) /* FString */               __um(TunnelMulticastEndpoint);                              // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,3165) /* TArray<FString> */       __um(RemoteTunnelEndpoints);                                // 0x0090   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

