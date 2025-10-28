#include "HelperFunction.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <iterator>

using namespace std;

std::vector<std::string> splitString(const std::string &input, const std::string delimiter)
{

	std::vector<std::string> tokens;

	size_t start = 0;
	size_t end;
	
	while ((end = input.find(delimiter, start)) != std::string::npos)
	{
		tokens.push_back(input.substr(start, end - start));
		start = end + delimiter.length();
	}

	tokens.push_back(input.substr(start));

	return tokens;
}

std::string getNeededLine(const std::string& input, std::string town)
{
	size_t cityPos = input.find(town + ":");
	if (cityPos == std::string::npos)
		return "";

	size_t endPos = input.find("\n", cityPos);
	if (endPos == std::string::npos)
		endPos = input.size();

	std::string substr = input.substr(cityPos + town.length() + 1, endPos - (cityPos + town.length()));

	return substr;
}

std::vector<double> getNeededValues(const std::string &input)
{
	std::vector<double> values;
	std::string segment;
	std::stringstream ss(input);
	std::vector<std::string> stringvalues;

	while (std::getline(ss,segment,','))
	{
		size_t spacePos = segment.find(' ');
		if (spacePos == std::string::npos)
			continue;

		try {
			values.push_back(std::stod(segment.substr(spacePos + 1)));
		}
		catch (...)
		{
		}
	}

	return values;
}
