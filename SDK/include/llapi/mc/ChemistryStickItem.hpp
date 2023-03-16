/**
 * @file  ChemistryStickItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChemistryStickItem.
 *
 */
class ChemistryStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYSTICKITEM
public:
    class ChemistryStickItem& operator=(class ChemistryStickItem const &) = delete;
    ChemistryStickItem(class ChemistryStickItem const &) = delete;
    ChemistryStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ChemistryStickItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -538342673
     * @vftbl  30
     * @symbol  ?setMaxDamage\@ChemistryStickItem\@\@UEAAAEAVItem\@\@H\@Z
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   -1847075417
     * @vftbl  61
     * @symbol  ?isValidRepairItem\@ChemistryStickItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   -534926609
     * @vftbl  84
     * @symbol  ?use\@ChemistryStickItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1433996463
     * @vftbl  86
     * @symbol  ?useTimeDepleted\@ChemistryStickItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @hash   1873341725
     * @vftbl  89
     * @symbol  ?hurtActor\@ChemistryStickItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @hash   1142135468
     * @vftbl  93
     * @symbol  ?mineBlock\@ChemistryStickItem\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @hash   -453680033
     * @vftbl  101
     * @symbol  ?inventoryTick\@ChemistryStickItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   1373281810
     * @vftbl  105
     * @symbol  ?fixupCommon\@ChemistryStickItem\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYSTICKITEM
    /**
     * @hash   -1468008516
     * @symbol  ?showsDurabilityInCreative\@ChemistryStickItem\@\@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @hash   2047304606
     * @symbol  ?uniqueAuxValues\@ChemistryStickItem\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @hash   -532406739
     * @symbol  ??0ChemistryStickItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ChemistryStickItem(std::string const &, int);
    /**
     * @hash   303452005
     * @symbol  ?getColorType\@ChemistryStickItem\@\@SA?AW4ItemColor\@\@H\@Z
     */
    MCAPI static enum class ItemColor getColorType(int);
    /**
     * @hash   1768786693
     * @symbol  ?isActive\@ChemistryStickItem\@\@SA_NH\@Z
     */
    MCAPI static bool isActive(int);
    /**
     * @hash   16652759
     * @symbol  ?isChemistryStick\@ChemistryStickItem\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool isChemistryStick(class ItemStackBase const &);

//protected:
    /**
     * @hash   451727143
     * @symbol  ?_getColorName\@ChemistryStickItem\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string _getColorName(int) const;
    /**
     * @hash   -792814242
     * @symbol  ?_tick\@ChemistryStickItem\@\@IEBA_NAEAVItemStack\@\@_K\@Z
     */
    MCAPI bool _tick(class ItemStack &, unsigned __int64) const;

//private:
    /**
     * @hash   1039179278
     * @symbol  ?_storeActivationTimestamp\@ChemistryStickItem\@\@AEBAXAEAVItemStack\@\@_KH\@Z
     */
    MCAPI void _storeActivationTimestamp(class ItemStack &, unsigned __int64, int) const;

protected:

private:
    /**
     * @hash   -1989153716
     * @symbol  ?ACTIVATION_TIMESTAMP_TAG\@ChemistryStickItem\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIVATION_TIMESTAMP_TAG;
    /**
     * @hash   289271013
     * @symbol  ?ACTIVE_BIT\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const ACTIVE_BIT;
    /**
     * @hash   -295058965
     * @symbol  ?COLOR_BITS\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const COLOR_BITS;
    /**
     * @hash   513887381
     * @symbol  ?COLOR_MASK\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const COLOR_MASK;
    /**
     * @hash   -2144670193
     * @symbol  ?DAMAGE_BITS\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_BITS;
    /**
     * @hash   -1335723847
     * @symbol  ?DAMAGE_MASK\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_MASK;
    /**
     * @hash   1045193173
     * @symbol  ?DAMAGE_START_BIT\@ChemistryStickItem\@\@0HB
     */
    MCAPI static int const DAMAGE_START_BIT;

};