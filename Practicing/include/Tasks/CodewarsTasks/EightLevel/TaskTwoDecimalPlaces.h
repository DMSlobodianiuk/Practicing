#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace eight { double twoDecimalPlaces(double n); }

class TaskTwoDecimalPlaces : public ITask
{
public:
    TaskTwoDecimalPlaces();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Formatting decimal places #0";
    std::string mDescription = "Each number should be formatted that it is rounded to two decimal places. You don't need to check whether the input is a valid number because only valid numbers are used in the tests.";
};
