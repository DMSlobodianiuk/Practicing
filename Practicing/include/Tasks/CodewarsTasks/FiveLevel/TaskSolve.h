#pragma once
#include "Tasks/ITask.h"
#include "Levels/Five.h"
#include <string>

namespace five { double solve(double m); }

class TaskSolve : public ITask
{
public:
    TaskSolve();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Which x for that sum ?";
    std::string mDescription = "Consider the sequence U(n, x) = x + 2x**2 + 3x**3 + .. + nx**n where x is a real number and n a positive integer.";
};
