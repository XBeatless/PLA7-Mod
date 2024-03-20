
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX                                   = 6
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX       = 4
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX                               = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x08
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__EClientRequestType_MAX                                       = 7
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15,
	EPartyReservationResult__EPartyReservationResult_MAX                             = 16
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX                     = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX                     = 16
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x00A0 (0x001A30 - 0x001AD0)
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x1A30   (0x0050)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1A80   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x1A84   (0x004C)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0070 (0x000748 - 0x0007B8)
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x0748:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x0748:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0749   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x074C   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0750   (0x000C)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x075C   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x0760   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x0764   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x0768   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x076C   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x0770   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x0778   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x077C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0780   (0x0038)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x8a1530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x8a11e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3027) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3028) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x8a0030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x89ff70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3029) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3030) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x8a1e50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3031) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3032) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x8a00f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3033) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3034) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0x8a08f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3035) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3036) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x8a0a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3037) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3038) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x8a0ae0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3039) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3040) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x8a0cf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3041) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3042) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                               // [0x8a1c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                 // [0x8a1a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                               // [0x8a18a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                           // [0x8a16d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x8a0ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3043) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3044) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x8a0fd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0058 (0x000028 - 0x000080)
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3045) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3046) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0048   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest); // [0x8a02a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3047) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3048) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0x8a0870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0x8a05b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x8a01b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3049) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3050) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x8a04a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000028 - 0x000068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3051) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3052) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x8a0390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3053) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3054) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x8a0750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3055) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3056) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x8a0630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0100 (0x000030 - 0x000130)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3057) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3058) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0xE0];                                      // 0x0050   (0x00E0)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x8a5ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);           // [0x8a6b40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3059) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3060) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0x8a5960] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0070 (0x000028 - 0x000098)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,3061) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3062) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0x8a5a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,3063) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3064) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);     // [0x8a5d30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0030 (0x000220 - 0x000250)
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0220   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0228   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x022C   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0238   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x000250 - 0x0002B0)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x0250   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x0258   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x0261   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                             // [0x6971c0] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x00B8 (0x000250 - 0x000308)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x0250   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0268   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000220 - 0x000248)
class AOnlineBeaconHostObject : public AActor
{ 
public:
	SDK_UNDEFINED(16,3065) /* FString */               __um(BeaconTypeName);                                       // 0x0220   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x0230   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0238   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0100 (0x000028 - 0x000128)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0030   (0x00F8)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPIELoginSettingsInternal
{ 
	SDK_UNDEFINED(16,3066) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3067) /* FString */               __um(Token);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,3068) /* FString */               __um(Type);                                                 // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x0168 (0x000028 - 0x000190)
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_3[0x160];                                     // 0x0028   (0x0160)  MISSED
	bool                                               bIsFromInvite;                                              // 0x0188   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x0189   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x018A   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,3069) /* FString */               __um(ValidationStr);                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3070) /* FString */               __um(PlatForm);                                             // 0x0038   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C0 (0x0002B0 - 0x000370)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x02B0   (0x0030)  MISSED
	SDK_UNDEFINED(16,3071) /* FString */               __um(DestSessionId);                                        // 0x02E0   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x02F0   (0x0050)  
	EClientRequestType                                 RequestType;                                                // 0x0340   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0341   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x0342   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x0343   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                          // [0x8a6800] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                      // [0x8a6390] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                // [0x8a6110] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                    // [0x8a5fb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                  // [0x8a5840] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                     // [0x8a5820] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                             // [0x8a5720] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                       // [0x8a5600] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x000248 - 0x0002C0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x0248   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0250   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02B4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0050 (0x000028 - 0x000078)
class UPartyBeaconState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	bool                                               bEnableRemovalRequests;                                     // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,3072) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3073) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x8a5df0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,3074) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3075) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0x8a6a80] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)  
	FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)  
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00E8 (0x0002B0 - 0x000398)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x02B0   (0x0030)  MISSED
	SDK_UNDEFINED(16,3076) /* FString */               __um(DestSessionId);                                        // 0x02E0   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x02F0   (0x0078)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x0368   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0369   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x036A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x036B   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                  // [0x8a6610] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                      // [0x8a5fb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                  // [0x8a58d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                     // [0x69e440] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                         // [0x8a57a0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                   // [0x8a5680] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x000248 - 0x0002C0)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x0248   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0250   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02B4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0038 (0x000028 - 0x000060)
class USpectatorBeaconState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                    // [0x8a60c0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                    // [0x8a5700] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x000248 - 0x000248)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0x8a7680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0x8a7460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0x8a72c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0x8a7120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x0006D0 - 0x000730)
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x06D0   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                      // [0x8a7650] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo2
{ 
	SDK_UNDEFINED(16,3077) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3078) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,3079) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
struct FOnlineProxyStoreOffer
{ 
	SDK_UNDEFINED(16,3080) /* FString */               __um(OfferId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,3081) /* FText */                 __um(Title);                                                // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,3082) /* FText */                 __um(Description);                                          // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,3083) /* FText */                 __um(LongDescription);                                      // 0x0040   (0x0018)  
	SDK_UNDEFINED(24,3084) /* FText */                 __um(RegularPriceText);                                     // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(24,3085) /* FText */                 __um(PriceText);                                            // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	SDK_UNDEFINED(16,3086) /* FString */               __um(CurrencyCode);                                         // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(80,3087) /* TMap<FString, FString> */ __um(DynamicFields);                                       // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseRestoreInfo2
{ 
	SDK_UNDEFINED(16,3088) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3089) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,3090) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo
{ 
	SDK_UNDEFINED(16,3091) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3092) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,3093) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FInAppPurchaseProductInfo2
{ 
	SDK_UNDEFINED(16,3094) /* FString */               __um(Identifier);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3095) /* FString */               __um(TransactionIdentifier);                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,3096) /* FString */               __um(DisplayName);                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,3097) /* FString */               __um(DisplayDescription);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3098) /* FString */               __um(DisplayPrice);                                         // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,3099) /* FString */               __um(CurrencyCode);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,3100) /* FString */               __um(CurrencySymbol);                                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,3101) /* FString */               __um(DecimalSeparator);                                     // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,3102) /* FString */               __um(GroupingSeparator);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,3103) /* FString */               __um(ReceiptData);                                          // 0x0098   (0x0010)  
	SDK_UNDEFINED(80,3104) /* TMap<FString, FString> */ __um(DynamicFields);                                       // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInAppPurchaseProductRequest2
{ 
	SDK_UNDEFINED(16,3105) /* FString */               __um(ProductIdentifier);                                    // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

