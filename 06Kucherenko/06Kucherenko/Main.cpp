#include <iostream>
#include "Sorter.h"

using namespace std;

int main(void) {
	const size_t size = 7;

	const int* arr_integer = new int[size] {3, 321, 3453, 123, 1, 53, 4356};
	const int* sorted_arr = insertion_sort<int>(arr_integer, size);

	cout << "Integer array: ";
	print_arr(arr_integer, size);
	cout << "Sorted int arr: ";
	print_arr(sorted_arr, size);
	delete[] arr_integer;
	delete[] sorted_arr;
	cout << "=========================================================" << endl;
	const char* arr_char = new char[size] {'q', 'a', 'c', 'd', 'y', 'z', 'e'};
	const char* sorted_char_arr = insertion_sort(arr_char, size);

	cout << "Char array: ";
	print_arr(arr_char, size);
	cout << "Sorted char arr: ";
	print_arr(sorted_char_arr, size);
	delete[] arr_char;
	delete[] sorted_char_arr;
	cout << "=========================================================" << endl;
	const double* arr_double = new double[size] {2.4, 1.4, 0.123, 0.01, 0.15, 34.57, 15.75};
	const double* sorted_double_arr = insertion_sort<double>(arr_double, size);

	cout << "Double array: ";
	print_arr(arr_double, size);
	cout << "Sorted double arr: ";
	print_arr(sorted_double_arr, size);
	delete[] arr_double;
	delete[] sorted_double_arr;

	return 0;
}