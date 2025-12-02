#include "Tasks/CodewarsTasks/FiveLevel/TaskPerimeter.h"
#include "Levels/Five.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskPerimeter::TaskPerimeter() {}

void TaskPerimeter::run()
{
	try
	{
		readerNamespace::InputReader reader;
		int n = reader.readInt("Enter n (number of squares, int): ");
		unsigned long long result = five::perimeter(n);
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

const std::string& TaskPerimeter::getName() const noexcept { return mName; }
const std::string& TaskPerimeter::getDescription() const noexcept { return mDescription; }
