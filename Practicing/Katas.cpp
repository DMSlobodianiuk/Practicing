#include "Katas.h"
#include <cmath>

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