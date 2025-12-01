#include "Tasks/CodewarsTasks/EightLevel/TaskGetVolumeOfCuboid.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskGetVolumeOfCuboid::TaskGetVolumeOfCuboid(){}

void TaskGetVolumeOfCuboid::run()
{
	try
	{
		readerNamespace::InputReader reader;
		double length = reader.readDouble("Enter length(double): ");
		double width = reader.readDouble("Enter width(double): ");
		double height = reader.readDouble("Enter height(double): ");
		double result = eight::getVolumeOfCuboid(length, width, height);
		std::cout << "Result: " << result << std::endl;
	}
	catch (const readerNamespace::InputError& ie)
	{
		std::cout << "Input error: :" << ie.what() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
}

const std::string& TaskGetVolumeOfCuboid::getName() const noexcept { return mName; }
const std::string& TaskGetVolumeOfCuboid::getDescription() const noexcept { return mDescription; }
