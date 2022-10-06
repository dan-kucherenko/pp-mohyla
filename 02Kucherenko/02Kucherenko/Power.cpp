double power(double x, unsigned int exponent, unsigned int& steps) {
	double res = 1;
	steps = 0;
	if (!x) {
		steps++;
		return 0;
	}
	if (static_cast<int>(x) == 1) {
		steps++;
		return 1;
	}
	for (int i = 0; i < exponent; ++i) {
		res *= x;
		steps++;
	}
	return res;
}

