/**
 * @file  TransferPacket.hpp
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
 * @brief MC class TransferPacket.
 *
 */
class TransferPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[40];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFERPACKET
public:
    class TransferPacket& operator=(class TransferPacket const &) = delete;
    TransferPacket(class TransferPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TransferPacket();
    /**
     * @hash   -498340245
     * @vftbl  1
     * @symbol  ?getId\@TransferPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1954325224
     * @vftbl  2
     * @symbol  ?getName\@TransferPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2006239631
     * @vftbl  3
     * @symbol  ?write\@TransferPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -237859617
     * @vftbl  6
     * @symbol  ?_read\@TransferPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1614528897
     * @symbol  ??0TransferPacket\@\@QEAA\@XZ
     */
    MCAPI TransferPacket();
    /**
     * @hash   395643681
     * @symbol  ??0TransferPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI TransferPacket(std::string const &, int);

};