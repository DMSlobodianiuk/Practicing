#include "Tasks/CodewarsTasks/EightLevel/TaskTwoDecimalPlaces.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>
TaskTwoDecimalPlaces::TaskTwoDecimalPlaces(){}

void TaskTwoDecimalPlaces::run()
{
	try {
		readerNamespace::InputReader reader;
		double n = reader.readDouble("Enter a number (double): ");
		double result = eight::twoDecimalPlaces(n);
		std::cout << "Result: " << result << std::endl;
	}
	catch (const readerNamespace::InputError& ie)
	{
		std::cout << "Input error: " << ie.what() << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
}
const std::string& TaskTwoDecimalPlaces::getName() const noexcept { return mName; }
const std::string& TaskTwoDecimalPlaces::getDescription() const noexcept { return mDescription; }
