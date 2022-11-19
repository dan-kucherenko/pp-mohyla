//
// Developed by Daniil Kucherenko on 14.11.22
//

#include "FibonacciMatrRecursive.h"
#include "QuickPower.h"

int fibonacci_matr(int n, unsigned int& steps) {
	const Matrix2x2 fib_matrix = { 1,1,
							1,0 };
	const Matrix2x2 uni_matrix = { 1,0,
							0,1 };
	const Vector2 fib_vector = { 1, 0 };
	const  Vector2 res = quick_matrix_power(fib_matrix, n - 1, uni_matrix, steps) * fib_vector;
	return res._1;
}
