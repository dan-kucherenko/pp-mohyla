#include <iostream>
#include "Dichotomy.h"
#include "Functions.h"

using namespace std;

int main(void) {
	const double pi = 3.14159265359, eps = 1e-5;
	double left_border = -1, right_border = 1;
	cout << "sin(x)=x, " << "x=[" << left_border << ", " << right_border << "]; " << "x = " << dichotomy(my_sin, left_border, right_border, eps) << endl;
	left_border = pi - 1;
	right_border = pi;
	cout << "sin(x)=0, " << "x=[" << left_border << ", " << right_border << "]; " << "x = " << dichotomy(sin, left_border, right_border, eps) << endl;
	left_border = 2;
	right_border = 3;
	cout << "ln(x)=1, " << "x=[" << left_border << ", " << right_border << "]; " << "x = " << dichotomy(my_ln, left_border, right_border, eps) << endl;
	left_border = 0;
	right_border = 2;
	cout << "exp(x)=2-x, " << "x=[" << left_border << ", " << right_border << "]; " << "x = " << dichotomy(my_exp, left_border, right_border, eps) << endl;

	return 0;
}