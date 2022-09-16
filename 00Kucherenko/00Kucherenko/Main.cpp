//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include "Ex1_Sum.h"
#include "Ex3_DivWithRem.h"

using namespace std;

int main(void) {
	cout << "Debugging the 1st ex. sum: " << endl;
	int ex1_var1 = 5, ex1_var2 = 6;
	cout << "Result of the 1st Sum is: " << sumFunc(&ex1_var1, &ex1_var2) << '\n\n';

	cout << "Debugging the 3rd ex.: \n";
	int ex2_var1 = 46, ex2_var2 = 9;
	cout << "Result of the 3rd ex. is: " << divWithRem(ex2_var1, ex2_var2) << ", default function result: " << ex2_var1 / ex2_var2 << endl;
	

	return 0;
}