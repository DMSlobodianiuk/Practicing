#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { double converter(int mpg); }

class TaskConverter : public ITask
{
public:
	TaskConverter();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Miles per gallon to kilometers per liter";
	std::string mDescription = "Convert miles per gallon (mpg) to kilometers per liter (kpl) using the formula: kpl = mpg * 1.609344 / 4.54609188.";
};
