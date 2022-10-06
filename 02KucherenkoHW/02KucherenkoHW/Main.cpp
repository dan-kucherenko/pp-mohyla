#include <iostream>
#include  "Precision.h"
#include "Size.h"

using namespace std;

/*int fibonacci(int n) {
	int f = 1;
	int a = 0;
	int b = 1;
	if (n < 0) throw n;
	if (n == 0) return 0;
	for (int k = 2; k <= n; k++) {
		f = a + b;
		a = b;
		b = f;
	}
	return f;
}*/
unsigned long long fibonacci(int n) {
	unsigned long long f = 1, a = 0, b = 1;
	if (n < 0) throw n;
	if (n == 0) return 0;
	for (int k = 2; k <= n; k++) {
		f = a + b;
		a = b;
		b = f;
	}
	return f;
}

int main(void) {
	int i;
	long int li;
	long long int lli;
	//cout << "Size of int is " << size_int() << " max number is " << max_int() << endl;
	//cout << "Size of long int is " << size_long_int() << " max number is " << max_long_int() << endl;
	cout << "Size of long long int is " << size_long_long_int() << " max number is " << hex << max_long_long_int() << endl;
	//cout << "Precision of double for base 10 " << prec(10) << endl;
	//cout << "Precision of double for base 16 " << prec(16) << endl;
	//cout << "Precision of double (numeric_limits) function " << numeric_limits<double> ::digits10 << endl;
	int n;

	/*try {
		cout << "Give your n:";
		cin >> n;
		for (int k = 0; k <= n; ++k)
			cout << k << ':' << fibonacci(k) << "\n";
	} catch (int n) {
		cout << "You gave negative " << n << endl;
	}*/
	return 0;
}


