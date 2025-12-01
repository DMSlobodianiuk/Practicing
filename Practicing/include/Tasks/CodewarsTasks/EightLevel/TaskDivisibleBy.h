#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { std::vector<int> divisibleBy(std::vector<int> numbers, int divisor); }

class TaskDivisibleBy : public ITask
{
public:
	TaskDivisibleBy();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Find numbers which are divisible by given number";
	std::string mDescription = "Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor.";
};
