//
// Developed by Daniil Kucherenko on 22.10.22
//
/*
 * a[0] = a;
 * a[n] = (a[n-1] * b[n-1])^(1/2);
 *
 * b[0] = b;
 * b[n] = (a[n-1] + b[n-1]) / 2
 *
 * n = 1..k;
 */

#include "ArithmGeomAv.h"

#include <cmath>
#include <iostream>

//double arithm_geom_av(double a, double b) {
//	double a_prev_val = a, b_prev_val = b;
//	double geom_av = sqrt(a_prev_val * b_prev_val), arithm_av = (a_prev_val * b_prev_val) / 2;
//
//	for (size_t i = 0; i < 50; i++)
//	{
//		a_prev_val = geom_av;
//		b_prev_val = arithm_av;
//
//		geom_av = sqrt(a_prev_val * b_prev_val);
//		arithm_av = (a_prev_val + b_prev_val) / 2;
//	}
//	return 0.0;
//}
void arithm_geom_av(double a, double b) {
	double a_prev_val = a, b_prev_val = b;
	double geom_av = sqrt(a_prev_val * b_prev_val), arithm_av = (a_prev_val * b_prev_val) / 2;

	for (int i = -100; i < 100; i++)
	{
		a_prev_val = geom_av;
		b_prev_val = arithm_av;

		geom_av = sqrt(a_prev_val * b_prev_val);
		arithm_av = (a_prev_val + b_prev_val) / 2;
		std::cout << "i: " << i << " -- arithm_av: " << arithm_av << ',' << " geom_av: " << geom_av << std::endl;
	}
}
