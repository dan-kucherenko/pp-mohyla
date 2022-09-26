#include <iostream>
#include "Lg.h"

int lg(double x) {
	int lg_result = 0;
	double base = 10, base_divider = base, divisor = 1;
	if (x <= 0) {
		std::cout << "Error in input variables: x is negative or equals to 0" << std::endl;
		return 0;
	} else if ((int)x % (int)base == 0 && x > 1) {
		while (x >= base) {
			x /= base;
			lg_result++;
		}
		return lg_result;
	} else if (x > 0 && x < 1) {
		while (x != divisor) {
			divisor /= base_divider;
			lg_result--;
		}
		return lg_result;
	}
}
