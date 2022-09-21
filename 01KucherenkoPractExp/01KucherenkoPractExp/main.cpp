#include <iostream>
#include <cmath>
#include "exp.h";
using namespace std;

int main(void) {
	double x = 100, eps = 1.e-5;
	int n = 10;
	for (double t = 0; t <= x; t+=10)
		cout << exp(t, n) << ':' << exp(t) << ':' << exp(t, eps) << endl;
	cout << "===========================" << endl;
	for (double t = 0; t >= -x; t-=10)
		cout << exp(t, n) << ':' << exp(t) << ':' << exp(t, eps) << endl;
	return 0;
}