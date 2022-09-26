#include <iostream>
#include "Log.h"
#include "Lg.h"

using namespace std;

int main(void) {
	double x_lg = 1000, x_log = 0.16;
	int base = 4;
	cout << "Logarithm of base 10 for x=" << x_lg << " is " << lg(x_lg) <<
		", default function result is " << log10(x_lg) << endl;
	cout << "==========================================================" << endl;
	cout << "Logarithm of base " << base << " for x=" << x_log << " is " << logarithm(x_log, base) << ", default function result is " << log(x_log) << endl;
	return 0;
}