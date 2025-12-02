#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace eight { int litres(double time); }

class TaskLitres : public ITask
{
public:
    TaskLitres();
        
    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Litres";
    std::string mDescription = "Calculate litres consumed over time at a rate of 0.5 litres per hour.";
};
