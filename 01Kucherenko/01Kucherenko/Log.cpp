///
//Developed by Kucherenko Daniil on 09/26/22
//

#include <iostream>

double logarithm(double x, const int base) {
	double log_result = 0;
	if (x <= 0)
		std::cout << "Error in input variables: x is negative or equals to 0" << std::endl;
	else if (base <= 0)
		std::cout << "Error in input variables: base is negative value or equals to 0" << std::endl;
	else if (static_cast<int>(x) % static_cast<int>(base) == 0 && x > 1) {
		while (x >= base) {
			x /= base;
			log_result++;
		}
		return log_result;
	} else if (x > 0 && x < 1) {
		double divisor = 1;
		while (divisor >= x) {
			divisor /= base;
			log_result--;
		}
		return log_result;
	}
}
