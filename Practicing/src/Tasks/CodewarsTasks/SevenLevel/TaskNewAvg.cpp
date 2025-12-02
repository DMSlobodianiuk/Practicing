#include "Tasks/CodewarsTasks/SevenLevel/TaskNewAvg.h"
#include "Levels/Seven.h"
#include "Helper/Reader.h"
#include <iostream>

TaskNewAvg::TaskNewAvg() {}

void TaskNewAvg::run()
{
	try 
	{
		readerNamespace::InputReader reader;
		std::vector<double> arr = reader.readDoubleVectorFromLine("Enter integers(double) separated by spaces:");
		double navg = reader.readDouble("Enter new avarage: ");
		long long result = seven::newAvg(arr, navg);
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

const std::string& TaskNewAvg::getName() const noexcept { return mName; }
const std::string& TaskNewAvg::getDescription() const noexcept { return mDescription; }
