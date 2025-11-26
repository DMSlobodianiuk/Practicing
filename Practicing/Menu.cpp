#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu(){ }

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
			cout << "You selected 'Show Tasks'"<<endl;
			break;
		case 2:
			cout << "You selected 'Select Task'" << endl;
			break;
		case 3:
			cout << "You selected 'Show and Select Tasks'" << endl;
			break;
		case 4:
			cout << "You selected to exit" << endl;
			running = false;
			break;
		default:
			cout << "Please enter valid number" << endl;
			select();
			break;
		}
	}

}

void Menu::welcome()
{
	cout << "Welcome to the main menu, enter following number to contnue" << endl;

}

void Menu::mainMenu()
{
	cout<< "1. Show Tasks\n"
		"2. Select Task\n"
		"3. Show and Select Tasks\n"
		"4. Exit" << endl;
}

void Menu::select()
{
	cout << "Enter number: "; cin >> Menu::menuNumber;
}
