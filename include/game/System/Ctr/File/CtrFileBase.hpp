#pragma once

#include "game/types.hpp"
#include "system/Ctr/File/CtrFUncompSize.hpp"

class CtrFileBase : public CtrFUncompSize{
    u8 unk_flags[0x8]; //pad until CtrFUncompSize takes over, 0x0->0x8
    u8 unk_pad[0x14]; //0x8->0x1c
    CtrFUncompSize mUncompFile; //size 20, start at 0

public:
    CtrFileBase(void);
    void open(wchar_t const*);
    void close(void);
    void cancel(void);
    void isBusy(void);
};