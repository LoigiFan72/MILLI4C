#pragma once

#include "Task.hpp"

class TaskMan{
    Task* mCurrentTask = nullptr;
public:
    void entry(Task* mCurrentTask);
};

extern TaskMan gTaskMan;