#include "Power.h"

double power(double x, unsigned int exponent, unsigned int& steps) {
	double res = 1;
	for (steps = 0; steps < exponent; ++steps)
		res *= x;
	return res;
}

double power_recursive(double x, unsigned int exponent, unsigned int& steps) {
	if (!exponent) {
		steps++;
		return 1;
	}
	steps++;
	return (x * power_recursive(x, exponent - 1, steps));
}

