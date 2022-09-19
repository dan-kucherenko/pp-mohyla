#include <iostream>
#include "Sum.h"

using namespace std;

int main(void) {
	int n = 6;
	int x = 4;
	cout << "Result of the polynomial sum for x=4, n=6 is: " << polynomialSum(&x, &n) << endl;
	return 0;
}