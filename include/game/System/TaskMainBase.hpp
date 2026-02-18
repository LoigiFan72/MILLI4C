#pragma once

#include "types.hpp"
#include "TaskMan.hpp"
#include "Task.hpp"

class Task;
class TaskMainBase : public Task{
    uint nextTask; //0x8
public:

    void restore(uint next, Task base){
    next = nextTask;
    base = base;
}
};