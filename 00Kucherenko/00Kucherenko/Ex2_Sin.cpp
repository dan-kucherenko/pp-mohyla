//
// Developed by Kucherenko Daniil on 9/17/22
//

/*
a[0] = x,
a[n] = a[n-1] * -x^2/ 2*n(2*n+1)
*/
#include <math.h>

double sinFunct(double* ptr_x, double* ptr_e) {
	double x = *ptr_x, sum = x, e = *ptr_e, a0 = x;
	for (int n = 1; fabs(a0) >= e; n++) {
		a0 = -a0 * x * x / (2 * n * (2 * n + 1));
		sum += a0;
	}
	return sum;
}
