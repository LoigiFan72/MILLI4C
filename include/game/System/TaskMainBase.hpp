#pragma once

#include "types.hpp"
#include "TaskMan.hpp"
#include "Task.hpp"

class Task;
class TaskMainBase : public Task{
public:
    uint nextTask;

    virtual ~TaskMainBase();
    void restore(uint mCurrentTask){

    this->nextTask = 0;
};
};