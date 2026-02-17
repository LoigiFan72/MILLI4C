#pragma once

#include "FieldChr.hpp"

class FieldPC : public FieldChrCA{ //FieldPC vtable @ 0x006b8580
public:
    FieldPC(void);
    virtual ~FieldPC();
};

namespace FieldPC{
    class FieldPCColChr : public FieldChr{ //FieldPC::FieldPCColChr vtable @ 0x006c261c
    public:
};
}; //namespace FieldPC

class FieldPCSub : public FieldChr{ //FieldPCSub vtable @ 0x006b0558
public:
    FieldPCSub(void);
    virtual ~FieldPCSub();
};

class FieldMario : public FieldPC{ //FieldMario vtable @ 0x006b0070
public:
    FieldMario(void);
    virtual ~FieldMario();
};

class FieldLuigi : public FieldPC{ //FieldLuigi vtable @ 0x006af640
public:
    FieldLuigi(void);
    virtual ~FieldLuigi();
};
