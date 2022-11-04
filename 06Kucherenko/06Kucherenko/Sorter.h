#pragma once
#include <iostream>
#include <cassert>

template <class T>
bool is_arr_same(const T* input_arr, const T* sorted_arr) {
	return true;
}

template <class T>
bool sorted_in_ascending(const T* arr, const size_t arr_size) {
	for (size_t i = 0; i < arr_size - 1; i++) {
		if (arr[i + 1] < arr[i])
			return false;
	}
	return true;
}

template <class T>
void print_arr(const T* arr, const size_t arr_size) {
	std::cout << "( ";
	for (size_t i = 0; i < arr_size; i++)
		std::cout << arr[i] << ' ';
	std::cout << ')' << std::endl;
}

template <class T>
T* insertion_sort(const T* arr, const size_t arr_size) {
	T* sorted_arr = new T[arr_size];
	for (size_t i = 0; i < arr_size; i++)
		sorted_arr[i] = arr[i];

	for (size_t i = 1; i < arr_size; ++i) {
		T key = sorted_arr[i];
		size_t j = i - 1;
		while (j >= 0 && key < sorted_arr[j]) {
			T temp = sorted_arr[j];
			sorted_arr[j] = sorted_arr[j + 1];
			sorted_arr[j + 1] = temp;
			--j;
		}
	}
	assert(sorted_in_ascending(sorted_arr, arr_size));
	//assert(is_arr_same());
	//delete[] sorted_arr;
	return sorted_arr;
}
