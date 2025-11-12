#include "Five.h"
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

namespace five {

	std::pair<long long, long long> gap(int g, long long m, long long n)
	{
		long long g1 = m;
		long long g2 = m;

		for (int i = m; i <= n; i++)
		{
			if (isPrime(i))
			{
				g2 = i;
				if (g2 - g1 == g && isPrime(g1) && isPrime(g2))
				{
					return { g1,g2 };
				}
				else
					g1 = i;
			}
		}

		return { 0,0 };
	}

	long zeros(long n)
	{
		long zero = 0;
		int power = 1;

		while (pow(5, power) <= n)
		{
			zero += n / pow(5, power);
			power += 1;
		}
		return zero;
	}

	unsigned long long perimeter(int n)
	{
		return fiboSum(n) * 4;
	}

	double solve(double m)
	{
		double sqrtD = std::sqrt(4.0 * m + 1.0);
		double x = (2.0 * m + 1.0 - sqrtD) / (2.0 * m);
		return x;
	}

	std::vector<long long> smallest(long long n)
	{
		std::string s = std::to_string(n);
		long long minValue = n;
		int bestI = 0;
		int bestJ = 0;

		for (int i = 0; i < s.length(); ++i)
		{
			for (int j = 0; j < s.length(); ++j)
			{
				if (i == j) continue;

				std::string temp = s;

				char c = temp[i];

				temp.erase(temp.begin() + i);

				temp.insert(temp.begin() + j, c);

				long long val = stoll(temp);

				if (val < minValue || (val == minValue && i < bestI) || (val == minValue && i == bestI && j < bestJ))
				{
					minValue = val;
					bestI = i;
					bestJ = j;
				}

			}
		}

		std::vector<long long> res;

		res.push_back(minValue);
		res.push_back(bestI);
		res.push_back(bestJ);

		for (long long x : res)
			std::cout << x << " ";
		std::cout << std::endl;

		return res;
	}

}
