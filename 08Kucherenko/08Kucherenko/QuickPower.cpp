//
// Developed by Daniil Kucherenko on 14.11.22
//

#include "QuickPower.h"

Matrix2x2 operator*(const Matrix2x2& matr_1, const Matrix2x2& matr_2) {
	return {
		matr_1._11 * matr_2._11 + matr_1._12 * matr_2._21,
		matr_1._11 * matr_2._21 + matr_1._12 * matr_2._22,
		matr_1._21 * matr_2._11 + matr_1._22 * matr_2._21,
		matr_1._21 * matr_2._21 + matr_1._22 * matr_2._22
	};
}

Vector2 operator*(const Matrix2x2& matrix, const Vector2& vector) {
	return {
		matrix._11 * vector._1 + matrix._12 * vector._2,
		matrix._21 * vector._1 + matrix._22 * vector._2
	};
}

Matrix2x2 quick_matrix_power(const Matrix2x2& matrix, int exponent, const Matrix2x2& uni, unsigned int& steps) {
	if (exponent == 0 || exponent == -1) {
		steps++;
		return uni;
	}
	if (exponent % 2) {
		steps++;
		exponent--;
		return quick_matrix_power(matrix, exponent, matrix * uni, steps);
	}
	else {
		steps++;
		return quick_matrix_power(matrix * matrix, exponent / 2, uni, steps);
	}
}
