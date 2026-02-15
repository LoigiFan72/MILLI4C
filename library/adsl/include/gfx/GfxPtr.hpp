#pragma once

#define element_type
#define deleter_type

typedef element_type mObject;
typedef deleter_type mDeleter;

struct GfxMovePtr{
    element_type mObject
    deleter_type mDeleter;
};

struct GfxPtr{
    GfxMovePtr mMovePtr;
};