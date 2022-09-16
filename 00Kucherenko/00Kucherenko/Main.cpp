//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include "Ex1_Sum.h"
#include "Ex3_DivWithRem.h"
#include "Ex4_NSDr.h"

using namespace std;

int main(void) {
	//Ex1
	cout << " Debugging the 1st ex. sum: " << endl;
	int ex1_var1 = 5, ex1_var2 = 6;
	cout << "Result of the 1st Sum is: " << sumFunc(&ex1_var1, &ex1_var2) << endl;
	//Ex3
	cout << "\n Debugging the 3rd ex.: \n";
	int ex2_var1 = 46, ex2_var2 = 9;
	cout << "Result of the 3rd ex. is: " << divWithRem(ex2_var1, ex2_var2) << ", default function result: " << ex2_var1 / ex2_var2 << endl;
	//Ex4
	cout << "\n Debugging the 4th ex.: \n";
	int ex3_var1 = 50, ex3_var2 = 4;
	cout << "Result of the 4th ex.(loop) is: " << nsdLoop(ex2_var1, ex2_var2) << ", reccursive version of this function result: " << nsdReccursive(ex3_var1, ex3_var2) << endl;
	return 0;
}