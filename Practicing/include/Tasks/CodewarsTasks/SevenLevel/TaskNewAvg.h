#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace seven { long long newAvg(std::vector<double>& arr, double navg); }

class TaskNewAvg : public ITask
{
public:
	TaskNewAvg();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Looking for a benefactor";
	std::string mDescription = "Calculate the minimum donation needed to reach a new average.";

};
