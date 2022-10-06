#include <cassert>
#include "Sum.h"
#define NDEBUG

double polynomial_sum(const double x, const int n) {
	//const int n = *ptr_n;
	//const double x = *ptr_x,
	const double x_sq = x * x;
	double sum = 0, cur_element = 1, el = x;
	for (int i = 1; i <= n; i++) {
		cur_element *= el;
		el *= x_sq;
		sum += cur_element;
	}
	assert(sum == sum1(x, n));
	return sum;
}

double sum1(double x, int n)
{
	double a = 1, s = 0, b = 1;
	for (int k = 1; k <=n ; ++k)
	{
		b *= x * x;
		a *= b / x;
		s += a;
	}
	return s;
}