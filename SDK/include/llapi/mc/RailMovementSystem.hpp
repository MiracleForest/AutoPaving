/**
 * @file  RailMovementSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RailMovementSystem.
 *
 */
class RailMovementSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTSYSTEM
public:
    class RailMovementSystem& operator=(class RailMovementSystem const &) = delete;
    RailMovementSystem(class RailMovementSystem const &) = delete;
    RailMovementSystem() = delete;
#endif

public:
    /**
     * @symbol ?tickRailMovementComponent@RailMovementSystem@@SAXAEAVActor@@AEAVRailMovementComponent@@@Z
     * @hash   -558690389
     */
    MCAPI static void tickRailMovementComponent(class Actor &, class RailMovementComponent &);

};