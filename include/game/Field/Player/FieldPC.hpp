#pragma once

#include "FieldChr.hpp"

class FieldPC : public FieldChrCA{ //FieldPC vtable @ 0x006b8580
public:
    virtual ~FieldPC();

    FieldPC(void);
};

namespace FieldPC{
    class FieldPCColChr : public FieldChr{ //FieldPC::FieldPCColChr vtable @ 0x006c261c
    public:
};
}; //namespace FieldPC

class FieldPCSub : public FieldChr{ //FieldPCSub vtable @ 0x006b0558
public:
    virtual ~FieldPCSub();

    FieldPCSub(void);
};

class FieldMario : public FieldPC{ //FieldMario vtable @ 0x006b0070
public:
    virtual ~FieldMario();

    FieldMario(void);
};

class FieldLuigi : public FieldPC{ //FieldLuigi vtable @ 0x006af640
public:
    virtual ~FieldLuigi();

    FieldLuigi(void);
};
