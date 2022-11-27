//
// Developed by Daniil Kucherenko on 27.11.22
//

#include "Dichotomy.h"
#include <cassert>

double dichotomy(double(*f)(double), const double a, const double b, const double eps) {
	double left = a, right = b;
	assert(f(a) <= 0 || f(b) <= 0); // check whether border values have different signs
	while (right - left > eps) {
		if (f(left) * f((left + right) / 2) <= 0)
			right = (left + right) / 2;
		else
			left = (left + right) / 2;
	}
	return left;
}
