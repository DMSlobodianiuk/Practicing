#pragma once
#include <string>
#include <vector>
#include <functional>

class ITask
{
public:
	ITask();

	virtual void getName() const = 0;

	virtual void execute() = 0;

};
