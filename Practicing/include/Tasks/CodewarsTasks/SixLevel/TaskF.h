#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace six { double f(double x); }

class TaskF : public ITask
{
public:
	TaskF();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Floating-point Approximation (I)";
	std::string mDescription = "Can you modify f(x) to give a good approximation of f(x) in the neighborhood of 0?";
};
