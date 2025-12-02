#pragma once
#include "Tasks/ITask.h"
#include "Levels/Seven.h"
#include <string>

namespace seven { std::string seriesSum(int n); }

class TaskSeriesSum : public ITask
{
public:
	TaskSeriesSum();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;
private:
	std::string mName = "Sum of the first nth term of Series";
	std::string mDescription = "Calculate the sum of the first n terms of the series: 1 + 1/4 + 1/7 + 1/10 + ... , formatted to two decimal places.";
};
