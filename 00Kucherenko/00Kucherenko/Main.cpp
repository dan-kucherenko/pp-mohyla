//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include "Ex1_Sum.h"
#include "Ex2_Sin.h"
#include "Ex3_DivWithRem.h"
#include "Ex4_NSDr.h"
#include "Ex5_ChebyshevPoly.h"

using namespace std;

int main(void) {
	////Ex1
	//int n = 5, ex1_x = 6;
	//for (; ex1_x < 30; ex1_x += 5)
	//	cout << "Result of the 1st ex. (sum) is: " << sumFunc(&ex1_x, &n) << ", n=" << n << ", x=" << ex1_x << endl;
	//cout << "==================================================================================" << endl;
	////Ex2
	//double ex2_x = 0.7, e = 0.007;
	//cout << "Result of the 2nd ex.(sin func) for x=" << ex2_x << " and e=" << e << " is " << sinFunct(&ex2_x, &e) << ": default function check : " << sin(ex2_x) << endl;
	//cout << "==================================================================================" << endl;
	////Ex3
	const int dividend = -50, divisor = -4;
	cout << "Result of the 3rd ex. (dividing with remainder) for m=" << dividend << " n=" << divisor << " is " << divWithRem(dividend, divisor)
		<< ", default function result is " << dividend % divisor << endl;
	cout << "==================================================================================" << endl;
	////Ex4
	//const int firstNum = 60, secondNum = 6;
	//cout << "Result of the 4th ex.(NSD) for " << firstNum << " and " << secondNum << " is " << nsdLoop(firstNum, secondNum) <<
	//	", reccursive version of this function result is " << nsdReccursive(firstNum, secondNum) << endl;
	//cout << "==================================================================================" << endl;
	////Ex5
	//const int ex5_var1 = 4, ex5_var2 = 3;
	//cout << "Result of the 5th ex. (Chebyshev Polynomial) for n=" << ex5_var1 << " and x=" << ex5_var2 << " is " << chebyshevPolynomial(ex5_var1, ex5_var2) << endl;

	return 0;

}