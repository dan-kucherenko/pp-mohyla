#include "MatrixFibonacci.h"
#include "AdditionalStructures.h"
#include "QuickPower.h"

int matrix_fibonacci(int exponent) {
	Matrix2x2 fibonacci_matr = { 1, 1,
							1, 0 };
	Vector2 vector = { 1,0 };
	Matrix2x2 temp = quick_matrix_power(fibonacci_matr, exponent);
	Vector2 res = matrix_vect_multiply(temp, vector);
	return res._1;
}
