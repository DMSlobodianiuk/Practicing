#pragma once
#include "Tasks/ITask.h"
#include "Levels/Six.h"
#include <string>

namespace six { long long findNb(long long m); }

class TaskFindNb : public ITask
{
public:
	TaskFindNb();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;
private:
	std::string mName = "Build a pile of Cubes";
	std::string mDescription = "Your task is to construct a building which will be a pile of n cubes.";
};
