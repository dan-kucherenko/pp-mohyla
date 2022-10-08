#include "QuickPower.h"
#include "Power.h"
#include <cassert>

double quick_power(double x, unsigned int exponent, unsigned int& steps) {
	double res = 1;
	const double x_helper = x;
	unsigned int exponent_helper = exponent, steps_helper = 0;
	steps = 0;
	while (exponent > 0) {
		if (exponent % 2) {
			exponent--;
			res *= x;
		} else {
			exponent /= 2;
			x *= x;
		}
		steps++;
	}
	assert(res == power(x_helper, exponent_helper, steps_helper));
	return res;
}

double quick_power_recursive(double x, unsigned int exponent, unsigned int& steps) {
	if (!exponent) {
		steps++;
		return 1;
	}
	if (exponent % 2) {
		steps++;
		return (x * quick_power_recursive(x, exponent - 1, steps));
	}
	steps++;
	const double temp_res = quick_power_recursive(x, exponent / 2, steps);
	return temp_res * temp_res;
}
