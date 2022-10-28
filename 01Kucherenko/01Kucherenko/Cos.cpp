//
//Developed by Kucherenko Daniil on 09/27/22
//

#include "Abs.h"

double cos_funct(double x, const double e) {
	x *= (3.142 / 180.0);
	double sum = 1, a0 = 1;
	for (int n = 1; myAbs(a0) >= e; n++) {
		a0 = -a0 * x * x / (2 * n * (2 * n - 1));
		sum += a0;
	}
	return sum;
}
