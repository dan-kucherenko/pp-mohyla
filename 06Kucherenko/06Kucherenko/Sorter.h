#pragma once
#include <iostream>
#include <cassert>

template <class T>
bool is_arr_same(const T* input_arr, const T* sorted_arr, size_t arr_size) {
	//input_arr = insertion_sort(input_arr, arr_size);
	//for (int i = 0; i < arr_size; ++i) {
	//	if (input_arr[i] != sorted_arr[i])
	//		return false;
	//}
	//return true;
	for (size_t i = 0; i < arr_size; ++i)
		if (input_arr[i] == sorted_arr[0]) {
			bool is_arr_same = true;
			for (unsigned int j = 1; j < arr_size; ++j)
				if (input_arr[i + j] != sorted_arr[j]) {
					is_arr_same = false;
					break;
				}
			return is_arr_same;
		}
}

template <class T>
bool sorted_in_ascending(const T* arr, const size_t arr_size) {
	bool sorted_in_asc = true;
	for (size_t i = 0; i < arr_size - 1; i++) {
		if (arr[i + 1] < arr[i]) {
			sorted_in_asc = false;
			break;
		}
	}
	return sorted_in_asc;
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
	assert(is_arr_same(arr, sorted_arr, arr_size));
	return sorted_arr;
}

template <class T>
void sort_tester(const T* arr, size_t arr_size) {
	T* sorted_arr = insertion_sort(arr, arr_size);
	std::cout << "Array of " << typeid(T).name() << ':';
	print_arr<T>(arr, arr_size);
	std::cout << "Sorted arr of " << typeid(T).name() << ':';
	print_arr(sorted_arr, arr_size);
	delete[] sorted_arr;
}
