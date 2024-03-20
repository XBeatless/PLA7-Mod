
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/PhysicsCore.EChaosBufferMode
/// Size: 0x05
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double                                                         = 0,
	EChaosBufferMode__Triple                                                         = 1,
	EChaosBufferMode__Num                                                            = 2,
	EChaosBufferMode__Invalid                                                        = 3,
	EChaosBufferMode__EChaosBufferMode_MAX                                           = 4
};

/// Enum /Script/PhysicsCore.EChaosThreadingMode
/// Size: 0x06
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread                                             = 0,
	EChaosThreadingMode__TaskGraph                                                   = 1,
	EChaosThreadingMode__SingleThread                                                = 2,
	EChaosThreadingMode__Num                                                         = 3,
	EChaosThreadingMode__Invalid                                                     = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX                                     = 5
};

/// Enum /Script/PhysicsCore.EChaosSolverTickMode
/// Size: 0x05
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed                                                      = 0,
	EChaosSolverTickMode__Variable                                                   = 1,
	EChaosSolverTickMode__VariableCapped                                             = 2,
	EChaosSolverTickMode__VariableCappedWithTarget                                   = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX                                   = 4
};

