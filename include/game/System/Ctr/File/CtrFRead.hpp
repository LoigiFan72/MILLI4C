#pragma once

#include "types.hpp"

class CtrFRead{
};

class CtrFReadBase{
public:
    virtual ~CtrFReadBase();

    CtrFReadBase(void);
};

class CtrFReadEx : public CtrFReadBase{
};

class CtrFReadSimple : public CtrFReadBase{
};