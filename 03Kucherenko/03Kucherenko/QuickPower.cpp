//
//Developed by Daniil Kucherenko on 14/10/2022
//

#include <cmath>
#include "QuickPower.h"

double quick_power(double x, int power) {
	double res = 1;
	if (!x)
		return 0;
	while (power > 0) {
		if (power % 2) {
			power--;
			res *= x;
		} else {
			power /= 2;
			x *= x;
		}
	}
	while (power < 0) {
		if (abs(power) % 2) {
			power ++;
			res *= 1 / x;
		} else {
			power /= 2;
			x *= x;
		}
	}
	return res;
}
