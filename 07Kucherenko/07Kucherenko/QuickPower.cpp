#include "QuickPower.h"

Matrix2x2 matrix_matrix_multiply(const Matrix2x2 matr_1, const Matrix2x2 matr_2) {
	/* {
	 * _11 _12
	 * _21 _22
	  } */
	Matrix2x2 res_matr = {
		matr_1._11 * matr_2._11 + matr_1._12 * matr_2._21,
		matr_1._11 * matr_2._21 + matr_1._12 * matr_2._22,
		matr_1._21 * matr_2._11 + matr_1._22 * matr_2._21,
		matr_1._21 * matr_2._21 + matr_1._22 * matr_2._22
	};
	return res_matr;
}

Vector2 matrix_vect_multiply(const Matrix2x2 matrix, const Vector2 vector) {
	Vector2 res_vect = {
		matrix._11 * vector._1 + matrix._12 * vector._2,
		matrix._21 * vector._1 + matrix._22 * vector._2
	};
	return res_vect;
}

Matrix2x2 quick_matrix_power(Matrix2x2 matrix, int exponent) {
	Matrix2x2 res = matrix;
	/*if (exponent == 0)
		return res;*/
	while (exponent > 0) {
		if (exponent % 2) {
			exponent--;
			res = matrix_matrix_multiply(res, matrix);
		} else {
			exponent /= 2;
			matrix = matrix_matrix_multiply(matrix, matrix);
		}
	}
	return res;
}
