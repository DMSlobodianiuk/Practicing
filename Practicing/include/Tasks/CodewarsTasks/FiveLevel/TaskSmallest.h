#pragma once
#include "Tasks/ITask.h"
#include "Levels/Five.h"
#include <string>

namespace five { std::vector<long long> smallest(long long n); }

class TaskSmallest : public ITask
{
public:
    TaskSmallest();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Find the smallest";
    std::string mDescription = "You have a positive number n consisting of digits.\n"
        "You can do at most one operation: Choosing the index of a digit in the number, remove this digit at that index and insert it back to another or at the same place in the number in order to find the smallest number you can get.";
};
