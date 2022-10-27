#include <cassert>
#include <cstdlib>
#include <ctime>

void fillArray(double* coeff, size_t size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		coeff[i] = rand() * 0.00001;
		//coeff[i] = 0;
}

double sum(double* coeff, size_t size, int sign) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += coeff[i]; // sum only for positive coeff
	}
	return sum;
}

double Horner(double* coeff, size_t size, double x) {
	double result = coeff[0];
	for (int i = 0; i < size; i++)
		result *= x + coeff[i];
	assert(x == 1 || x == -1 ? result == sum(coeff, size, x) : true);
	return result;
}