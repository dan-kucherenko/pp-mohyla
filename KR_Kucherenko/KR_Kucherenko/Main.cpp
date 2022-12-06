//
// Developed by Daniil Kucherenko on 06.12.22
//

#include <iostream>
#include <bitset>
#include <complex>
#include "Structs.h"

#include "Task2.h"
#include "Task3.h"
#include "Task4.h"
#include "Task5.h"
#include "Task6.h"
#include "Task7.h"
#include "Task8.h"
#include "Task9.h"
#include "Task10.h"

using namespace std;

int main(void) {
	// --------------------Task 1----------------
	{
		cout << "Task 1:" << endl;
		cout << "~n will always be equals to 1, except when the n equals to -1.\nAccording to our task, n had an unsigned short int type, so it will impossible.\nDue to that fact we can simplify it that ~n ? n : 65535 = n" << endl;
		unsigned short int n = 2;
		cout << (~n ? n : 65535) << endl;
	}
	// --------------------Task 2----------------
	{
		// TODO: finish
		cout << "Task 2: sum" << endl;
		double x = 2;
		size_t n = 3;
		cout << sum(x, n) << endl;
	}
	//// --------------------Task 3----------------
	{
		cout << "Task 3: harmonic-geom average:" << endl;
		const double a = 3, b = 4;
		cout << task3(a, b) << endl;
	}
	//// --------------------Task 4----------------





	//// --------------------Task 5----------------
	{
		cout << "Task 5: append 2 strings" << endl;
		char* str1 = new char[6] {"Good "};
		char* str2 = new char[11] {"afternoon!"};
		char* res1 = append(str1, str2);
		cout << res1 << endl;

		char* str3 = new char[7] {"Guten "};
		char* str4 = new char[5] {"Tag!"};
		char* res2 = append(str3, str4);
		cout << res2 << endl;
	}
	//// --------------------Task 6----------------
	{
		cout << "Task 6: template matrices" << endl;
		Matrix2x2<int> int_matr{ 1,3,5,6 };
		Matrix2x2<double> double_matr{ 2.6,3.4,5.7,6.9 };
		Matrix2x2<Complex> Complex_matr{ { 1,3 },{5,6} ,{ 4, 2 }, { 7,9 } };
		Matrix2x2<complex<double>> complex_matr{ 1.5 - 2i,3.3 + 4i,0.5 - 3i,6. - 15i };
		cout << "Matrices output: " << endl;
		cout << "Integer matrix:" << endl << int_matr << endl << endl;
		cout << "Double matrix:" << endl << double_matr << endl << endl;
		//cout << "Complex matrix:" << endl << Complex_matr << endl << endl;
		cout << "std::complex matrix:" << endl << complex_matr << endl << endl;

		cout << "Multiplying matrices on number:" << endl;
		cout << "Multiply integer matrix by 2:" << endl << 2 * int_matr << endl;
		cout << "Multiply double matrix by 2:" << endl << 2.0 * double_matr << endl;
		//cout << "Multiply Complex matrix by 2:" << endl << 2 * int_matr << endl;
		cout << "Multiply std::complex matrix by 2:" << endl << (2.0 - 3i) * complex_matr << endl;

		cout << endl << "Adding matrices:" << endl;
		Matrix2x2<int> int_matr1{ 1,3,5,6 };
		Matrix2x2<int> int_matr2{ 1,3,5,6 };
		cout << "Adding integer matr: " << endl << int_matr1 + int_matr2 << endl;
		Matrix2x2<double> double_matr1{ 2.6,3.4,5.7,6.9 };
		Matrix2x2<double> double_matr2{ 2.6,3.4,5.7,6.9 };
		cout << "Adding double matr: " << endl << double_matr1 + double_matr2 << endl;
		/*Matrix2x2<Complex> Complex_matr1{ { 1,3 },{5,6} ,{ 4, 2 }, { 7,9 } };
		Matrix2x2<Complex> Complex_matr2{ { 1,3 },{5,6} ,{ 4, 2 }, { 7,9 } };
		cout << "Adding Complex matr: " << endl << Complex_matr1 + Complex_matr2 << endl;*/
		Matrix2x2<complex<double>> complex_matr1{ 1.5 - 2i,3.3 + 4i,0.5 - 3i,6. - 15i };
		Matrix2x2<complex<double>> complex_matr2{ 1.5 - 2i,3.3 + 4i,0.5 - 3i,6. - 15i };
		cout << "Adding std::complex matr: " << endl << complex_matr1 + complex_matr2 << endl;

		cout << "Multiplying matrix on matrix:" << endl;
		cout << "Multiply integer matrices: " << endl << int_matr1 * int_matr2 << endl;
		cout << "Multiply double matrices: " << endl << double_matr1 * double_matr2 << endl;
		//cout << "Multiply Complex matrices: " << endl << int_matr1 * int_matr2 << endl;
		cout << "Multiply std::complex matrices: " << endl << complex_matr1 * complex_matr2 << endl;

	}
	// --------------------Task 7----------------


	// --------------------Task 8----------------


	// --------------------Task 9----------------


	// --------------------Task 10----------------



	return 0;
}