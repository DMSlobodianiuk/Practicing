#pragma once
#include <vector>
#include <memory>
#include "ITask.h"
#include "Tasks/CodewarsTasks/EightLevel/EightLevelTasks.h"

class TasksList
{
public:
	TasksList();

	void fillList();

	void showTasks();
	
	size_t size() const;

	ITask* get(size_t index);
	
	void runTask(size_t index);

	const std::string& getName(size_t index);

	const std::string& getDescription(size_t index);

private:
	std::vector<std::unique_ptr<ITask>> tasks;
};
