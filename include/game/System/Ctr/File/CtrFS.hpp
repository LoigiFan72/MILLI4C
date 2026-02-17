#pragma once

#include "types.hpp"
#include "CtrFEnd.hpp"
#include "CtrJobMan.hpp"
#include "MemAlcBase.hpp"

class CtrFS{
    u8 _pad_[0x4];
    int * _unk_flag1_;
    CtrFEnd mCtrFEnd;    
    u8 _pad2_[0x4];
    u32 mRomPath;
    u8 _pad3_[0xa];
    ushort _0x26;
    CtrSaveFormat mCtrSaveFormat;  
    u8 _pad4_[0x27];

    public:
    CtrFS(void);
    virtual ~CtrFS();
    void cancel(void);
    void unmountSaveData(void);
    void initCore(CtrJobMan *,void *, int);
};
    static_assert(sizeof(CtrFS) == 0x50, "Must be 0x90"); //update when add CtrSaveFormat, and CtrFEnd

class CtrFSEx : public CtrFS{
public: 
    CtrFSEx(void);
    virtual ~CtrFSEx();
    void read(uint,MemAlcBase *,uint,uint,uint,uint);
    void read(uint,void *,uint,uint,uint);
    void read(uint,int,MemAlcBase *,uint,uint,uint);
    void term(void);
};