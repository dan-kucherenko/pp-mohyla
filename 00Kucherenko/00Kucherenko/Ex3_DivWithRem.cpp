//
// Developed by Kucherenko Daniil on 9/16/22
//
#include <cmath>
int divWithRem(int dividend, int divisor) {
	//int dividend = 0;
	do {
		if (dividend >= 0)
			dividend -= divisor;
		else if (dividend <= 0 && divisor <= 0)
			dividend += -divisor;
		else
			dividend += divisor;

	} while (dividend > divisor);
	return dividend;
}
