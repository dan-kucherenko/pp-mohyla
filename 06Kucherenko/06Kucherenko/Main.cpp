#include <iostream>
#include "Sorter.h"

using namespace std;

int main(void)
{
	int arr[] = {2,321,3453,123,1,53,56467};
	insertion_sort(arr);
	print_arr(arr);

	return 0;
}