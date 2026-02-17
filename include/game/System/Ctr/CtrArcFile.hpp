#pragma once

#include "types.hpp"
#include "CtrFRead.hpp"

class CtrArcFile{
public:
    CtrArcFile();
    virtual ~CtrArcFile();
    void open(wchar_t const*,void const*);
    void cancel(int);
    void isBusy(uint);
    void getSize(uint);
    void readCore(CtrFRead *, int,uint,uint);
}