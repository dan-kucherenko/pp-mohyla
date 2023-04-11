//
// Developed by Daniil Kucherenko on 06.12.22
//

#pragma once
#include <ostream>

struct Complex {
	double _re;
	double _im;
};

Complex operator+(const Complex& z1, const Complex& z2) {
	return { z1._re + z2._re, z1._im + z2._im };
}

Complex operator*=(const Complex& z1, const Complex& z2) {
	return {
	 z1._re * z2._re - z1._im * z2._im,
	z1._re * z2._im + z1._im * z2._re
	};
}
Complex operator*(const Complex& z1, const Complex& z2) {
	Complex z = z1;
	return z *= z2;
}
std::ostream& operator<<(std::ostream& os, const Complex& z) {
	return os << z._re << '+' << z._im << 'i';
}

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
Matrix2x2<T>& operator*(const T& number, Matrix2x2<T>& m) {
	m._11 = m._11 * number;
	m._12 = m._12 * number;
	m._21 = m._21 * number;
	m._22 = m._22 * number;
	return m;
}


template<class T>
Matrix2x2<T> operator+(const Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	Matrix2x2<T> res = l_matr;
	return res += r_matr;
}

template<class T>
Matrix2x2<T> operator+=(Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	return { l_matr._11 + r_matr._11,
	l_matr._12 + r_matr._12,
	 l_matr._21 + r_matr._21,
	 l_matr._22 + r_matr._22
	};
}

template <class T>
Matrix2x2<T> operator*(const Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	Matrix2x2<T> res = l_matr;
	return res *= r_matr;
}

template <class T>
Matrix2x2<T> operator*=(Matrix2x2<T>& l_matr, const Matrix2x2<T>& r_matr) {
	return {
		l_matr._11 * r_matr._11 + l_matr._12 * r_matr._21,
	 l_matr._11 * r_matr._21 + l_matr._12 * r_matr._22,
	 l_matr._21 * r_matr._11 + l_matr._22 * r_matr._21,
	 l_matr._21 * r_matr._21 + l_matr._22 * r_matr._22
	};
}
