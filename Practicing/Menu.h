#pragma once
#include "Tasks/TasksList.h"

class Menu
{
private:
	bool running = true;
	int menuNumber = 0;
	int taskNumber = 0;
	int taskMenuNumber = 0;
	TasksList tasksList;
public:
	Menu();

	void run();

	void welcome();

	bool selectMainMenu();

	bool selectTask();

	bool selectTaskMenu();

	void showTasks();

	void mainMenu();

	void taskMenu();

	void separator();

	void runTask(size_t index);
};

