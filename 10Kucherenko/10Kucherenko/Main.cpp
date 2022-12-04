#include <iostream>
#include "Simpson.h"
#include "ArithmGeomAv.h"
#include "EllipticIntegral.h"

double a = 6, b = 7;
int main(void) {
	const double pi = 3.14159265;
	const double eps = 1e-5;
	for (; a < 100 && b < 100; a += 5, b += 5) {
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "ArithmGeomAv:		" << 1 / arithm_geom_av(a, b) << std::endl;
		std::cout << "Eliptic integral:	" << 2 / pi * simpson(eliptic_integral, 0, pi / 2, eps) << std::endl;
		std::cout << "=================================" << std::endl;
	}
	return 0;
}