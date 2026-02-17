#pragma once

#include "types.hpp"

class BtlBootInfo{
    int unk_0x4;
public:
    BtlBootInfo();
    virtual ~BtlBootInfo(); //<-- maybe wrong
    void reset(void);
};