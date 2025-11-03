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

long long newAvg(std::vector<double>& arr, double navg);

std::string seriesSum(int n);

long long findNb(long long m);

double f(double x);

double mean(std::string town, const std::string &string);

double variance(std::string town, const std::string& string);

std::string stockSummary(std::vector<std::string>& lstOfArt, std::vector<std::string>& categories);

std::pair<long long, long long> gap(int g, long long m, long long n);

long zeros(long n);

unsigned long long perimeter(int n);
