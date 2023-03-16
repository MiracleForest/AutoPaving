/**
 * @file  FenceGateBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FenceGateBlock.
 *
 */
class FenceGateBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FENCEGATEBLOCK
public:
    class FenceGateBlock& operator=(class FenceGateBlock const &) = delete;
    FenceGateBlock(class FenceGateBlock const &) = delete;
    FenceGateBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FenceGateBlock();
    /**
     * @hash   272296625
     * @vftbl  10
     * @symbol  ?getAABB\@FenceGateBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   877500873
     * @vftbl  14
     * @symbol  ?getLiquidClipVolume\@FenceGateBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVAABB\@\@\@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   947387832
     * @vftbl  25
     * @symbol  ?canConnect\@FenceGateBlock\@\@UEBA_NAEBVBlock\@\@E0\@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   421925303
     * @vftbl  62
     * @symbol  ?canContainLiquid\@FenceGateBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -1225680124
     * @vftbl  73
     * @symbol  ?onRedstoneUpdate\@FenceGateBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @hash   -1135919657
     * @vftbl  79
     * @symbol  ?setupRedstoneComponent\@FenceGateBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   -1559899113
     * @vftbl  85
     * @symbol  ?ignoreEntitiesOnPistonMove\@FenceGateBlock\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /**
     * @hash   -917118317
     * @vftbl  99
     * @symbol  ?neighborChanged\@FenceGateBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   -421283664
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@FenceGateBlock\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @hash   -728004381
     * @vftbl  168
     * @symbol  ?onPlace\@FenceGateBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -117808697
     * @vftbl  171
     * @symbol  ?tick\@FenceGateBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   1238516662
     * @vftbl  177
     * @symbol  ?use\@FenceGateBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FENCEGATEBLOCK
    /**
     * @hash   -666157902
     * @symbol  ?isFenceGateBlock\@FenceGateBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isFenceGateBlock() const;
    /**
     * @hash   330138476
     * @symbol  ?isInteractiveBlock\@FenceGateBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   564748230
     * @symbol  ??0FenceGateBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4WoodType\@\@\@Z
     */
    MCAPI FenceGateBlock(std::string const &, int, enum class WoodType);
    /**
     * @hash   -964783859
     * @symbol  ?resolveIsInWall\@FenceGateBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void resolveIsInWall(class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @hash   -1795647036
     * @symbol  ?_onOpenChanged\@FenceGateBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _onOpenChanged(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   407105724
     * @symbol  ?_setOpen\@FenceGateBlock\@\@AEBAXAEAVBlockSource\@\@V?$not_null\@PEBVBlock\@\@\@gsl\@\@AEBVBlockPos\@\@PEAVPlayer\@\@_N\@Z
     */
    MCAPI void _setOpen(class BlockSource &, class gsl::not_null<class Block const *>, class BlockPos const &, class Player *, bool) const;

private:

};