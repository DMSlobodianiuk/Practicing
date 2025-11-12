#include "Six.h"
#include "HelperFunction.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <map>
#include <format>
#include <utility>

using namespace helper;

namespace six 
{

	long long findNb(long long m)
	{
		long long res = 0;

		long long i = 0;

		while (res < m)
		{
			++i;
			res += i * i * i;
		}

		return (res == m) ? i : -1;
	}

	double f(double x)
	{
		return 1 / (sqrt(1 + x) - 1);
	}

	double mean(std::string town, const std::string& string)
	{
		std::vector<std::string> towns = { "Rome", "London", "Paris", "NY", "Vancouver", "Sydney", "Bangkok", "Tokyo",
		  "Beijing", "Lima", "Montevideo", "Caracas", "Madrid", "Berlin" };

		if (std::find(towns.begin(), towns.end(), town) == towns.end())
			return -1;

		std::string neededLine = getNeededLine(string, town);

		if (neededLine.empty())
			return -1;

		std::vector<double> neededvalues = getNeededValues(neededLine);

		if (neededvalues.empty())
			return -1;

		double meanvalue = 0.0;

		for (double v : neededvalues)
		{
			meanvalue += v;
		}

		return meanvalue / neededvalues.size();
	}

	double variance(std::string town, const std::string& string)
	{
		std::vector<std::string> towns = { "Rome", "London", "Paris", "NY", "Vancouver", "Sydney", "Bangkok", "Tokyo",
		  "Beijing", "Lima", "Montevideo", "Caracas", "Madrid", "Berlin" };

		if (std::find(towns.begin(), towns.end(), town) == towns.end())
			return -1;

		std::string neededLine = getNeededLine(string, town);

		if (neededLine.empty())
			return -1;

		std::vector<double> neededValues = getNeededValues(neededLine);

		if (neededValues.empty())
			return -1;

		double variancevalue = 0;
		double meanvalue = mean(town, string);

		for (auto it = neededValues.begin(); it != neededValues.end(); ++it)
			variancevalue += pow(*it - meanvalue, 2);

		return variancevalue / neededValues.size();
	}

	std::string stockSummary(std::vector<std::string>& lstOfArt, std::vector<std::string>& categories)
	{
		std::string res = "";
		if (categories.size() == 0 or lstOfArt.size() == 0)
			return res;

		std::map<char, unsigned> stock;

		for (std::string str : categories)
		{
			stock[str[0]] = 0;
		}

		for (std::string str : lstOfArt)
		{
			if (stock.count(str[0]) == 0 && (std::find(categories.begin(), categories.end(), std::string(1, str[0])) != categories.end()))
			{
				stock[str[0]] = std::stod(str.substr(str.find(" ") + 1, str.length()));
			}
			else if (stock.count(str[0]) > 0 && (std::find(categories.begin(), categories.end(), std::string(1, str[0])) != categories.end()))
			{
				stock[str[0]] += std::stod(str.substr(str.find(" ") + 1, str.length()));
			}
		}

		for (const std::string& c : categories)
		{
			char key = c[0];
			unsigned val = stock[key];
			res += "(" + std::string(1, key) + " : " + std::to_string(val) + ") - ";
		}

		return res.substr(0, res.length() - 3);
	}

}
