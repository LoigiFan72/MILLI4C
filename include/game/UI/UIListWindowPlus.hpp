#pragma once

#include "types.hpp"
#include "Message.hpp"
#include "CellAnimeState"
#include "Prim.hpp"

class UIListWindowPlus{
    UIListWindowPlus(void);
    virtual ~UIListWindowPlus();
    void update(); //unk
    void init(UIListWindowPlus::InitParam param);
    void draw(CellAnimeState& state, Prim, MessageDrawer&);
    void drawListCA(CellAnimeState& state, UICommon::Pos const& pos, int, int);
    void drawCaption(CellAnimeState& state);
    void drawListStr(MessageDrawer&, UICommon::Pos const& pos, int, int);
    void tpCtrl(UIListWindowPlus::Item** item,short,short,char,char);
    void tpCtrlStart(short,short); //void is unkown
    void tpCtrlCnt(short,short); //void is unk
    void tpCtrlEnd(short,short); //void is unk
    void keyCtrl(uint,uint,uint,uint,float);
};
namespace UIListWindowPlus{
class InitParam{
    InitParam(void);
}; //end initparam
class Item{
    Item(void);
}; //end item
}; //namespace UIListWindowPlus