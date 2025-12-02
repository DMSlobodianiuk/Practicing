#include "Tasks/CodewarsTasks/SixLevel/TaskStockSummary.h"
#include "Levels/Six.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskStockSummary::TaskStockSummary() {}

void TaskStockSummary::run()
{
	try
	{
		readerNamespace::InputReader reader;
		std::vector<std::string> lstOfArt = reader.readStringVectorFromLine("Enter list of art codes (comma separated): ");
		std::vector<std::string> categories = reader.readStringVectorFromLine("Enter list of categories (comma separated): ");
		std::string result = six::stockSummary(lstOfArt, categories);
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

const std::string& TaskStockSummary::getName() const noexcept { return mName; }
const std::string& TaskStockSummary::getDescription() const noexcept { return mDescription; }
