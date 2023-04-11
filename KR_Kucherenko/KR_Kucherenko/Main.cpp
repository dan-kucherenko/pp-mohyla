//
// Developed by Daniil Kucherenko on 06.12.22
//

#include <iostream>
#include <complex>

#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Task6.h"
#include "Task7.h"
#include "Task8.h"
#include "Task9_10.h"

using namespace std;

int main(void) {
	// --------------------Task 1----------------
	{
		cout << "Task 1:" << endl;
		cout << "~n will always be equals to 1, except when the n equals to -1.\nAccording to our task, n had an unsigned short int type, so it's impossible.\nDue to that fact we can simplify it that ~n ? n : 65535 = n" << endl;
		unsigned short int n = -1;
		cout << "n= -1, after function: n=" << (~n ? n : 65535) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 2----------------
	{
		// TODO: finish
		cout << "Task 2: sum" << endl;
		double x = 2;
		size_t n = 3;
		cout << sum(x, n) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 3----------------
	{
		cout << "Task 3: harmonic-geom average:" << endl;
		for (double a = 11.5, b = 25; a < 100 && b < 100; a += 1.5, b += 2.5)
			cout << "(a=" << a << ", b=" << b << "):" << task3(a, b) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 4----------------
	{
		cout << "Task 4: swap heximal bits" << endl;
		const unsigned int word = 0xA1B2CD;
		cout << hex << "Original word " << word << endl;
		cout << hex << "Word after swap: " << swap(word) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 5----------------
	{
		cout << "Task 5: append 2 strings" << endl;
		char* str1 = new char[6] {"Good "};
		char* str2 = new char[11] {"afternoon!"};
		char* res1 = append(str1, str2);
		cout << str1 << '+' << str2 << " = " << res1 << endl;

		char* str3 = new char[6] {"Guten"};
		char* str4 = new char[5] {"Tag!"};
		char* res2 = append(str3, str4);
		cout << str3 << '+' << str4 << " = " << res2 << endl;
		cout << "=======================================" << endl;
		delete[]str1;
		delete[]str2;
		delete[]str3;
		delete[]str4;
	}
	// --------------------Task 6----------------
	{
		cout << "Task 6: template matrices" << endl;
		Matrix2x2<int> int_matr{ 1,3,5,6 };
		Matrix2x2<double> double_matr{ 2.6,3.4,5.7,6.9 };
		Matrix2x2<Complex> Complex_matr{ { 1,-3 },{5,6} ,{ 4, -2 }, { 7,9 } };
		Matrix2x2<complex<double>> complex_matr{ 1. - 3i,5. + 6i,4. - 2i,7. + 9i };
		cout << "Matrices output: " << endl;
		cout << "Integer matrix:" << endl << int_matr << endl;
		cout << "Double matrix:" << endl << double_matr << endl;
		cout << "Complex matrix:" << endl << Complex_matr << endl;
		cout << "std::complex matrix:" << endl << complex_matr << endl << endl;

		cout << "Multiplying matrices on number:" << endl;
		cout << "Multiply integer matrix by 2:" << endl << 2 * int_matr << endl;
		cout << "Multiply double matrix by 2.0:" << endl << 2.0 * double_matr << endl;
		cout << "Multiply Complex matrix by Complex{ 2, -3 }:" << endl << Complex{ 2, -3 } *Complex_matr << endl;
		cout << "Multiply complex matrix by (2.0 - 3i):" << endl << (2.0 - 3i) * complex_matr << endl << endl;

		cout << endl << "Adding matrices:" << endl;
		Matrix2x2<int> int_matr1{ 1,3,5,6 };
		Matrix2x2<int> int_matr2{ 1,3,5,6 };
		cout << "Adding integer matr: " << endl << int_matr1 + int_matr2 << endl;
		Matrix2x2<double> double_matr1{ 2.6,3.4,5.7,6.9 };
		Matrix2x2<double> double_matr2{ 2.6,3.4,5.7,6.9 };
		cout << "Adding double matr: " << endl << double_matr1 + double_matr2 << endl;
		Matrix2x2<Complex> Complex_matr1{ { 1,3 },{5,6} ,{ 4, 2 }, { 7,9 } };
		Matrix2x2<Complex> Complex_matr2{ { 1,3 },{5,6} ,{ 4, 2 }, { 7,9 } };
		cout << "Adding Complex matr: " << endl << Complex_matr1 + Complex_matr2 << endl;
		Matrix2x2<complex<double>> complex_matr1{ 1. + 3i,5. + 6i,4. + 2i,7. + 9i };
		Matrix2x2<complex<double>> complex_matr2{ 1. + 3i,5. + 6i,4. + 2i,7. + 9i };
		cout << "Adding complex matr: " << endl << complex_matr1 + complex_matr2 << endl << endl;

		cout << "Multiplying matrix on matrix:" << endl;
		cout << "Multiply integer matrices: " << endl << int_matr1 * int_matr2 << endl;
		cout << "Multiply double matrices: " << endl << double_matr1 * double_matr2 << endl;
		cout << "Multiply Complex matrices: " << endl << Complex_matr1 * Complex_matr2 << endl;
		cout << "Multiply complex matrices: " << endl << complex_matr1 * complex_matr2 << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 7----------------
	{
		cout << "Task 7: template pointer functions:" << endl;
		Matrix2x2<int> int_a = { 1,3,5,2 }, int_b = { 4,6,8,19 };
		Matrix2x2<double> double_a = { 1,3,5,2 }, double_b = { 4,6,8,19 };
		Matrix2x2<Complex> Complex_a = { { 1,4} ,{ 3,5 },{2,8}, {4,-9} },
			Complex_b = { {4,-6},{8,19}, {1,16}, {5,-3} };
		Matrix2x2 < complex<double>> complex_a = { 1. + 4i,3. + 5i,2. + 8i,4. - 9i }, complex_b = { 4. - 6i,8. + 19i,1. + 16i,5. - 3i };
		cout << "Template operator+:" << endl;
		cout << "Integer matrices: " << endl << execute(int_a, int_b, operator+) << endl;
		cout << "Double matrices: " << endl << execute(double_a, double_b, operator+) << endl;
		cout << "Complex matrices: " << endl << execute(Complex_a, Complex_b, operator+) << endl;
		cout << "std::complex matrices: " << endl << execute(complex_a, complex_b, operator+) << endl << endl;

		cout << "Template operator*:" << endl;
		cout << "Integer matrices: " << endl << execute(int_a, int_b, operator*) << endl;
		cout << "Double matrices: " << endl << execute(double_a, double_b, operator*) << endl;
		cout << "Complex matrices: " << endl << execute(Complex_a, Complex_b, operator*) << endl;
		cout << "std::complex matrices: " << endl << execute(complex_a, complex_b, operator*) << endl << endl;

		cout << "Template operator+=:" << endl;
		cout << "Integer matrices: " << endl << executeEq(int_a, int_b, operator+=) << endl;
		cout << "Double matrices: " << endl << executeEq(double_a, double_b, operator+=) << endl;
		cout << "Complex matrices: " << endl << executeEq(Complex_a, Complex_b, operator+=) << endl;
		cout << "std::complex matrices: " << endl << executeEq(complex_a, complex_b, operator+=) << endl << endl;

		cout << "Template operator*=:" << endl;
		cout << "Integer matrices: " << endl << executeEq(int_a, int_b, operator*=) << endl;
		cout << "Double matrices: " << endl << executeEq(double_a, double_b, operator*=) << endl;
		cout << "Complex matrices: " << endl << executeEq(Complex_a, Complex_b, operator*=) << endl;
		cout << "std::complex matrices: " << endl << executeEq(complex_a, complex_b, operator*=) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 8----------------
	{
		cout << "Task 8: universal power function" << endl;
		Matrix2x2<double> matr = { 1.4,2.1,4.6,5.9 };
		Matrix2x2<double> uni = { 1.,0.,0., 1. };
		double x = 5.2;
		cout << "Power for matrix:" << endl << power(matr, 2, uni) << endl;
		cout << "Power for double:" << endl << power(x, 2) << endl;
		cout << "=======================================" << endl;
	}
	// --------------------Task 9----------------
	{
		cout << "Task 9: polynomial sum" << endl;
		const size_t poly_size = 4;
		Poly_Part* polynomial_parts = new Poly_Part[poly_size]{ {2,2},{3,3},{5,4},{7,5} };
		Poly poly = { poly_size, polynomial_parts };
		for (double x = 1.2; x < 20; x += 1.5)
			cout << "Polynomial sum 2x^2+3x^3+5x^4+7x^5 for x=" << x << ": " << calculate_poly(x, poly) << ", default sum: " << 2 * pow(x, 2) + 3 * pow(x, 3) + 5 * pow(x, 4) + 7 * pow(x, 5) << endl;
		delete[]polynomial_parts;
	}
	// --------------------Task 10----------------



	return 0;
}