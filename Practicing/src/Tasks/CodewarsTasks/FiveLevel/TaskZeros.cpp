#include "Tasks/CodewarsTasks/FiveLevel/TaskZeros.h"
#include "Levels/Five.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskZeros::TaskZeros() {}

void TaskZeros::run()
{
	try
	{
		readerNamespace::InputReader reader;
		long n = reader.readLong("Enter a non-negative integer N to compute the number of trailing zeros in N!: ");
		if (n < 0)
		{
			throw std::invalid_argument("N must be a non-negative integer.");
		}
		long result = five::zeros(n);
		std::cout << "Number of trailing zeros in " << n << "! is: " << result << std::endl;
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


const std::string& TaskZeros::getName() const noexcept { return mName; }
const std::string& TaskZeros::getDescription() const noexcept { return mDescription; }
