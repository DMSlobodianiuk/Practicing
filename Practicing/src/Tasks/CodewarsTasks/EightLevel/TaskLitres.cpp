#include "Tasks/CodewarsTasks/EightLevel/TaskLitres.h"
#include "Levels/Eight.h"
#include "Helper/Reader.h"
#include <iostream>
#include <limits>

TaskLitres::TaskLitres(){}

void TaskLitres::run()
{
    try
    {
        readerNamespace::InputReader reader;
        double t = reader.readDouble("Enter time (hours, double): ");

        int result = eight::litres(t);
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

const std::string& TaskLitres::getName() const noexcept { return mName; }
const std::string& TaskLitres::getDescription() const noexcept { return mDescription; }
