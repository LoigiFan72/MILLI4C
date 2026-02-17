//AUTHOR: *AlphaDream Corp. Ltd. 2011-2013,* *Nintendo 2011-2013*
//REWROTE BY: LuigiFan27
//PROJECT: RedSpark (Headers)
//
//
//FILENAME: CellAnimeState.hpp
//NAMESPACE: Global
//
//All contents are based on the US 1.0 Release of the game.
//*----------------------------RedSpark----------------------------*
#pragma once

#include "types.hpp"

#include "include/CTR-SDK/include/nn/math/math_Matrix44.h"
#include "include/CTR-SDK/include/nn/ulcd/CTR/ulcd_StereoCamera.h"

class CellAnimeState{
public:
    CellAnimeState(void);
    
    virtual ~CellAnimeState();
    void setProj2dParallax(nn::ulcd::StereoCamera const*,nn::math::Matrix44 const&);
    void prepare(void);
    void resetState(void);
};
