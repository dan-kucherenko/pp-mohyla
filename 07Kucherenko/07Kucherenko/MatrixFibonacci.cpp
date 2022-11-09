//
// Developed by Daniil Kucherenko on 07.11.22
//

#include "MatrixFibonacci.h"
#include "AdditionalStructures.h"
#include "QuickPower.h"

int matrix_fibonacci(int n) {
	Matrix2x2 fibonacci_matr = { 1, 1,
							1, 0 };
	Vector2 vector = { 1,1 };
	Matrix2x2 temp = quick_matrix_power(fibonacci_matr, n -1);
	Vector2 res = matrix_vect_multiply(temp, vector);
	return res._1;
}
