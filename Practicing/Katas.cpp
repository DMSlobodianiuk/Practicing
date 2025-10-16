#include "Katas.h"
#include <cmath>
#include <vector>
#include <iostream>

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
