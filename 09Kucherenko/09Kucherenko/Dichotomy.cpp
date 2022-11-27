//right_bord
// Developed by Daniil Kucherenko on 27.11.22
//

#include "Dichotomy.h"
#include <cassert>

double dichotomy(double(*f)(double), const double a, const double b, const double eps) {
	double left_border = a, right_border = b, middle = (left_border+right_border)/2;
	assert(f(a) <= 0 || f(b) <= 0); // check whether border values have different signs
	while (right_border - left_border > eps) {
		if (f(middle) * f(right_border) <= 0)
			left_border = middle;
		else
			right_border = middle;
		middle = (left_border + right_border) / 2;
	}
	return left_border;
}
