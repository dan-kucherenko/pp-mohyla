#include <iostream>  
#include "Power.h"
#include "QuickPower.h"

using namespace std;

int main(void) {
	unsigned int num_of_steps = 0;
	const double x = 7.4;
	for (int exponent = 50; exponent <= 300; exponent += 50) {
		cout << "Power: \t\t\t x=" << x << ", base=" << exponent << ": " << power(x, exponent, num_of_steps) << ", number of steps: " << num_of_steps << endl;
		cout << "Recursive power: \t x=" << x << ", base=" << exponent << ": " << power_recursive(x, exponent, num_of_steps) << ", number of steps: " << num_of_steps << endl;
		cout << "Quick power: \t\t x=" << x << ", base=" << exponent << ": " << quick_power(x, exponent, num_of_steps) << ", number of steps: " << num_of_steps << endl;
		cout << "Recursive quick power: \t x=" << x << ", base=" << exponent << ": " << quick_power_recursive(x, exponent, num_of_steps) << ", number of steps: " << num_of_steps << endl;
		cout << "==========================================================================" << endl << endl;
	}
}