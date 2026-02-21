#pragma once

#include "types.hpp"

#include <system/Ctr/CtrNwAlc.hpp>
#include <Boot/FieldBootInfo.hpp>
#include <system/TaskMainBase.hpp>

class FieldSystem : public TaskMainbase{
    u8 unk[0x8];
    CtrNwAlc* currentAlc;
    u8 unk[316];
public:
    virtual ~FieldSystem();

    FieldSystem(FieldBootInfo const*); //vtable @ 0x006B262C 
};

class FieldSystemCA{
};

class FieldMessageSystem{
};

class FieldSoundSystem{
};