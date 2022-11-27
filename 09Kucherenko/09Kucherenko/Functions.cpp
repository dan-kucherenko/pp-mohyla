//
// Developed by Daniil Kucherenko on 27.11.22
//

#include "Functions.h"
#include <iostream>

double my_sin(const double x) {
	return sin(x) - x;
}

double my_ln(const double x) {
	return log(x) - 1;
}

double my_exp(const double x) {
	return exp(x) - 2 + x;
}
