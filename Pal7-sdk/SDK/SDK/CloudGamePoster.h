
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Struct /Script/CloudGamePoster.QuestReceiveData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FQuestReceiveData
{ 
	SDK_UNDEFINED(16,2785) /* FString */               __um(GameID);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2786) /* FString */               __um(PlatForm);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2787) /* FString */               __um(UserID);                                               // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2788) /* FString */               __um(FirstTs);                                              // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2789) /* FString */               __um(CurDayFirstTs);                                        // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2790) /* FString */               __um(LastTs);                                               // 0x0050   (0x0010)  
	int64_t                                            CurDayDuration;                                             // 0x0060   (0x0008)  
	int64_t                                            TotalDuration;                                              // 0x0068   (0x0008)  
	int64_t                                            CurrentTime;                                                // 0x0070   (0x0008)  
};

/// Struct /Script/CloudGamePoster.ReceiveData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FReceiveData
{ 
	int32_t                                            Code;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,2791) /* FString */               __um(Msg);                                                  // 0x0008   (0x0010)  
	FQuestReceiveData                                  Data;                                                       // 0x0018   (0x0078)  
};

/// Struct /Script/CloudGamePoster.QuestData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FQuestData
{ 
	SDK_UNDEFINED(16,2792) /* FString */               __um(PlatForm);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2793) /* FString */               __um(UserID);                                               // 0x0010   (0x0010)  
	int32_t                                            intervalTs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/CloudGamePoster.QuestParams
/// Size: 0x0058 (0x000000 - 0x000058)
struct FQuestParams
{ 
	SDK_UNDEFINED(16,2794) /* FString */               __um(appKey);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2795) /* FString */               __um(signature);                                            // 0x0010   (0x0010)  
	int64_t                                            Timestamp;                                                  // 0x0020   (0x0008)  
	int32_t                                            nonce;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuestData                                         Data;                                                       // 0x0030   (0x0028)  
};

