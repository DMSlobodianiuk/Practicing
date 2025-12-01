#include "Tasks/CodewarsTasks/TaskLitres.h"
#include "include/Levels/Eight.h"
#include "Reader.h"
#include <iostream>
#include <limits>

TaskLitres::TaskLitres(std::string name,std::string description)
	: mName(std::move(name)), mDescription(std::move(description))
{}

int TaskLitres::run()
{
	try
	{
		helper::InputReader reader;
		double t = reader.readDouble("Enter time (hours, double): ");

		int result = eight::litres(t);
		std::cout << "Result: " << result << std::endl;
		return 0;
	}
	catch (const helper::InputError& ie)
	{
		std::cout << "Input error: " << ie.what() << std::endl;
		return 1;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
		return 2;
	}
}

const std::string& TaskLitres::getName() const noexcept { return mName; }
const std::string& TaskLitres::getDescription() const noexcept { return mDescription; }
