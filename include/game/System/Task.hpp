#pragma once

#include "types.hpp"
#include "system/TaskMan.hpp"

class Task{
public:
    Task* mTask;

    virtual void execute();
    virtual ~Task();
};
