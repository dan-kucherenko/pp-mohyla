#include <iostream>
#include "Simpson.h"

inline double my_exp(double x) {
	return x * x * x;
}

int main(void) {
	std::cout << simpson(log2, 5, 20, 0.00001) << std::endl;
	return 0;
}