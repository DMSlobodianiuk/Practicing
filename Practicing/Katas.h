#pragma once
#include <vector>
#include <string>

int litres(double time);

double getVolumeOfCuboid(double length, double width, double height);

double converter(int mpg);

std::vector<int> squareOrSquareRoot(const std::vector<int>& array);

std::vector<int> countPositivesSumNegatives(std::vector<int> input);

int string_to_number(const std::string& s);

bool amIWilson(unsigned n);

double twoDecimalPlaces(double n);

std::vector<int> divisible_by(std::vector<int> numbers, int divisor);
