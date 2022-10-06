double quick_power(double x, unsigned int exponent, unsigned int& steps) {
	double res = 1;
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
	if (static_cast<int>(x) == 1) {
		steps++;
		return 1;
	} else {
		while (exponent > 0) {
			if (exponent % 2) {
				exponent--;
				res *= x;
			} else {
				exponent /= 2;
				x *= x;
			}
			steps++;
		}
	}
	return res;
}
