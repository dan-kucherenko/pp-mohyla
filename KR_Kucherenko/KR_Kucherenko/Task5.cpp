//
// Developed by Daniil Kucherenko on 06.12.22
//

#include "Task5.h"

size_t string_size(const char* ps) {
	size_t len = 0;
	while (*(ps + len++));
	return len;
}

char* append(const char* str1, const char* str2) {
	const size_t size1 = string_size(str1);
	const size_t size2 = string_size(str2);
	const int new_size = size1 + size2;
	char* res = new char[new_size];
	for (int i = 0; i < new_size; i++) {
		if (i < size1)
			*(res + i) = *(str1 + i);
		else
			*(res + i - 1) = *(str2 + i - size1);
	}
	res[new_size] = '\0';
	return res;
}
