#include "TaskLitres.h"
#include "include/Levels/Eight.h"
#include <iostream>
#include <limits>

TaskLitres::TaskLitres(std::string name,std::string description)
	: mName(std::move(name)), mDescription(std::move(description))
{}

int TaskLitres::run()
{
	std::cout << "Enter time(hours,double): ";
	double t = 0.0;
}

const std::string& TaskLitres::getName() const noexcept { return mName; }
const std::string& TaskLitres::getDescription() const noexcept { return mDescription; }
