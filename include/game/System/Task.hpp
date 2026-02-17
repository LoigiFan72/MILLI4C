#pragma once

#include "TaskMan.hpp"
#include "types.hpp"

class TaskMan;
class Task{
public:
    TaskMan* mParent = nullptr;
    
    virtual ~Task();
    void start();
    void term();
};