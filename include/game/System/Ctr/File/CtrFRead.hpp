#pragma once

#include "types.hpp"

class CtrFRead{
};

class CtrFReadBase{
public:
    CtrFReadBase(void);
    virtual ~CtrFReadBase();
};

class CtrFReadEx : public CtrFReadBase{
};

class CtrFReadSimple : public CtrFReadBase{
};