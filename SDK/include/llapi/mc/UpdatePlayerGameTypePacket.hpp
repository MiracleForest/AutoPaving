/**
 * @file  UpdatePlayerGameTypePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdatePlayerGameTypePacket.
 *
 */
class UpdatePlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEPLAYERGAMETYPEPACKET
public:
    class UpdatePlayerGameTypePacket& operator=(class UpdatePlayerGameTypePacket const &) = delete;
    UpdatePlayerGameTypePacket(class UpdatePlayerGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdatePlayerGameTypePacket();
    /**
     * @hash   833152384
     * @vftbl  1
     * @symbol  ?getId\@UpdatePlayerGameTypePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1301636205
     * @vftbl  2
     * @symbol  ?getName\@UpdatePlayerGameTypePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1494366618
     * @vftbl  3
     * @symbol  ?write\@UpdatePlayerGameTypePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1090016342
     * @vftbl  6
     * @symbol  ?_read\@UpdatePlayerGameTypePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -45091878
     * @symbol  ??0UpdatePlayerGameTypePacket\@\@QEAA\@XZ
     */
    MCAPI UpdatePlayerGameTypePacket();
    /**
     * @hash   -1766780376
     * @symbol  ??0UpdatePlayerGameTypePacket\@\@QEAA\@W4GameType\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI UpdatePlayerGameTypePacket(enum class GameType, struct ActorUniqueID const &);

};