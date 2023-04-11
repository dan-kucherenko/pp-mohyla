#include <iostream>
#include "ArithmGeomAv.h"

using namespace std;

int main(void) {
	double a = 7, b = 5;
	for (size_t i = 0; i < 50; i++) {
		cout << "M(" << a << ", " << b << ") = " << arithm_geom_av(a, b) << endl;
		a += 1.5;
		b += 1.7;
	}
}