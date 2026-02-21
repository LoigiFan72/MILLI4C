#pragma once

#include "Battle/Obj/BtlObjBase.hpp"

class yaLuigiBoxLocal{
    BtlObjMove Base; //end @ 3b0
    u8 unk_pad1[0x44];//end @ 3f4
    int* unk1; //end @ 3f4
    int* unk2; //end @ 3f8
    u8 unk_pad2[48]; // end @ 43c
    int unk3; //end at 444
    int unk4; //end at 448, not found in game
    int unk5; //end at 44c
    u8 unk_pad3[0x80]; //end at 4cc then stop
public:
    virtual ~yaLuigiBoxLocal();

    yaLuigiBoxLocal();
};

static_assert(sizeof(yaLuigiBoxLocal) == 0x4cc, "");

class yaLuigiBoxLocalTOP{
    yaLuigiBoxLocal Base; //luigiboxloc is our base might delete lowk
public:
   virtual ~yaLuigiBoxLocalTOP();
   
   yaLuigiBoxLocalTOP();
};