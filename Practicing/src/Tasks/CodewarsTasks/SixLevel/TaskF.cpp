#include "Tasks/CodewarsTasks/SixLevel/TaskF.h"
#include "Levels/Six.h"
#include "Helper/Reader.h"
#include <iostream>

TaskF::TaskF() {}

void TaskF::run()
{
	try
	{
		readerNamespace::InputReader reader;
		double x = reader.readDouble("Enter x to approximate it: ");
		double result = six::f(x);
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

const std::string& TaskF::getName() const noexcept { return mName; }
const std::string& TaskF::getDescription() const noexcept { return mDescription; }
