#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace five { long zeros(long n); }

class TaskZeros : public ITask
{
public:
    TaskZeros();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Number of trailing zeros of N!";
    std::string mDescription = "Write a program that will calculate the number of trailing zeros in a factorial of a given number.";
};
