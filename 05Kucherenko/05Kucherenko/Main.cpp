#include <iostream>
#include "Functions.h"

using namespace std;

int main(void) {
	cout.precision(15);
	const size_t size = 4;
	double coeff[size] = { 2,3,-4,1 };
	//fillArray(coeff, size);
	cout << Horner(coeff, size, 8) << endl;
	return 0;
}