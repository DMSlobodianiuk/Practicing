#include "Tasks/CodewarsTasks/EightLevel/TaskDivisibleBy.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>

TaskDivisibleBy::TaskDivisibleBy(){}

void TaskDivisibleBy::run()
{
	try {
		readerNamespace::InputReader reader;
		std::vector<int> numbers = reader.readIntVectorFromLine("Enter integers separated by spaces: ");
		int divisor = reader.readInt("Enter divisor (int): ");
		std::vector<int> result = eight::divisibleBy(numbers, divisor);
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

const std::string& TaskDivisibleBy::getName() const noexcept { return mName; }
const std::string& TaskDivisibleBy::getDescription() const noexcept { return mDescription; }
