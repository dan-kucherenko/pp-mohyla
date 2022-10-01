#include <iostream>
#include "Log.h"
#include "Lg.h"
#include "Cos.h"
#include "Sin.h"
#include "Tan.h"

using namespace std;

int main(void) {
	double x_lg = 1000, x_log = 0.16, x = 0.7, eps = 0.007;
	int base = 4;
	cout << "Logarithm of base 10 for x=" << x_lg << " is " << lg(x_lg) << ", default function result is " << log10(x_lg) << endl;
	cout << "==========================================================" << endl;
	cout << "Logarithm of base " << base << " for x=" << x_log << " is " << logarithm(x_log, base) << endl;
	cout << "==========================================================" << endl;
	cout << "Cos for 0.7 and eps 0.007 is " << cosFunct(&x, &eps) << ", default function result is " << cos(x) << endl;
	cout << "==========================================================" << endl;
	cout << "Sin for 0.7 and eps 0.007 is " << sinFunct(&x, &eps) << ", default function result is " << sin(x) << endl;
	cout << "==========================================================" << endl;
	cout << "Tangent for 0.7 and eps 0.007 is " << tangent(x, eps) << ", default function result is " << tan(x) << endl;
	return 0;
}