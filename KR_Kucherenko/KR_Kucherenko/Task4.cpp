//
// Developed by Daniil Kucherenko on 08.12.22
//

#include "Task4.h"

unsigned int swap(const unsigned int& word) {
	unsigned int res = 0, start = 0xf;
	for (int i = 0; i < 32; i += 4) {
		const unsigned int temp1 = (word & start) << 4;
		start <<= 4;
		const unsigned int temp2 = (word & start) >> 4;
		res = res | (0 | temp1) | temp2;
		start <<= 4;
	}
	return res;
}
