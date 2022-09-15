//
// Developed by Kucherenko Daniil on 9/15/22
//

double sumFunc(int* ptr_n, int* ptr_x) {
	double sum = 0;
	int n = *ptr_n, x = *ptr_x, fact_f;
	for (int k = 0; k <= n; k++) {
		fact_f = 1;
		if (k != 0 && k != 1) {
			for (int j = 1; j <= k; j++)
				fact_f *= j;
		}
		if (k == 0)
			sum = 1;
		else {
			if (k % 2 == 0)
				sum += (double)x / fact_f;
			else
				sum += (double)-x / fact_f;
			x *= *ptr_x;
		}
	}
	return sum;
}
