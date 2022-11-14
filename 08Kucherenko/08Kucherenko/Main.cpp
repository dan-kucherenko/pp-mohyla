#include <iostream>
#include "FibRecursive.h"
#include "Power.h"

using namespace std;


int main(void) {
	unsigned int steps = 0;
	cout << "Recursive power:" << power(2, 15, steps) << ", steps=" << steps << endl;
	steps = 0;
	cout << "Fibonacci: " << Fibonaci(16, steps) << ", steps=" << steps << endl;

	return 0;
}