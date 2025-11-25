#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu(){ }

void Menu::run()
{
	
	welcome();
	select();
	/*while (true)
	{

	}*/

}

void Menu::welcome()
{
	cout << "Welcome to the main menu, enter following number to contnue\n"
		"1. Show Tasks\n"
		"2. Select Task\n"
		"3. Exit" << endl;
}

void Menu::select()
{
	cout << "Enter number: "; cin >> Menu::menuNumber;
}
