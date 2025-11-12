#include "Seven.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <map>
#include <format>
#include <utility>

namespace seven 
{

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

}
