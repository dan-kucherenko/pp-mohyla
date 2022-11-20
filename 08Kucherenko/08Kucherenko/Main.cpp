#include <iostream>
#include "FibRecursive.h"
#include "FibonacciMatrRecursive.h"
#include "Power.h"

using namespace std;


int main(void) {
	unsigned int steps = 0;
	cout << "Recursive power:" << endl;
	for (int n = 0; n <= 40; n += 5) {
		cout << "exp=" << n << ":" << power(2, n, steps) << ", steps=" << steps << endl;
		steps = 0;
	}
	cout << "--------------------------------------------------------------" << endl << endl;

	cout << "Fibonacci: " << endl;
	for (int i = 0; i <= 40; i += 5) {
		cout << "n=" << i << ":" << Fibonaci(i, steps) << ", steps=" << steps << endl;
		steps = 0;
	}
	cout << "--------------------------------------------------------------" << endl;

	cout << "Fibonacci matrix: " << endl;
	for (int i = 0; i <= 40; i += 5) {
		cout << "n=" << i << ":" << fibonacci_matr(i, steps) << ", steps=" << steps << endl;
		steps = 0;
	}
	return 0;
}