#include<iostream>
#include "include.h"
#include "Menu.h"
#include "Tasks/ITask.h"
#include "Levels/Eight.h"
#include "Tasks/CodewarsTasks/EightLevel/TaskLitres.h"

int main()
{	
	TaskLitres task("Litres", "Calculate litres consumed over time at a rate of 0.5 litres per hour.");

	task.run();


	return 0;
}
