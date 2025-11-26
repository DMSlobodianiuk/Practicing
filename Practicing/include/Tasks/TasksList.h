#pragma once
#include <vector>
#include "Task.h"

class TasksList
{
public:
	TasksList();

	std::vector<Task> tasks;
	std::vector<Task> tasksTemp;

	void fillList();

	void clearList();
};
