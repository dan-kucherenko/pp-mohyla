//
// Developed by Daniil Kucherenko on 08.12.22
//

#include "Task9_10.h"

#include <cmath>

double quick_pow(double x, int exponent) {
	double res = 1;
	if (!x)
		return 0;
	while (exponent > 0) {
		if (exponent % 2) {
			exponent--;
			res *= x;
		}
		else {
			exponent /= 2;
			x *= x;
		}
	}
	while (exponent < 0) {
		if (abs(exponent) % 2) {
			exponent++;
			res *= 1 / x;
		}
		else {
			exponent /= 2;
			x *= x;
		}
	}
	return res;
}

double calculate_poly(const double x,const Poly& poly) {
	double res = 0;
	for (int i = 0; i < poly._size; i++) {
		const Poly_Part poly_part = *(poly._poly_part + i);
		res += quick_pow(x, poly_part._exp) * poly_part._coeff;
	}
	return res;
}

Poly operator+(Poly& l, Poly& r) {
	return Poly{};
}
