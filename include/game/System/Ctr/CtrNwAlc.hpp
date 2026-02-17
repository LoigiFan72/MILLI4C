#pragma once

#include "types.hpp"

class CtrNwAlc {
    int*     mCurrentAlc;
    uint32_t  Unk_0x8[];
public:
    CtrNwAlc(void);
    virtual ~CtrNwAlc();
    void __deallocating();
    void init();
};

