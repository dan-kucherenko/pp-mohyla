//
//Developed by Kucherenko Daniil on 09/27/22
//

#include "Abs.h"

double cosFunct(const double* ptr_x, const double* ptr_e) {
	double x = *ptr_x, sum = 1, e = *ptr_e, a0 = 1;
	for (int n = 1; myAbs(a0) >= e; n++) {
		a0 = -a0 * x * x / (2 * n * (2 * n - 1));
		sum += a0;
	}
	return sum;
}
