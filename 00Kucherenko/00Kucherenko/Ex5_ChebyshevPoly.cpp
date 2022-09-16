//
// Developed by Kucherenko Daniil on 9/16/22
//

int chebyshevPolynomial(int n, int x) {
    int t0 = 1, t1 = x, res = 0;
	for (int i = 2; i <= n; i++) {
		res = 2 * x * t1 - t0;
		t0 = t1;
		t1 = res;
		t1 = res;
	}
    return res;
}
