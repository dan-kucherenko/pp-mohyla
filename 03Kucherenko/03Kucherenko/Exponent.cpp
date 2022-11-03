//
//Developed by Daniil Kucherenko on 14/10/2022
//
#include <iostream>
#include <cmath>
#include "Exponent.h"
#include "QuickPower.h"

/*Calculate the exponent from Taylor series (for fracture part of the num)
 1 + x / 1!+ x2 / 2!+ … + xn / n!
 a[0] = 1
 s[0] = a[0]
 a[k]/a[k-1] = x^k/k!/(x^(k -1)/(k-1)! = x/k
 a[k] = a[k-1] * x/k
 s[k] = s[k-1] + a[k]
 k = 1,...,n
 */

double exp_fract(const double x, const double eps) {
	double a = 1, s = a;
	int k = 1;
	try {
		if (!(x >= 0 && x < 1))
			throw std::exception("Exception: x > 1 or x < 0");

		while (abs(a) > eps) {
			a *= x / k;
			s += a;
			k++;
		}
	} catch (const std::exception& exception) {
		std::cout << exception.what() << std::endl;
	}
	return s;
}

double exp_integer(const int x) {
	const double exponent = 2.71828;
	return quick_power(exponent, x);
}

double own_exponent(double x, const double eps) {
	const bool x_is_neg = x < 0;
	double res = 1;
	x = fabs(x);
	const int integer_part = static_cast<int>(x);
	const double fractured_part = x - static_cast<int>(x);
	if (x == 0.0)
		return res;
	res = exp_integer(integer_part) * exp_fract(fractured_part, eps);
	return x_is_neg ? 1 / res : res;
}





