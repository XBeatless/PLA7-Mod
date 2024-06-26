
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogUnsubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSessionServiceLogSubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSessionServiceLog
{ 
	FName                                              Category;                                                   // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,3123) /* FString */               __um(Data);                                                 // 0x0008   (0x0010)  
	FGuid                                              InstanceID;                                                 // 0x0018   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0028   (0x0008)  
	char                                               Verbosity;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSessionServicePong
{ 
	bool                                               Authorized;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,3124) /* FString */               __um(BuildDate);                                            // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,3125) /* FString */               __um(DeviceName);                                           // 0x0018   (0x0010)  
	FGuid                                              InstanceID;                                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3126) /* FString */               __um(InstanceName);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3127) /* FString */               __um(PlatformName);                                         // 0x0048   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,3128) /* FString */               __um(SessionName);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,3129) /* FString */               __um(SessionOwner);                                         // 0x0078   (0x0010)  
	bool                                               Standalone;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSessionServicePing
{ 
	SDK_UNDEFINED(16,3130) /* FString */               __um(UserName);                                             // 0x0000   (0x0010)  
};

