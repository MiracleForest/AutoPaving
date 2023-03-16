/**
 * @file  ControlledByPlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByPlayerGoal.
 *
 */
class ControlledByPlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYPLAYERGOAL
public:
    class ControlledByPlayerGoal& operator=(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal(class ControlledByPlayerGoal const &) = delete;
    ControlledByPlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ControlledByPlayerGoal();
    /**
     * @hash   2145590967
     * @vftbl  1
     * @symbol  ?canUse\@ControlledByPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   726096576
     * @vftbl  4
     * @symbol  ?start\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -971876704
     * @vftbl  5
     * @symbol  ?stop\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1699576261
     * @vftbl  6
     * @symbol  ?tick\@ControlledByPlayerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   835160281
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@ControlledByPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1923990060
     * @symbol  ??0ControlledByPlayerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ControlledByPlayerGoal(class Mob &);

//private:
    /**
     * @symbol  ?_canBeControlledByPassenger\@ControlledByPlayerGoal\@\@AEAA_NXZ
     */
    MCAPI bool _canBeControlledByPassenger();

private:

};