/**
 * @file  ShapelessRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShapelessRecipe.
 *
 */
class ShapelessRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSRECIPE
public:
    class ShapelessRecipe& operator=(class ShapelessRecipe const &) = delete;
    ShapelessRecipe(class ShapelessRecipe const &) = delete;
    ShapelessRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ShapelessRecipe();
    /**
     * @hash   477458886
     * @vftbl  1
     * @symbol  ?assemble\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@AEAVCraftingContainer\@\@\@Z
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @hash   470117708
     * @vftbl  2
     * @symbol  ?getCraftingSize\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int getCraftingSize() const;
    /**
     * @hash   -1645351091
     * @vftbl  3
     * @symbol  ?getIngredient\@ShapelessRecipe\@\@UEBAAEBVRecipeIngredient\@\@HH\@Z
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @hash   51208025
     * @vftbl  4
     * @symbol  ?getResultItem\@ShapelessRecipe\@\@UEBAAEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @hash   1527654672
     * @vftbl  5
     * @symbol  ?isShapeless\@ShapelessRecipe\@\@UEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @hash   1681919726
     * @vftbl  6
     * @symbol  ?matches\@ShapelessRecipe\@\@UEBA_NAEAVCraftingContainer\@\@AEAVLevel\@\@\@Z
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @hash   809233204
     * @vftbl  7
     * @symbol  ?size\@ShapelessRecipe\@\@UEBAHXZ
     */
    virtual int size() const;
    /**
     * @hash   1055323106
     * @vftbl  14
     * @symbol  ?loadResultList\@ShapelessRecipe\@\@UEBAXAEBVBlockPalette\@\@\@Z
     */
    virtual void loadResultList(class BlockPalette const &) const;
    /**
     * @hash   -1090011276
     * @symbol  ??0ShapelessRecipe\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@AEBV?$vector\@VRecipeIngredient\@\@V?$allocator\@VRecipeIngredient\@\@\@std\@\@\@std\@\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@4\@VHashedString\@\@HPEBVUUID\@mce\@\@\@Z
     */
    MCAPI ShapelessRecipe(class gsl::basic_string_span<char const, -1>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    /**
     * @hash   -772763437
     * @symbol  ?generateUUID\@ShapelessRecipe\@\@QEAAXXZ
     */
    MCAPI void generateUUID();

};