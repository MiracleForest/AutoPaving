/**
 * @file  PathBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PathBlockSource.
 *
 */
class PathBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHBLOCKSOURCE
public:
    class PathBlockSource& operator=(class PathBlockSource const &) = delete;
    PathBlockSource(class PathBlockSource const &) = delete;
    PathBlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PathBlockSource();
    /**
     * @hash   -24052163
     * @vftbl  1
     * @symbol  ?isInWater\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInWater() const;
    /**
     * @hash   613597268
     * @vftbl  2
     * @symbol  ?isInLava\@PathBlockSource\@\@UEBA_NXZ
     */
    virtual bool isInLava() const;
    /**
     * @hash   -1256172573
     * @vftbl  3
     * @symbol  ?isWaterBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isWaterBlock(class BlockPos const &) const;
    /**
     * @hash   134157472
     * @vftbl  4
     * @symbol  ?isLavaBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isLavaBlock(class BlockPos const &) const;
    /**
     * @hash   -348949049
     * @vftbl  5
     * @symbol  ?isSolidBlock\@PathBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool isSolidBlock(class BlockPos const &) const;

};