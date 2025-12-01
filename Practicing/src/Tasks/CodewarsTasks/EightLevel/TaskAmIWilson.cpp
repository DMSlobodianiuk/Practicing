#include "Tasks/CodewarsTasks/EightLevel/TaskAmIWilson.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>

TaskAmIWilson::TaskAmIWilson(){}

void TaskAmIWilson::run()
{
	try {
		readerNamespace::InputReader reader;
		unsigned n = reader.readUnsigned("Enter a number (unsigned int): ");
		bool result = eight::amIWilson(n);
		std::cout << "Result: " << (result ? "true" : "false") << std::endl;
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

const std::string& TaskAmIWilson::getName() const noexcept { return mName; }
const std::string& TaskAmIWilson::getDescription() const noexcept { return mDescription; }
