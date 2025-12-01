#include "Tasks/CodewarsTasks/EightLevel/TaskSquareOrSquareRoot.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskSquareOrSquareRoot::TaskSquareOrSquareRoot(){}

void TaskSquareOrSquareRoot::run()
{
	try
	{
		readerNamespace::InputReader reader;
		std::vector<int> array = reader.readIntVectorFromLine("Enter integers separated by spaces: ");
		std::vector<int> result = eight::squareOrSquareRoot(array);
		std::cout << "Result: ";
		for (const auto& num : result)
		{
			std::cout << num << " ";
		}
		std::cout << std::endl;
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

const std::string& TaskSquareOrSquareRoot::getName() const noexcept { return mName; }
const std::string& TaskSquareOrSquareRoot::getDescription() const noexcept { return mDescription; }
