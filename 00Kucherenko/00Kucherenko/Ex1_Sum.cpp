//
// Developed by Kucherenko Daniil on 9/15/22
//

double sumFunc(const int* ptr_n, const int* ptr_x) {
	double sum = 0;
	int n = *ptr_n, x = *ptr_x;
	long factorial;
	for (int k = 0; k <= n; k++) {
		factorial = 1;
		if (k != 0 && k != 1) {
			for (int j = 1; j <= k; j++)
				factorial *= j;
		}
		if (k == 0)
			sum = 1;
		else {
			if (k % 2 == 0)
				sum += (double)x / factorial;
			else
				sum += (double)-x / factorial;
			x *= *ptr_x;
		}
	}
	return sum;
}
