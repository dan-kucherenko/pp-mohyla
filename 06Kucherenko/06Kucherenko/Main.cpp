#include <iostream>
#include "Sorter.h"

using namespace std;

int main(void) {
	const size_t size = 7;
	const int* arr_integer = new int[size] {3, 321, 3453, 123, 1, 53, 4356};
	const int* sorted_arr = insertion_sort<int>(arr_integer, size);
	print_arr(arr_integer, size);

	/*const char* arr_character = new char[size] {'a', 'c', 'd', 'b', 'q', 'x', 'y'};
	const char* sorted_char_arr = insertion_sort(arr_character, size);*/

	return 0;
}