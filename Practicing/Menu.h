#pragma once

class Menu
{
private:
	int menuNumber = 0;
public:
	Menu();

	void run();

	void welcome();

	bool select();

	void mainMenu();
};

