#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace eight { bool amIWilson(unsigned n); }

class TaskAmIWilson : public ITask
{
public:

    TaskAmIWilson();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Wilson primes";
    std::string mDescription = "Your task is to create a function that returns true if the given number is a Wilson prime and false otherwise.";
};
