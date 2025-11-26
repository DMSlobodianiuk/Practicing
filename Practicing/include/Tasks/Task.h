#pragma once
#include <string>
#include <functional>

using namespace std;

class Task
{
private:
	int id = 0;
	string name;
	string description;
	function<void()> executeFunction;
public:
	Task(const string& name, const string& description, function<void()>func);

	void execute();

	int getId() const;

	const string& getName() const;

	const string& getDescription() const;
};
