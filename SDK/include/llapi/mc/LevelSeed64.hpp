/**
 * @file  LevelSeed64.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelSeed64.
 *
 */
class LevelSeed64 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSEED64
public:
    class LevelSeed64& operator=(class LevelSeed64 const &) = delete;
    LevelSeed64(class LevelSeed64 const &) = delete;
    LevelSeed64() = delete;
#endif

public:
    /**
     * @hash   -406003328
     * @symbol  ?to32BitRandomSeed\@LevelSeed64\@\@QEBAIXZ
     */
    MCAPI unsigned int to32BitRandomSeed() const;
    /**
     * @hash   -1200919663
     * @symbol  ?fromUnsigned32\@LevelSeed64\@\@SA?AV1\@I\@Z
     */
    MCAPI static class LevelSeed64 fromUnsigned32(unsigned int);

};