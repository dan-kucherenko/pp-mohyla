//
// Developed by Daniil Kucherenko on 06.12.22
//

/* Sn = 1 + x^1^3 + x^2^3 + ... + x^n^3
 * a[n] = x^(n^3);
 * a[n+1] = x^((n+1)^3) = x^(n^3+3n^2+3n+1) = a[n] * x^(3n^2) * x^3n * x;
 * a[n-1] = x^((n-1)^3) = x^(n^3-3n^2+3n-1) = a[n] * x^(3n^2) * x^3n * x;
 *
 * b[n] = x^(3n^2) = (x*x*x)^(n*n) = 
 * b[n+1]
 * a[n] = a[n-1] * x^3
 */
#include "Task2.h"

double sum(const double& x, const size_t& n) {
	const double delta_start = x * x * x;
	double sum = 1, delta = delta_start;
	for (size_t i = 1; i <= n; i++) {
		sum += delta;
		delta *= delta_start;
	}
	return sum;
}
