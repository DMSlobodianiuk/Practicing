#pragma once
#include <vector>
#include "ITask.h"

class TasksList
{
public:
	TasksList();

	std::vector<ITask> tasks;
	std::vector<ITask> tasksTemp;

	void fillList();

	void clearList();
};
