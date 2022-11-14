#include "Power.h"

void zet(double& y, double& x, unsigned int& k) {
	if (k > 0) {
		if (k % 2 == 1) {
			y *= x;
			k--;
		}
		else {
			x *= x;
			k /= 2;
		}
		zet(y, x, k);
	}
}

double power(double x, unsigned int n) {
	double y = 1;
	zet(y, x, n);
	return y;
}