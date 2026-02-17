#pragma once

#include "types.hpp"
#include "CtrThread.hpp"

class BtlMain{ //BtlMain vtable @ 0x006b8178
    u8 unk[288];
public:
    BtlMain(void);
    virtual ~BtlMain();
};

namespace BtlMain{
class VSyncThread : public CtrThread{ //BtlMain::VSyncThread vtable @ 0x006c25f0
    VSyncThread(void);
    virtual ~VSyncThread();
};
class BadgeDfxWrap{ //BtlMain::BadgeDfxWrap vtable @ 0x
    BadgeDfxWrap(void);
    virtual ~BadgeDfxWrap();
};
class BtlMapDfxWrap{ //BtlMain::BtlMapDfxWrap vtable @ 0x
    BtlMapDfxWrap(void);
    virtual ~BtlMapDfxWrap();
};
};//namesapce BtlMain

class BtlMainFunc : public BtlMain{
};

namespace BtlMainFunc{
class JobInitDfxMsg{

};
class AbortTaskEndCallBack{

};
}; //BtlMainFunc

class BtlMainProxy{
};
