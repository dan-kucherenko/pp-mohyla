//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include <math.h>
#include "Ex1_Sum.h"
#include "Ex2_Sin.h"
#include "Ex3_DivWithRem.h"
#include "Ex4_NSDr.h"
#include "Ex5_ChebyshevPoly.h"

using namespace std;

int main(void) {
	//Ex1
	const int n = 5, ex1_x = 6;
	cout << "Result of the 1st ex. (sum) is: " << sumFunc(&ex1_x, &n) << ", n=" << n << ", x=" << ex1_x << endl;
	//Ex2
	double ex2_x = 0.7, e = 0.007;
	cout << "Result of the 2nd ex.(sin func) for x=0.7 and e=0.007 is " << sinFunct(&ex2_x, &e) << ':' << sin(ex2_x) << endl;
	//Ex3
	const int dividend = -50, divisor = 4;
	cout << "Result of the 3rd ex. (dividing with remainder) for m=-50, n=4 is " << divWithRem(dividend, divisor)
		<< ", default function result is " << dividend % divisor  << endl;
	//Ex4
	const int firstNum = 46, secondNum = 4;
	cout << "Result of the 4th ex.(NSD) for 46 and 4 is " << nsdLoop(firstNum, secondNum) << 
		", reccursive version of this function result is " << nsdReccursive(firstNum, secondNum) << endl;
	//Ex5
	const int ex5_var1 = 4, ex5_var2 = 3;
	cout << "Result of the 5th ex. (Chebyshev Polynomial) for n=4 and x=3 is: " << chebyshevPolynomial(ex5_var1, ex5_var2) << endl;

	return 0;

}