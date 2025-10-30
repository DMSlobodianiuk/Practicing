#include "Katas.h"
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

int litres(double time) 
{
	double l = time / 2;
	return l;
}

double getVolumeOfCuboid(double length, double width, double height)
{
	return length*width*height;
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
	//for (size_t i = 0; i < array.size(); ++i)
	//{
	//	double temp = sqrt(array[i]);
	//	if (std::floor(temp) == temp)
	//		res.push_back(temp);
	//	else
	//		res.push_back(array[i] * array[i]);
	//}

	//for (auto it = array.begin(); it != array.end(); ++it)
	//{
	//	double temp = sqrt(*it);
	//	if (std::floor(temp) == temp)
	//		res.push_back(temp);
	//	else
	//		res.push_back(*it * *it);
	//}

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
	return round(n*100.0)/100.0;
}

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
	std::vector<int> res;

	for (auto it = numbers.begin(); it != numbers.end(); ++it)
		if (*it % divisor == 0)
			res.push_back(*it);

	return res;
}

long long newAvg(std::vector<double>& arr, double navg)
{
	if (arr.size() == 0)
		return navg;


	if (navg < 0)
		throw std::logic_error("");

	int n = arr.size();
	double sum = 0;
	for (double i : arr)
		sum += i;
	double k = (n + 1) * navg;

	double x = k - sum;

	if (x < 0)
		throw std::logic_error("");

	//try
	//{
	//	if (x < 0)
	//		throw std::logic_error("x is negative");
	//}
	//catch (const std::logic_error& err)
	//{
	//	std::cout << "Negative" << std::endl;
	//}
	/*if (x < 0)
		throw std::logic_error("x is negative");*/

	x = round(x);
	return x;
}

std::string seriesSum(int n)
{
	double res = 0;

	for (int i = 1; i <= n; i++)
		res += 1.0 / (3 * i - 2);

	std::ostringstream oss;
	oss << std::fixed << std::setprecision(2) << res;

	return oss.str();
}

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

	std::vector<double> neededvalues= getNeededValues(neededLine);

	if(neededvalues.empty())
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

	if(neededValues.empty())
		return -1;

	double variancevalue = 0;
	double meanvalue = mean(town, string);

	for (auto it = neededValues.begin(); it != neededValues.end(); ++it)
		variancevalue += pow(*it-meanvalue,2);

	return variancevalue/neededValues.size();
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

std::pair<long long, long long> gap(int g, long long m, long long n)
{
	std::vector<long long> primes;
	
	long long g1 = m;
	long long g2 = m;

	for (int i = m; i <= n; i++)
	{
		if (isPrime(i))
		{
			g2 = i;
			primes.push_back(i);
			if (g2 - g1 == g && isPrime(g1) && isPrime(g2))
			{
				std::cout << g1 << " " << i;
				return { g1,g2 };
			}
			else
				g1 = i;
		}
	}


	return { 0,0 };
}
