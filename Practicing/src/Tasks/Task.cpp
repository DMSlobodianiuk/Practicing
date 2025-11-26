#include "Tasks/Task.h"
#include "Levels/Five.h"
#include <iostream>

using namespace std;

Task::Task(const string& name, const string& description, function<void()>func)
	:name(name), description(description), executeFunction(func)
{
	id += 1;
};

void Task::execute() { executeFunction(); }

int Task::getId() const { return id; }

const string& Task::getName() const{ return name; }

const string& Task::getDescription() const { return description; }
