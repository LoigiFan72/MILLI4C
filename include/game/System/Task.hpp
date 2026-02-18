#pragma once

#include "TaskMan.hpp"
#include "types.hpp"

class TaskMan;
class Task{
    TaskMan* mParent = nullptr;
public:
    virtual void execute();
    virtual ~Task();

    void start();
    void term();
};