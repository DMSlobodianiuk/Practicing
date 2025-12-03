#include "Menu.h"
#include "Tasks/TasksList.h"
#include <iostream>
#include <cctype>
#include <string>

Menu::Menu()
{
	tasksList.fillList();
}

void Menu::run()
{

	welcome();

	while (running)
	{
		mainMenu();
		selectMainMenu();

		switch (menuNumber)
		{
		case 1:
			separator();
			std::cout << "You selected 'Show Tasks'\n";
			showTasks();
			break;
		case 2:
			separator();
			std::cout << "You selected 'Select Task'\n";
			separator();
			std::cout << "Welcome to the task menu, enter following number to contnue:";
			taskMenu();
			break;
		case 3:
			separator();
			std::cout << "You selected to exit\n";
			running = false;
			break;
		default:
			selectMainMenu();
			break;
		}
	}

}

void Menu::separator()
{
	std::cout << "\n---------------------------------------------\n\n";
}

void Menu::welcome()
{
	std::cout << "Welcome to the main menu, enter following number to contnue:\n";
}

void Menu::mainMenu()
{
	separator();
	std::cout << "1. Show Tasks\n"
		"2. Select Task\n"
		"3. Exit\n";
}

void Menu::taskMenu()
{
	std::cout << "\nEnter task number [1 : " << tasksList.size() << "]\n";
	selectTask();
	std::cout << "\nYou selected Task#" << taskNumber << ": " << tasksList.getName(taskNumber-1) << "\n";
	std::cout << "Description: " << tasksList.getDescription(taskNumber-1) << "\n";
	
	std::cout << "\nPlease, enter 1-2 to\n"
		"1. Run selected Task\n"
		"2. Go back to Main menu\n"
		"3. Exit\n";
	selectTaskMenu();
	switch (taskMenuNumber)
	{
		case 1:
			separator();
			std::cout << "Running Task#" << taskNumber << ": " << tasksList.getName(taskNumber-1) << "\n";
			runTask(taskNumber - 1);
			separator();
			break;
		case 2:
			separator();
			std::cout << "Going back to Main menu\n";
			break;
		case 3:
			separator();
			std::cout << "Exiting program\n";
			running = false;
			break;
	}
}

void Menu::runTask(size_t index)
{
	tasksList.runTask(index);
}

void Menu::showTasks()
{
	tasksList.showTasks();
}

bool Menu::selectMainMenu()
{
	std::string line;

	while (true)
	{
		std::cout << "Enter number: "; std::cin;
		if (!std::getline(std::cin, line))
			return false;

		try
		{
			size_t idx = 0;
			int value = std::stoi(line, &idx);

			bool ok = true;

			for (size_t i = idx; i < line.size(); ++i)
			{
				if (!std::isspace(static_cast<unsigned char>(line[i])))
				{
					ok = false;
					break;
				}
			}

			if (!ok || value > 4)
			{
				std::cout << "Invalid input. Please enter a number in range 1-3.\n";
				continue;
			}
			menuNumber = value;
			return true;
		}
		catch (...)
		{
			std::cout << "Invalud input. Please enter a number.\n";
		}
	}
}

bool Menu::selectTask()
{
	std::string line;

	while (true)
	{
		std::cout << "Enter number: "; std::cin;
		if (!std::getline(std::cin, line))
			return false;

		try
		{
			size_t idx = 0;
			int value = std::stoi(line, &idx);

			bool ok = true;

			for (size_t i = idx; i < line.size(); ++i)
			{
				if (!std::isspace(static_cast<unsigned char>(line[i])))
				{
					ok = false;
					break;
				}
			}

			if (!ok || value > tasksList.size())
			{
				std::cout << "Invalid input. Please enter a number in range 1-"<<tasksList.size()<<".\n";
				continue;
			}
			taskNumber = value;
			return true;
		}
		catch (...)
		{
			std::cout << "Invalud input. Please enter a number.\n";
		}
	}
}

bool Menu::selectTaskMenu()
{
	std::string line;

	while (true)
	{
		std::cout << "Enter number: "; std::cin;
		if (!std::getline(std::cin, line))
			return false;

		try
		{
			size_t idx = 0;
			int value = std::stoi(line, &idx);

			bool ok = true;

			for (size_t i = idx; i < line.size(); ++i)
			{
				if (!std::isspace(static_cast<unsigned char>(line[i])))
				{
					ok = false;
					break;
				}
			}

			if (!ok || value > 3)
			{
				std::cout << "Invalid input. Please enter a number in range 1-3" << ".\n";
				continue;
			}
			taskMenuNumber = value;
			return true;
		}
		catch (...)
		{
			std::cout << "Invalud input. Please enter a number.\n";
		}
	}
}
