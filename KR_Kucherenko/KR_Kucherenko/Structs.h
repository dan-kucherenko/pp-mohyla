#pragma once
struct Complex {
	double _re;
	double _im;
};

const Complex operator+(const Complex&, const Complex&);
const Complex operator+(double, const Complex&);
const Complex operator+(const Complex&, double);

Complex& operator+=(Complex& trgt, const Complex& src) {
	trgt._re += src._re;
	trgt._im += src._im;
	return trgt;
}
Complex& operator+=(Complex& trgt, double x) {
	trgt._re += x;
	return trgt;
}