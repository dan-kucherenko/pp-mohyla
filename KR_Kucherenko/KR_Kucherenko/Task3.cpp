//
// Developed by Daniil Kucherenko on 06.12.22
//

#include <iostream>
#include <stdexcept>
#include "Task3.h"

/*
 * a[0] = a;
 * a[n] = 2/(1/a[n-1] + 1/b[n-1]);
 *
 * b[0] = b;
 * b[n] = sqrt(a[n-1] * b[n-1]);
 *
 * n = 1..k;
 *
 * a[n] < b[n];
 * a[n-1] < a[n];
 * b[n] < b[n-1];
 */

double task3(const double& a, const double& b) {
	try {
		if (a > b || a < 0 || b < 0)
			throw std::invalid_argument("Invalid input values of the variables");
		double a_prev_val = a, b_prev_val = b;
		double an = 2 / (1 / a_prev_val + 1 / b_prev_val), bn = sqrt(a_prev_val * b_prev_val);
		while (an < bn && a_prev_val < an && bn < b_prev_val) {
			a_prev_val = an;
			b_prev_val = bn;

			bn = sqrt(a_prev_val * b_prev_val);
			an = 2 / (1 / a_prev_val + 1 / b_prev_val);
		}
		return bn;
	}
	catch (std::invalid_argument& exception) {
		std::cout << exception.what() << std::endl;
	}
	return 0;
}
