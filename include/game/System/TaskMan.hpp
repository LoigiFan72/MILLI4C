#pragma once

#include "Task.hpp"

class TaskMan{
public:
    Task* mCurrentTask = nullptr;
    void entry(Task* task){

    this->mCurrentTask;
}
};
extern TaskMan gTaskMan;