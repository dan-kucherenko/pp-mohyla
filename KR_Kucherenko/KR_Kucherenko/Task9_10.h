//
// Developed by Daniil Kucherenko on 08.12.22
//

#pragma once
double quick_pow(double x, int exponent);

struct Poly_Part {
	double _coeff;
	int _exp;
};


struct Poly {
	int _size;
	Poly_Part* _poly_part;
};

double calculate_poly(double x, const Poly& p);
Poly operator+(Poly& l, Poly& r);