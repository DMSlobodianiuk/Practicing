#include "Tasks/CodewarsTasks/SixLevel/TaskMean.h"
#include "Levels/Six.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>
#include <vector>

TaskMean::TaskMean(){}

void TaskMean::run()
{
	try
	{
		readerNamespace::InputReader reader;
		std::string town = reader.readLine("Enter town (string): ");
		std::string strng = reader.readLine("Enter rainfall data: ");
		double result = six::mean(town, strng);
		if (std::isnan(result))
		{
			std::cout << "Result(mean): NaN (town not found)" << std::endl;
		}
		else
		{
			std::cout << "Result(mean): " << result << std::endl;
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

const std::string& TaskMean::getName() const noexcept { return mName; }
const std::string& TaskMean::getDescription() const noexcept { return mDescription; }
