#include "Eight.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <map>
#include <format>
#include <utility>

namespace eight
{
	int litres(double time)
	{
		double l = time / 2;
		return l;
	}

	double getVolumeOfCuboid(double length, double width, double height)
	{
		return length * width * height;
	}

	double converter(int mpg)
	{
		double gallon = 4.54609188;
		double mile = 1.609344;
		return round(mpg / gallon * mile * 100.0) / 100.0;
	}

	std::vector<int> squareOrSquareRoot(const std::vector<int>& array)
	{
		std::vector<int> res;

		for (int x : array)
		{
			double temp = sqrt(x);
			if (std::floor(temp) == temp)
				res.push_back(temp);
			else
				res.push_back(x * x);
		}

		return res;
	}

	std::vector<int> countPositivesSumNegatives(std::vector<int> input)
	{
		std::vector<int> res;

		if (input.size() == 0)
			return res;

		int sum = 0;
		int count = 0;

		for (auto it = input.begin(); it != input.end(); ++it)
		{
			if (*it > 0)
				count += 1;
			else
				sum += *it;
		}

		std::cout << "count: " << count << "\nsum: " << sum << std::endl;
		res.push_back(count);
		res.push_back(sum);

		return res;
	}

	int string_to_number(const std::string& s)
	{
		return std::stoi(s);
	}

	bool amIWilson(unsigned n)
	{
		if (n == 5 or n == 13 or n == 563)
			return true;
		else
			return false;
	}

	double twoDecimalPlaces(double n)
	{
		return round(n * 100.0) / 100.0;
	}

	std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
	{
		std::vector<int> res;

		for (auto it = numbers.begin(); it != numbers.end(); ++it)
			if (*it % divisor == 0)
				res.push_back(*it);

		return res;
	}

}
