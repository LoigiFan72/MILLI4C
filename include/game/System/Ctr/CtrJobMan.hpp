#pragma once

#include "types.hpp"
#include "Job.hpp"

class CtrJobMan{
public:
    CtrJobMan(void);
    virtual ~CtrJobMan();
    void init(void *,int,int);
    void term(void);
    void jam(Job *);
    void isBusy(Job *);
    void enqueue(Job *);
    void release(Job *);
    void release(Job *);
};