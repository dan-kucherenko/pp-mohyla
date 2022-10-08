#include <iostream>  
#include "Power.h"
#include "QuickPower.h"

using namespace std;

int main(void) {
	unsigned int exponent = 6, num_of_steps = 0;
	cout.precision(40);
	for (double x = 0; x <= 100; x++) {
		cout << "Power for x=" << x << " with base " << exponent << " is " << power(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "Quick power for x=" << x << " with base " << exponent << " is " << quick_power(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "Recursive power funct for x=" << x << " with base " << exponent << " is " << power_recursive(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "Recursive quick power funct for x=" << x << " with base " << exponent << " is " << quick_power_recursive(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "==========================================================================" << endl << endl;
	}
}