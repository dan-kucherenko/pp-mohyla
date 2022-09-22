//
// Developed by Kucherenko Daniil on 9/15/22
//

/*
s[0]=1;
s[1] = -x / k
s[n] = s[n-1] * -x /k
*/

double sumFunc(const int* ptr_n, const int* ptr_x) {
	int n = *ptr_n, x = *ptr_x;
	double s0 = 1, sum = 1;
	for (int k = 1; k <= n; k++) {
		s0 *= -x / (double)k;
		sum += s0;
	}
	return sum;
}
