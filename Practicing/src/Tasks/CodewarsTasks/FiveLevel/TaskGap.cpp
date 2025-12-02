#include "Tasks/CodewarsTasks/FiveLevel/TaskGap.h"
#include "Levels/Five.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskGap::TaskGap() {}


void TaskGap::run()
{
	try
	{
		readerNamespace::InputReader reader;
		int g = reader.readInt("Enter gap size (int): ");
		long long m = reader.readLongLong("Enter start of range (long long): ");
		long long n = reader.readLongLong("Enter end of range (long long): ");
		auto result = five::gap(g, m, n);
		if (result.first == 0 && result.second == 0)
		{
			std::cout << "No such primes found in the given range." << std::endl;
		}
		else
		{
			std::cout << "Result: (" << result.first << ", " << result.second << ")" << std::endl;
		}
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

const std::string& TaskGap::getName() const noexcept { return mName; }
const std::string& TaskGap::getDescription() const noexcept { return mDescription; }
