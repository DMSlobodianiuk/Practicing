#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { std::vector<int> squareOrSquareRoot(const std::vector<int>& array); }

class TaskSquareOrSquareRoot : public ITask
{
public:
	TaskSquareOrSquareRoot();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;
private:
	std::string mName = "To square(root) or not to square(root)";
	std::string mDescription = "Write a method, that will get an integer array as parameter and will process every number from this array.\n"
		"Return a new array with processing every number of the input - array like this:";
};
