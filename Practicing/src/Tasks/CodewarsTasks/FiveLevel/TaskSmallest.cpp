#include "Tasks/CodewarsTasks/FiveLevel/TaskSmallest.h"
#include "Levels/Five.h"
#include "Helper/Reader.h"
#include <iostream>

TaskSmallest::TaskSmallest() {}

void TaskSmallest::run()
{
	try {
		readerNamespace::InputReader reader;
		long long n = reader.readLongLong("Enter a positive number n (long long): ");
		auto result = five::smallest(n);
		std::cout << "Result: [";
		for (size_t i = 0; i < result.size(); ++i)
		{
			std::cout << result[i];
			if (i + 1 < result.size()) std::cout << ", ";
		}
		std::cout << "]" << std::endl;
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

const std::string& TaskSmallest::getName() const noexcept { return mName; }
const std::string& TaskSmallest::getDescription() const noexcept { return mDescription; }
