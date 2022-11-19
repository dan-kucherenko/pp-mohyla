//
// Developed by Daniil Kucherenko on 14.11.22
//

#include "FibRecursive.h"

void fib(double& f1, double& f2, unsigned int n, unsigned int& steps) {
	steps++;
	if (n >= 2) {
		double f = f2;
		f2 += f1;
		f1 = f;
		fib(f1, f2, n - 1, steps);
	}
};

double Fibonaci(unsigned int n, unsigned int& steps) {
	double f0 = 0, f1 = 1;
	steps++;
	switch (n) {
	case 0:
		return f0;
	case 1:
		return f1;
	default:
		fib(f0, f1, n, steps);
		return f1;
	}
};