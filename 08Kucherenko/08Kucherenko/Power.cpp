//
// Developed by Daniil Kucherenko on 14.11.22
//

#include "Power.h"

void zet(double& y, double& x, unsigned int& k, unsigned int& steps) {
	steps++;
	if (k > 0) {
		if (k % 2 == 1) {
			y *= x;
			k--;
		}
		else {
			x *= x;
			k /= 2;
		}
		zet(y, x, k, steps);
	}
}

double power(double x, unsigned int n, unsigned int& steps) {
	double y = 1;
	zet(y, x, n, steps);
	return y;
}