int max_int() {
	int i = 1;
	int k = 0;
	while (i > 0) {
		++k;
		i++;
	}
	return k;
}
int max_long_int() {
	int li = 1;
	int k = 0;
	while (li > 0) {
		++k;
		li++;
	}
	return k;
}int max_long_long_int() {
	long long int lli = 1;
	int k = 0;
	while (lli > 0) {
		++k;
		lli++;
	}
	return k;
}

int size_int() {
	int i = 1;
	int k = 0;
	while (i) {
		++k;
		i <<= 1;
	}
	return k;
}
int size_long_int() {
	int li = 1;
	int k = 0;
	while (li) {
		++k;
		li <<= 1;
	}
	return k;
}
int size_long_long_int() {
	long long ll = 1;
	int k = 0;
	while (ll) {
		++k;
		ll <<= 1;
	}
	return k;
}

// x[0] = 1;
// d[0] = 1;
// 
//x[k]=x[0]+1./d[k];
// d[k]=d[k-1]/base;
//while (x[k]>x[0])

int prec(const double base) {
	const double x0 = 1;
	double x = 1;
	double d = 1;

	int i = 0;
	do {
		d = d / base;
		x = x0 + d;
		++i;
	} while (x > x0);
	return i - 1;
}