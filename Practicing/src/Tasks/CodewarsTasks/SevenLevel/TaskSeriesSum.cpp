#include "Tasks/CodewarsTasks/SevenLevel/TaskSeriesSum.h"
#include "Levels/Seven.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskSeriesSum::TaskSeriesSum() {}

void TaskSeriesSum::run()
{
	try
	{
        readerNamespace::InputReader reader;
		int n = reader.readInt("Enter the number of terms (n, int): ");
        std::string result = seven::seriesSum(n);
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

const std::string& TaskSeriesSum::getName() const noexcept { return mName; }
const std::string& TaskSeriesSum::getDescription() const noexcept { return mDescription;  }
