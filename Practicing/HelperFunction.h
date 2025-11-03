#pragma once
#include <vector>
#include <string>

std::vector<std::string> splitString(const std::string& input, const std::string delimiter);

std::string getNeededLine(const std::string& input, std::string town);

std::vector<double> getNeededValues(const std::string &input);

bool isPrime(int n);

long fiboSum(int n);
