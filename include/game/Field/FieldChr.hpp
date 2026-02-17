#pragma once

#include "FieldSrtBase.hpp"
#include "FieldObj.hpp"
#include "types.hpp"

class FieldChr{ //imports from something maybe Chrprim?, FielcChr vtable @ 0x006b8d74
    u8 unk[0x2a0];
public:
    FieldChr(void);
    virtual ~FieldChr();
};

class FieldChrBase{ //FieldChrBase vtable @ 0x006b3250
    u8 unk[0xe0];
public:
    FieldChrBase(void);
    virtual ~FieldChrBase();
};

class FieldChrCA : public FieldChr, public FieldCAChrBase{ //FieldChrCA vtable @ 0x006aee34
};

class FieldChrMdl : public FieldChr{ //FieldChrMdl vtable @ 0x006b1ad8
    FieldChrMdl(void);
    virtual ~FieldChrMdl();
};

class FieldChrPrim : public FieldChrBase, public FieldSrtBase { //FieldChrPrim vtable @ 0x006b3290
public:
    FieldChrPrim(void);
    virtual ~FieldChrPrim();
};

class FieldChrPrimCA{ //FieldChrPrimCA vtable @ 0x006b5838
public:
    FieldChrPrimCA(void);
    virtual ~FieldChrPrimCA();
};

class FieldChrCol{ //FieldChrCol vtable @ 0x006b1fe4
public:
    FieldChrCol(void);
    virtual ~FieldChrCol();
};

class FieldCAChrBase : public FieldObjBase{ //FieldCAChrBase vtable @ 0x006b57bc
public:
    FieldCAChrBase(void);
    virtual ~FieldCAChrBase();
};