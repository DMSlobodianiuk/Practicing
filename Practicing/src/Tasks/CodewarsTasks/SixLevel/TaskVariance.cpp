#include "Tasks/CodewarsTasks/SixLevel/TaskVariance.h"
#include "Levels/Six.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>
#include <vector>

TaskVariance::TaskVariance() {}

void TaskVariance::run()
{
	try
	{
		readerNamespace::InputReader reader;
		std::string town = reader.readLine("Enter town (string): ");
		std::string strng = reader.readLine("Enter rainfall data: ");
		double result = six::variance(town, strng);
		if (std::isnan(result))
		{
			std::cout << "Result(variance): NaN (town not found)" << std::endl;
		}
		else
		{
			std::cout << "Result(variance): " << result << std::endl;
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

const std::string& TaskVariance::getName() const noexcept { return mName; }
const std::string& TaskVariance::getDescription() const noexcept { return mDescription; }
