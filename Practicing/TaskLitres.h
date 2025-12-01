#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"

namespace eight { int litres(double time); }

class TaskLitres : public ITask
{
public:
	TaskLitres(std::string name, std::string description);

	int run() override;

	const std::string& getName() const override;
	const std::string& getDescription() const noexcept override;
private:
	std::string mName;
	std::string mDescription;
}
