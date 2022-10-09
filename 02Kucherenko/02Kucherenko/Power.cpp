#include "Power.h"
#include <cmath>

double power(double x, int exponent, unsigned int& steps) {
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
	double res = 1;
	for (; steps < abs(exponent); ++steps) {
		if (exponent < 0)
			res *= 1 / x;
		else
			res *= x;
	}
	return res;
}

double power_recursive_hlpr(double x, int exponent, unsigned int& steps) {
	if (!exponent) {
		steps++;
		return 1;
	}
	if (exponent < 0) {
		steps++;
		return (1 / x * power_recursive_hlpr(x, exponent + 1, steps));
	}
	steps++;
	return (x * power_recursive_hlpr(x, exponent - 1, steps));
}

double power_recursive(double x, int exponent, unsigned int& steps) {
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
	return power_recursive_hlpr(x, exponent, steps);
}


