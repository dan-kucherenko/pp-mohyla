/* 1 + x / 1!+ x2 / 2!+ … + xn / n!
 a[0] = 1
 s[0] = a[0]
 a[k]/a[k-1] = x^k/k!/(x^(k -1)/(k-1)! = x/k
 a[k] = a[k-1] * x/k
 s[k] = s[k-1] + a[k]
 k = 1,...,n
*/
#include <cmath>
double exp(double x, int n) {
	double a = 1, s = a;
	for (int k = 1; k <= n; k++) {
		a *= x / k;
		s += a;
	}
	return s;
}

double exp(double x, double eps) {
	double a = 1, s = a;
	int k = 1;
	while (abs(a) > eps) {
		a *= x / k;
		s += a;
		k++;
	}
	return s;
}
