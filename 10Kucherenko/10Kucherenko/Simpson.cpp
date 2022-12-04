//
// Developed by Daniil Kucherenko on 01.12.2022
//

/*
 *Default simpson algorithm, dividing on
 *2 parts:		S = delta/3(f(x0) + 4f(x1) + f(xn));
 *4 parts:		S = delta/3(f(x0) + 4f(x1) + 2f(x2) + 4f(x3) + f(xn))
 *Step is 2f(x2) + 4f(x3), n = 2k
*/
#include <cmath>
#include "Simpson.h"

double simpson(double(* const f)(double), const double a, const double b, const double eps) {
	double prev_sum = 0;
	int parts = 2;
	double delta = (b - a) / parts;
	double sum = 4 * (f(a) + f(a + delta) + f(b)); // for parts = 2

	while (eps < fabs(sum - prev_sum)) {
		delta /= 2;
		parts *= 2;
		prev_sum = sum;
		sum = f(a) + 4 * f(a + delta) + f(b);
		for (int i = 2; i < parts; i += 2)
			sum += 2 * f(a + i * delta) + 4 * f(a + (i + 1) * delta);
		sum *= delta;
	}
	return sum / 3;
}
