#include "Tasks/CodewarsTasks/EightLevel/TaskStringToNumber.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>

TaskStringToNumber::TaskStringToNumber(){}

void TaskStringToNumber::run()
{
	try {
		readerNamespace::InputReader reader;
		std::string s = reader.readLine("Enter a string representing a number: ");
		int result = eight::stringToNumber(s);
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

const std::string& TaskStringToNumber::getName() const noexcept { return mName; }
const std::string& TaskStringToNumber::getDescription() const noexcept { return mDescription; }
