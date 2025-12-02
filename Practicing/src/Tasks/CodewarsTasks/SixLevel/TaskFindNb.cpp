#include "Tasks/CodewarsTasks/SixLevel/TaskFindNb.h"
#include "Levels/Six.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskFindNb::TaskFindNb() {}

void TaskFindNb::run()
{
	try
	{
		readerNamespace::InputReader reader;
		long long m = reader.readLongLong("Enter total volume m (long long): ");
		long long result = six::findNb(m);
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

const std::string& TaskFindNb::getName() const noexcept { return mName; }
const std::string& TaskFindNb::getDescription() const noexcept { return mDescription; }
