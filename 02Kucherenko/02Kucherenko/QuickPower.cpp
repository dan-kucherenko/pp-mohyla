#include "QuickPower.h"
#include "Power.h"
#include <cassert>
#include <cmath>

double quick_power(double x, int exponent, unsigned int& steps) {
	double res = 1;
	const double x_helper = x;
	int exponent_helper = exponent;
	unsigned int steps_helper = 0;
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
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
	while (exponent < 0) {
		if (abs(exponent) % 2) {
			exponent++;
			res *= 1 / x;
		} else {
			exponent /= 2;
			x *= x;
		}
		steps++;
	}
	if (exponent > 0)
		assert(res == power(x_helper, exponent_helper, steps_helper));
	return res;
}

double quick_power_recursive_hlpr(double x, int exponent, unsigned int& steps) {
	steps++;
	if (!exponent) {
		return 1;
	}
	if (abs(exponent) % 2) {
		if (exponent < 0)
			return (1 / x * quick_power_recursive_hlpr(x, exponent + 1, steps));
		return (x * quick_power_recursive_hlpr(x, exponent - 1, steps));
	}
	const double temp_res = quick_power_recursive_hlpr(x, exponent / 2, steps);
	return temp_res * temp_res;
}

double quick_power_recursive(double x, int exponent, unsigned int& steps) {
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
	return quick_power_recursive_hlpr(x, exponent, steps);
}

