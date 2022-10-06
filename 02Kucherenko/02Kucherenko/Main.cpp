#include <iostream>
#include "Power.h"
#include "QuickPower.h"

using namespace std;

int main(void) {
	unsigned int exponent = 9;
	unsigned int num_of_steps = 0;
	cout.precision(20);
	for (double x = 0; x <= 30; x++) {
		cout << "Quick power for x=" << x << " with base " << exponent << " is " << quick_power(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "Power for x=" << x << " with base " << exponent << " is " << power(x, exponent, num_of_steps) << ", number of steps is " << num_of_steps << endl;
		cout << "==========================================================================" << endl;
	}
}