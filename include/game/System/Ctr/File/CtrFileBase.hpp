#pragma once

#include "types.hpp"
#include "CtrFUncompSize.hpp"

class CtrFileBase : public CtrFUncompSize{
    u8 _unk_pad[0x1c]; //pad until CtrFUncompSize takes over
public:
    CtrFileBase(void);
    virtual ~CtrFileBase(); //destructor
    void open(wchar_t const*);
    void close(void);
    void cancel(void);
    void isBusy(void);
};