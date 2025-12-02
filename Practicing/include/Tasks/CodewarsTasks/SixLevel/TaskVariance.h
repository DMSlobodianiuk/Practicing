#pragma once
#include "Tasks/ITask.h"
#include "Levels/Six.h"
#include <string>

namespace six { double variance(std::string town, const std::string& string); }

class TaskVariance : public ITask
{
public:
    TaskVariance();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Rainfall(variance)";
    std::string mDescription = "Function: variance(town, strng) should return the average of rainfall for the city town and the strng data or data1 (In R and Julia this function is called avg).";
};


