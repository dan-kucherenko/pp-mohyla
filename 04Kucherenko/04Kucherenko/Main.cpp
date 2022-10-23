#include <iostream>
#include "ArithmGeomAv.h"

using namespace std;

int main(void) {
	double a = 1, b = 3;
	//while (b < 50) {
	cout << "M(" << a << ", " << b << ") = " << arithm_geom_av(a, b) << endl;
	a += 1.5;
	b += 1.7;
	//}
}