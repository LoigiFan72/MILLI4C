#pragma once

#include <game/types.hpp>

class BtlObjBase{
    virtual ~BtlObjBase();

    BtlObjBase();
public:
    u8 pad_1[0x16];
    BtlObjBaseBase* mBase;
    u8 pad_2[100];
};

class BtlObjMove{
    virtual ~BtlObjMove();

    BtlObjMove();
public:

};

class BtlObjBaseBase{
    virtual ~BtlObjBaseBase();

public:
    u8 pad[64];
};