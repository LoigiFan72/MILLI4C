#pragma once

#include "types.hpp"

class DfxBuffer{
public:
    virtual ~DfxBuffer();

    DfxBuffer(void);
    void setBufNum(uint);
};