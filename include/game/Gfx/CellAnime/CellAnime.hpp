//AUTHOR: *AlphaDream Corp. Ltd. 2011-2013,* *Nintendo 2011-2013*
//REWROTE BY: LuigiFan27
//PROJECT: RedSpark (Headers)
//
//
//FILENAME: CellAnime.hpp
//NAMESPACE: Global
//COMMENT: Needs Color8.
//All contents are based on the US 1.0 Release of the game.
//*----------------------------RedSpark----------------------------*
#pragma once

#include "types.hpp"
#include "include/CTR-SDK/include/nn/util/util_Color.h"
#include "CellAnimeTex.hpp"
#include "CellAnimeState.hpp"
#include "CellAnimeFmtCtr.hpp"

class CellAnimeState;

class CellAnime{
public:
    CellAnime(void);
    virtual ~CellAnime();
    void init(void const*, CellAnimeTex const*, void const*,uchar,short,short);
    void play(uchar,short,short);
    void setConstColor(int,nn::util::Color8);
    void draw(CellAnimeState &);
    void GetPtnNo(CellAnimeFmtCtr::FileHeader const*,char,int);
    void drawCore(CellAnimeState &,uint *,CellAnimeFmtCtr::Pattern const*,bool);
    void term(void);
    void setFrm(int);
    void update(void);
    void setPtnNo(ushort);
    void setSeqPtnFrm(int,int);
    void getConstColor(int);
    void getPtnFromSeqPtnNo(uchar,ushort);
};
