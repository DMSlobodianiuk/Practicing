#pragma once
#include "Tasks/ITask.h"
#include "Levels/Five.h"
#include <string>

namespace five { std::pair<long long, long long> gap(int g, long long m, long long n);  }

class TaskGap : public ITask
{
public:
	TaskGap();

	void run() override;

	const std::string& getName() const noexcept override;
	const std::string& getDescription() const noexcept override;

private:

	std::string mName = "Gap in Primes";
	std::string mDescription = "The prime numbers are not regularly spaced. For example from 2 to 3 the gap is 1. From 3 to 5 the gap is 2. From 7 to 11 it is 4. Between 2 and 50 we have the following pairs of 2-gaps primes: 3-5, 5-7, 11-13, 17-19, 29-31, 41-43.";
};
