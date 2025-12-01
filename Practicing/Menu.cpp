#include "Menu.h"
#include <iostream>
#include <cctype>
#include <string>

Menu::Menu() {}

void Menu::run()
{

	welcome();

	bool running = true;

	while (running)
	{
		mainMenu();
		select();

		switch (menuNumber)
		{
		case 1:
			std::cout << "You selected 'Show Tasks'\n";
			break;
		case 2:
			std::cout << "You selected 'Select Task'\n";
			break;
		case 3:
			std::cout << "You selected 'Show and Select Tasks'\n";
			break;
		case 4:
			std::cout << "You selected to exit\n";
			running = false;
			break;
		default:
			select();
			break;
		}
	}

}

void Menu::welcome()
{
	std::cout << "Welcome to the main menu, enter following number to contnue:\n";
}

void Menu::mainMenu()
{
	std::cout << "1. Show Tasks\n"
		"2. Select Task\n"
		"3. Show and Select Tasks\n"
		"4. Exit\n";
}

bool Menu::select()
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

			if (!ok || value > 5)
			{
				std::cout << "Invalid input. Please enter a number in range 1-4.\n";
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
