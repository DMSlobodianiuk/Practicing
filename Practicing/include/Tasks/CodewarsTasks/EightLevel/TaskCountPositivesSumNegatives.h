#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { std::vector<int> countPositivesSumNegatives(std::vector<int> input); }

class TaskCountPositivesSumNegatives : public ITask
{
public:
	TaskCountPositivesSumNegatives();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Count of positives / sum of negatives";
	std::string mDescription = "Given an array of integers.\n"
		"Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.\n"
		"If the input is an empty array or is null, return an empty array.";
};
