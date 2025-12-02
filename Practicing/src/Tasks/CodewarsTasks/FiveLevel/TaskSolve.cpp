#include "Tasks/CodewarsTasks/FiveLevel/TaskSolve.h"
#include "Levels/Five.h"
#include "Helper/Reader.h"
#include <iostream>

TaskSolve::TaskSolve() {}

void TaskSolve::run()
{
	try
	{
		readerNamespace::InputReader reader;
		double m = reader.readDouble("Enter m (double): ");
		double result = five::solve(m);
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

const std::string& TaskSolve::getName() const noexcept { return mName; }
const std::string& TaskSolve::getDescription() const noexcept { return mDescription; }
