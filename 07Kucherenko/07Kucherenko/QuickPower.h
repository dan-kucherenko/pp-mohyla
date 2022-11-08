#pragma once
#include "AdditionalStructures.h"

Matrix2x2 matrix_matrix_multiply(const Matrix2x2 matr_1, const Matrix2x2 matr_2);
Vector2 matrix_vect_multiply(Matrix2x2 matrix, Vector2 vector);
Matrix2x2 quick_matrix_power(const Matrix2x2 matrix, int exponent);