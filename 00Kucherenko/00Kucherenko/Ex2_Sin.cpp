//
// Developed by Kucherenko Daniil on 9/17/22
//

#include <math.h>
double sumForSin(int* ptr_k, double* ptr_x) {
	long factorial = 1;
	int k = *ptr_k;
	double x_sq = *ptr_x;
	if (k != 0) {
		for (int j = 1; j <= 2 * k + 1; j++)
			factorial *= j;
	}
	for (int i = 1; i < 2 * k + 1; i++)
		x_sq *= *ptr_x;
	if (k % 2 == 0)
		return (double)x_sq / factorial;
	else
		return (double)-x_sq / factorial;
}

double sinFunct(double *ptr_e, double *ptr_x) {
	double sum = 0;
	int k = 0;
	double sumForParticularK = sumForSin(&k, ptr_x);
	for (; fabs(sumForParticularK) >= *ptr_e; k++) {
		sumForParticularK = sumForSin(&k, ptr_x);
		sum += sumForParticularK;
	}
	return sum;
}
