#include <iostream>
#include "MatrixFibonacci.h"

using namespace std;

int main(void) {
	cout << "Fibonacci for: " << endl;
	for (int n = 0; n <= 20; n++)
		cout << "n=" << n << " : " << matrix_fibonacci(n) << endl;
	return 0;
}