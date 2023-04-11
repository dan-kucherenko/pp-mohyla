//
// Developed by Daniil Kucherenko on 07.12.22
//

#pragma once
template <class T>
T power(const T& x, unsigned int exponent, const T& uni = 1) {
	if (exponent == 0)
		return uni;
	if (exponent % 2) {
		exponent--;
		return power(x, exponent, x * uni);
	}
	return power(x * x, exponent / 2, uni);
}
