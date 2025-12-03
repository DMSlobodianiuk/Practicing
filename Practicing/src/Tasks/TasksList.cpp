#include "Tasks/TasksList.h"
#include "Tasks/CodewarsTasks/EightLevel/EightLevelTasks.h"
#include "Tasks/CodewarsTasks/SevenLevel/SevenLevelTasks.h"
#include "Tasks/CodewarsTasks/SixLevel/SixLevelTasks.h"
#include "Tasks/CodewarsTasks/FiveLevel/FiveLevelTasks.h"
#include <iostream>

TasksList::TasksList() {};

void TasksList::fillList()
{
	tasks.clear();

	tasks.push_back(std::make_unique<TaskAmIWilson>());
	tasks.push_back(std::make_unique<TaskConverter>());
	tasks.push_back(std::make_unique<TaskCountPositivesSumNegatives>());
	tasks.push_back(std::make_unique<TaskDivisibleBy>());
	tasks.push_back(std::make_unique<TaskLitres>());
	tasks.push_back(std::make_unique<TaskSquareOrSquareRoot>());
	tasks.push_back(std::make_unique<TaskStringToNumber>());
	tasks.push_back(std::make_unique<TaskTwoDecimalPlaces>());

	tasks.push_back(std::make_unique<TaskNewAvg>());
	tasks.push_back(std::make_unique<TaskSeriesSum>());

	tasks.push_back(std::make_unique<TaskF>());
	tasks.push_back(std::make_unique<TaskFindNb>());
	tasks.push_back(std::make_unique<TaskMean>());
	tasks.push_back(std::make_unique<TaskStockSummary>());
	tasks.push_back(std::make_unique<TaskVariance>());

	tasks.push_back(std::make_unique<TaskGap>());
	tasks.push_back(std::make_unique<TaskPerimeter>());
	tasks.push_back(std::make_unique<TaskSmallest>());
	tasks.push_back(std::make_unique<TaskSolve>());
	tasks.push_back(std::make_unique<TaskZeros>());

};

size_t TasksList::size() const
{
	return tasks.size();
}

ITask* TasksList::get(size_t index)
{
	return tasks[index].get();
}

void TasksList::runTask(size_t index)
{
	tasks[index]->run();
}

void TasksList::showTasks()
{
	for (size_t i = 0; i < tasks.size(); i++)
	{
		std::cout <<i + 1 << "." << tasks[i]->getName() << std::endl;
	}
}

const std::string& TasksList::getName(size_t index)
{
	return tasks[index]->getName();
}

const std::string& TasksList::getDescription(size_t index)
{
	return tasks[index]->getDescription();
}
