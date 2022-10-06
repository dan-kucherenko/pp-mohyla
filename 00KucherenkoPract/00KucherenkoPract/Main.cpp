#include <iostream>
#include "Sum.h"

using namespace std;

int main(void) {
	const int n = 10;
	const double x = 2;
	cout << "Result of the polynomial sum for x=2, n=10 is: " << polynomial_sum(x,n) << endl;
	return 0;
}