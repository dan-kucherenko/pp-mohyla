//
// Developed by Daniil Kucherenko on 06.12.22
//

#pragma once
#include <ostream>

template<class T>
struct Matrix2x2 {
	T _11, _12, _21, _22;
	const size_t size = 2;
};

template<class T>
std::ostream& operator<<(std::ostream& ostr, const Matrix2x2<T>& m) {
	ostr << m._11 << '\t' << m._12 << '\n' << m._21 << '\t' << m._22;
	return ostr;
}

template<class T>
const Matrix2x2<T>& operator*(const T& number, Matrix2x2<T>& m) {
	m._11 *= number;
	m._12 *= number;
	m._21 *= number;
	m._22 *= number;
	return m;
}

template<class T>
const Matrix2x2<T>& operator+(Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	l_matr._11 += r_matr._11;
	l_matr._12 += r_matr._12;
	l_matr._21 += r_matr._21;
	l_matr._22 += r_matr._22;
	return l_matr;
}

template <class T>
const Matrix2x2<T> operator*(Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	return
		Matrix2x2<T>{
			l_matr._11* r_matr._11 + l_matr._12 * r_matr._21,
			l_matr._11* r_matr._12 + l_matr._12 * r_matr._22,
			l_matr._21* r_matr._11 + l_matr._22 * r_matr._21,
			l_matr._21* r_matr._12 + l_matr._22 * r_matr._22 };
}
