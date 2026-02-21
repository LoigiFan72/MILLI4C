#pragma once

#include "system/Task.hpp"

class Task;
class TaskMan{
    Task* currentTask;
    Task* mTask;
public:
    TaskMan();

    void entry(Task * task);
};

