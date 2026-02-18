#pragma once

#include "types.hpp"

class CtrNwAlc {
    int*     mCurrentAlc;
    uint32_t  Unk_0x8[];
public:
    virtual ~CtrNwAlc();

    CtrNwAlc(void);
    void __deallocating();
    void init();
};

