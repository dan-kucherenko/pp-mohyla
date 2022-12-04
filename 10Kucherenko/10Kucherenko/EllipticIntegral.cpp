#include "EllipticIntegral.h"
#include <cmath>

double eliptic_integral(const double x) {
    extern double a;
	extern double b;
    return 1/sqrt(pow(a,2) * pow(sin(x),2) + pow(b,2) * pow(cos(x),2));
}
