//
// Developed by Daniil Kucherenko on 22.10.22
//
#include "ArithmGeomAv.h"

#include <cmath>
#include <iostream>

/*
 * a[0] = a;
 * a[n] = (a[n-1] * b[n-1])^(1/2);
 *
 * b[0] = b;
 * b[n] = (a[n-1] + b[n-1]) / 2
 *
 * n = 1..k;
 *
 * a[n] < b[n];
 * a[n] > a[n-1];
 * b[n] > b[n-1];
 */

double arithm_geom_av(const double a, const double b) {
	try {
		if (a > b || a < 0 || b < 0)
			throw std::invalid_argument("Invalid input values of the variables");
		double a_prev_val = a, b_prev_val = b;
		double geom_av = sqrt(a_prev_val * b_prev_val);
		double arithm_av = a_prev_val + b_prev_val / 2;
		while (geom_av < arithm_av && geom_av > a_prev_val && arithm_av < b_prev_val) {
			a_prev_val = geom_av;
			b_prev_val = arithm_av;

			geom_av = sqrt(a_prev_val * b_prev_val);
			arithm_av = (a_prev_val + b_prev_val) / 2;
		}
		return geom_av;
	} catch (std::invalid_argument& exception) {
		std::cout << exception.what() << std::endl;
	}
	return 0;
}

