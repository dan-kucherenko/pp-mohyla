#include <iostream>
#include "Sorter.h"

using namespace std;

int main(void) {
	const size_t size = 7;

	const int* arr_integer = new int[size] {3, 321, 3453, 123, 1, 53, 4356};
	sort_tester(arr_integer, size);
	delete[]arr_integer;
	cout << "=========================================================" << endl;
	const char* arr_char = new char[size] {'q', 'a', 'c', 'd', 'y', 'z', 'e'};
	sort_tester(arr_char, size);
	delete[] arr_char;
	cout << "=========================================================" << endl;
	const double* arr_double = new double[size] {2.4, 1.4, 0.123, 0.01, 0.15, 34.57, 15.75};
	sort_tester(arr_double, size);
	delete[] arr_double;

	return 0;
}