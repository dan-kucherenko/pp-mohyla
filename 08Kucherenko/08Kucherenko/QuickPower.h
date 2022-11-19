//
// Developed by Daniil Kucherenko on 14.11.22
//

#pragma once
#include "AdditionalStructures.h"

Matrix2x2 operator*(const Matrix2x2& matr_1, const Matrix2x2& matr_2);
Vector2 operator*(const Matrix2x2& matrix, const Vector2& vector);
Matrix2x2 quick_matrix_power(const Matrix2x2& matrix, int exponent, const Matrix2x2& uni, unsigned int& steps);