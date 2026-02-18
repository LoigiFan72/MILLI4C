#pragma once

#include "types.hpp"

class CellAnimeTex{
    u32 Placeholder;
public:
    virtual ~CellAnimeTex();

    CellAnimeTex(void);
    void initFcram(void const*);
    void initVram(void const*,uint,uint);
};