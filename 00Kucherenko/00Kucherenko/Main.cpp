//
// Developed by Kucherenko Daniil on 9/15/22
//

#include <iostream>
#include "Ex1_Sum.h"

using namespace std;

int main(void) {
	cout << "Debugging the 1st ex sum: " << endl;
	cout << "Enter the n and x variable values: ";
	int n, x;
	cin >> n >> x;
	cout << "You have entered: n=" << n << ", x=" << x << endl;
	cout << "Result of the 1st ex is: " << sumFunc(&n, &x);

	return 0;
}