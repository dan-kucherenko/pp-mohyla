#include <iostream>
#include "GaussIntegral.h"
#include "Exponent.h"

using namespace std;

int main(void) {
	const double eps = 1e-5;
	const double exponent = 2.71828;
	for (int x = 1; x <= 10; x++)
		cout << "Gauss integral for x= " << x << " : " << gauss_integral(x, eps) << endl;
	cout << endl;
	for (double x = -100; x < 100; x += 0.25)
		cout << "x=" << x << "; default exp func=" << exp(x) << " : " << "exp func using e^[x]*e^{x}=" << own_exponent(x, eps) << endl;
	return 0;
}