//
// Developed by Kucherenko Daniil on 9/16/22
//
#include <math.h>
int divWithRem(int dividend, int divisor) {
	//int dividend = 0;
	do {
		if (dividend >= 0) 
			dividend -= divisor;
		else 
			dividend += divisor;
	}
	while (abs(dividend) > divisor);
	return dividend;
}
