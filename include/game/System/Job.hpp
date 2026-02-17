#pragma once

#include "types.hpp"

class Job{
public:
    int* _0x4;
    int* _0x8; //Job::end
    u8 _0xc[4];

    int* end(){
        this->_0x8;//unk
    }
};

class JobMan : public Job{
public:
    virtual ~JobMan(){
        this->_0x4;//unk
        this->_0xc;//unk
    }
};