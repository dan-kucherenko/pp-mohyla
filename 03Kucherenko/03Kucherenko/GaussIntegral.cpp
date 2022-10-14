//
//Developed by Daniil Kucherenko on 14/10/2022
//

/*
 * a[0] = x; a[1] = -x^3; a[2] = x^5 (послідовність чисельників)
 * b[0] = 1; b[1] = 3; b[2] = 5; (послідовність множника у зн.)
* c[0] = 0; c[1] = 1; c[2] = 2; (послідовність підфактор. виразу у зню)
 */

#include <cmath>
#include "GaussIntegral.h"

double gauss_integral(const double x, const double eps) {
	double sum = x, addition = x;
	int counter = 1;
	int factorial = 1;
	while (fabs(addition) > eps) {
		addition *= -x * x * counter / static_cast<double>((counter + 2) * factorial);
		factorial++;
		counter += 2;
		sum += addition;
	}
	return sum;
}

