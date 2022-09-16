//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include "Ex1_Sum.h"
#include "Ex3_DivWithRem.h"
#include "Ex4_NSDr.h"
#include "Ex5_ChebyshevPoly.h"

using namespace std;

int main(void) {
	//Ex1
	const int ex1_var1 = 5, ex1_var2 = 6;
	cout << "Result of the 1st ex. (sum) is: " << sumFunc(&ex1_var1, &ex1_var2) << ", n=" << ex1_var1 << ", x=" << ex1_var2 << endl;
	//Ex3
	const int ex3_var1 = 46, ex3_var2 = 9;
	cout << "Result of the 3rd ex. (dividing with remainder) for m=46, n=9 is " << divWithRem(ex3_var1, ex3_var2)
		<< ", default function result is " << ex3_var1 / ex3_var2 << endl;
	//Ex4
	const int ex4_var1 = 50, ex4_var2 = 4;
	cout << "Result of the 4th ex.(NSD) for 50 and 4 is " << nsdLoop(ex4_var1, ex4_var2) << ", reccursive version of this function result is " << nsdReccursive(ex4_var1, ex4_var2) << endl;
	//Ex5
	const int ex5_var1 = 4, ex5_var2 = 3;
	cout << "Result of the 5th ex. (Chebyshev Polynomial) for n=4 and x=3 is: " << chebyshevPolynomial(ex5_var1, ex5_var2) << endl;
	return 0;
}