#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { int stringToNumber(const std::string& s); }

class TaskStringToNumber : public ITask
{
public:
	TaskStringToNumber();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName = "Convert a String to a Number!";
	std::string mDescription = "We need a function that can transform a string into a number. What ways of achieving this do you know?";
};
