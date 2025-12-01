#include "Tasks/CodewarsTasks/EightLevel/TaskConverter.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>

TaskConverter::TaskConverter(){}

void TaskConverter::run()
{
	try {
		readerNamespace::InputReader reader;
		int mpg = reader.readDouble("Enter miles per gallon (mpg, int): ");

		double result = eight::converter(mpg);
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

const std::string& TaskConverter::getName() const noexcept { return mName; }
const std::string& TaskConverter::getDescription() const noexcept { return mDescription; }
