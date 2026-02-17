#pragma once

#include "types.hpp"
#include "Message.hpp"

class UIListWindow : public MessageSimple{
    public:
    UIListWindow(void);
    virtual ~UIListWindow();
    void getCurNo(uchar CurNo);
    void draw(); //unk cellanime is huge here tho
    void drawArrow();
    void update();
};
namespace UIListWindow{
class Item{
public:
    void reset();
};//end item
class InitParam{
public:
    InitParam(void);
};
};
