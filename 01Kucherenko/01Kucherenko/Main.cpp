#include <iostream>
#include "Log.h"
#include "Lg.h"

using namespace std;

int main(void) {
	double x = 1000;
	//double pi_val = ;
	cout << "Logarithm of base 10 for x=" << x << " is " << lg(x) << ", default function result is " << log10(x) << endl;
	return 0;
}