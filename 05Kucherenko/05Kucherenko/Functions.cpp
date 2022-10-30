//
// Developed by Daniil Kucherenko on 28.10.22
//

#include <cassert>
#include <cstdlib>
#include <ctime>

void fillArray(double* coeff, size_t size) {
	srand(time(0));
	for (int i = 0; i < size; i++)
		coeff[i] = static_cast<double>(rand() % 10000 - 5000);
}

double sum(double* coeff, size_t size, int sign) {
	double sum = 0;
	if (sign == -1) {
		// size % 2 != 0 -> first addition will be with the odd exponent for x. example: 2x^3+3x^2+4x-1= 2*(-1)^3... = -2...
		bool first_addition_neg = (size % 2 == 0);
		for (int i = 0; i < size; i++) {
			if (first_addition_neg)
				sum += coeff[i] * sign;
			else
				sum += coeff[i];
			first_addition_neg = !first_addition_neg;	
		}
	} else {
		for (int i = 0; i < size; i++)
			sum += coeff[i]; // sum only for positive x
	}
	return sum;
}

double Horner(double* coeff, size_t size, double x) {
	double result = coeff[0];
	for (int i = 1; i < size; i++)
		result = result * x + coeff[i];
	assert(x == 1 || x == -1 ? result == sum(coeff, size, x) : true);
	assert(x == 0 ? coeff[size] : true); // if x=0, then Horner sum is the last number from coeff array
	return result;
}