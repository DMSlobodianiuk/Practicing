#pragma once
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include <string>

namespace eight { double getVolumeOfCuboid(double length, double width, double height); }

class TaskGetVolumeOfCuboid : public ITask
{
public:
	TaskGetVolumeOfCuboid();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:
	std::string mName =	"Get Volume of Cuboid.";
	std::string mDescription = "Calculate the volume of a cuboid given its length, width, and height.";
};
