#include<iostream>
#include "include.h"
#include "Menu.h"
#include "Tasks/Task.h"
#include "Levels/Eight.h"

using namespace std;

int main()
{	

	double testValue = 10;

	Task task("litres", "test", [=]() {
		std::cout << eight::litres(testValue) << std::endl;
		});
	
	return 0;
}
