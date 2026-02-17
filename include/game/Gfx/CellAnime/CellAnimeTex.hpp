//AUTHOR: *AlphaDream Corp. Ltd. 2011-2013,* *Nintendo 2011-2013*
//REWROTE BY: LuigiFan27
//PROJECT: RedSpark (Headers)
//
//
//FILENAME: CellAnimeTex.hpp
//NAMESPACE: Global
//
//All contents are based on the US 1.0 Release of the game.
//*----------------------------RedSpark----------------------------*
#pragma once

#include "types.hpp"

class CellAnimeTex{
    u32 Placeholder;
public:
    CellAnimeTex(void);
    virtual ~CellAnimeTex(void);
    void initFcram(void const*);
    void initVram(void const*,uint,uint);
};