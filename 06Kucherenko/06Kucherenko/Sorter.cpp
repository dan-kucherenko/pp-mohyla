#include "Sorter.h"

#include <cassert>
#include <iostream>

bool is_arr_same(int arr[]) {
	const size_t arr_size = sizeof arr / sizeof arr[0];
	return true;
}

bool sorted_in_ascending(int arr[]) {
	const size_t arr_size = sizeof arr / sizeof arr[0];
	for (size_t i = 0; i < arr_size; i++) {
		if (arr[i + 1] > arr[i])
			return false;
	}
	return true;
}

void print_arr(int arr[]) {
	size_t arr_size = sizeof arr / sizeof arr[0];
	for (int i = 0; i < arr_size; i++)
		std::cout << arr[i] << ',';
}

void insertion_sort(int arr[]) {
	const size_t arr_size = sizeof arr / sizeof arr[0];
	int sorted_arr[arr_size];
	for (size_t i = 0; i < arr_size; i++)
		sorted_arr[i] = arr[i];

	for (int i = 1; i < arr_size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && key < arr[j]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	assert(sorted_in_ascending);
	assert(is_arr_same);
}
