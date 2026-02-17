#pragma once

#include "types.hpp"
#include "Field/FieldSystem.hpp" //Base
#include "Boot/FieldBootInfo.hpp"

class RealSystem : public FieldSystem {
public:
    u8 unk[0x170];
public:
    RealSystem(FieldBootInfo const*);
    virtual ~RealSystem();
    void getPath();
};