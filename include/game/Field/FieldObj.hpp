#pragma once

#include "types.hpp"
//#include <nn/math/Matrix34.h>

class FieldObjBase{ //FieldObjBase vtable @ 0x006b38ac
    u8 unk[0x9c];
public:
    FieldObjBase(void);
    virtual ~FieldObjBase();
};

class FieldObjCA : public FieldObjBase { //FieldObjCA vtable @ 0x006b0504
    int unk2;
    class FieldCA* mFieldCA = nullptr;
    int unk3;
//    nn::math::MTX34* mMtx = nullptr;
public:
    FieldObjCA(void);
    virtual ~FieldObjCA();
};

class FieldObjMdl{ //FieldObjMdl vtable @ 0x006b24b8
public:
    FieldObjMdl(void);
    virtual ~FieldObjMdl();
};
