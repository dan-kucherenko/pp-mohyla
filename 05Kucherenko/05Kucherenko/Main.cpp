#include <iostream>
#include "Functions.h"

using namespace std;

int main(void) {
	const size_t size = 4;
	double coeff[size] = {2,3,4,-1};
	fillArray(coeff, size);
	cout << Horner(coeff, size, 5) << endl;
	return 0;
}