#pragma once
#include <vector>
#include <string>

namespace six 
{

	long long findNb(long long m);

	double f(double x);

	double mean(std::string town, const std::string& string);

	double variance(std::string town, const std::string& string);

	std::string stockSummary(std::vector<std::string>& lstOfArt, std::vector<std::string>& categories);

}
