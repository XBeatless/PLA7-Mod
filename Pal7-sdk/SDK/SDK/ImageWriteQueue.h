
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ImageWriteQueue.EDesiredImageFormat
/// Size: 0x05
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG                                                         = 0,
	EDesiredImageFormat__JPG                                                         = 1,
	EDesiredImageFormat__BMP                                                         = 2,
	EDesiredImageFormat__EXR                                                         = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX                                     = 4
};

/// Class /Script/ImageWriteQueue.ImageWriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
	// void ExportToDisk(class UTexture* Texture, FString Filename, FImageWriteOptions& Options);                            // [0x1919960] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ImageWriteQueue.ImageWriteOptions
/// Size: 0x0060 (0x000000 - 0x000060)
struct FImageWriteOptions
{ 
	EDesiredImageFormat                                Format;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(16,2946) /* FDelegateProperty */     __um(OnComplete);                                           // 0x0004   (0x0010)  
	int32_t                                            CompressionQuality;                                         // 0x0014   (0x0004)  
	bool                                               bOverwriteFile;                                             // 0x0018   (0x0001)  
	bool                                               bAsync;                                                     // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x46];                                      // 0x001A   (0x0046)  MISSED
};

