#include <iostream>
#include "Functions.h"

using namespace std;

int main(void) {
	const size_t size = 100;
	double coeff [size];
	int x = 5;
	fillArray(coeff, size);
	cout << "Horner scheme sum for x=" << x << " : " << Horner(coeff, size, x) << endl;
	return 0;
}