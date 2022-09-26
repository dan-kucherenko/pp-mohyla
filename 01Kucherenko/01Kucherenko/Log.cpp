#include <iostream>

double logarithm(double x, int base) {
	double log_result = 0, divisor = 1;
	if (x <= 0)
		std::cout << "Error in input variables: x is negative or equals to 0" << std::endl;
	else if ((int)x % (int)base == 0 && x > 1) {
		while (x >= base) {
			x /= base;
			log_result++;
		}
		return log_result;
	} else if (x > 0 && x < 1) {
		while (divisor >= x) {
			divisor /= base;
			log_result--;
		}
		return log_result;
	}
}
