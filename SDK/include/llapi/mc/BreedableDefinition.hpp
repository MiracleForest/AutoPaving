/**
 * @file  BreedableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreedableDefinition.
 *
 */
class BreedableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDABLEDEFINITION
public:
    class BreedableDefinition& operator=(class BreedableDefinition const &) = delete;
    BreedableDefinition(class BreedableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1275478739
     * @symbol  ??0BreedableDefinition\@\@QEAA\@XZ
     */
    MCAPI BreedableDefinition();
    /**
     * @hash   28758630
     * @symbol  ?addBreedItem\@BreedableDefinition\@\@QEAAXAEBVItemDescriptor\@\@\@Z
     */
    MCAPI void addBreedItem(class ItemDescriptor const &);
    /**
     * @hash   1238725654
     * @symbol  ?addBreedableType\@BreedableDefinition\@\@QEAAXAEBUBreedableType\@\@\@Z
     */
    MCAPI void addBreedableType(struct BreedableType const &);
    /**
     * @hash   1188476410
     * @symbol  ?addEnvironmentRequirement\@BreedableDefinition\@\@QEAAXAEBUEnvironmentRequirement\@\@\@Z
     */
    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const &);
    /**
     * @symbol  ?initialize\@BreedableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBreedableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BreedableComponent &) const;
    /**
     * @hash   -924562947
     * @symbol  ??1BreedableDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BreedableDefinition();
    /**
     * @hash   1043535060
     * @symbol  ?buildSchema\@BreedableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBreedableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreedableDefinition>> &);

};