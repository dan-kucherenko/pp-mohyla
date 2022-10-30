#include <iostream>
#include "HornerScheme.h"

using namespace std;

int main(void) {
	const size_t size = 100;
	double coeff[size];
	fillArray(coeff, size);
	for (int x = -5; x <= 5; x++)
		cout << "Horner scheme sum for x=" << x << " : " << Horner(coeff, size, x) << endl;
	return 0;
}