#include <iostream>
#include <complex>
#include <limits>
#include "Size.h"
#include "Precision.h"
using namespace std;

int main() {
	/*	{
		long l;
		int i = 0;
		complex <double> z;
		complex <float> z1;
	cout << size(l) << endl;
		cout << size(i) << endl;
		cout << size(z) << endl;
		cout << size(z1) << endl;
		cout << z << endl;
		cout << size<long>() << endl;
		return 0;
	}*/
	{
		cout << "max_char " << max_char() << endl;
		cout << "size_char " << size_char() << endl;
		cout << numeric_limits<int> ::max() << endl;
		cout << (int)numeric_limits<char> ::max() << endl;
		cout << (int)numeric_limits<unsigned char> ::max() << endl;
		cout << hex << numeric_limits<unsigned int> ::max() << endl;
		float x = 1;
		float d = 1e-8f;
		//float d = 1e-7f;
		//int n = 10000000;
		int n = 100000000;
		for (int k = 0; k < n; ++k)
			x = x + d;
		cout << "for loop " << x << endl;
		cout << "mult " << x + n * d << endl;
		cout << "float 10:" << prec(10) << endl;		
		cout << numeric_limits<float> :: digits10 << endl;
		cout << "float 16:" << prec(16) << endl;

		return 0;
	}
	bool b;
	char c;
	unsigned char cu;
	signed char csg;
	short s;
	short int is;
	signed short int issg;
	unsigned short int ius;
	unsigned short su;
	int i;
	signed int isg;
	unsigned int iu;
	signed sg;
	unsigned u;
	long int il;
	signed long int ilsg;
	long l;
	signed long lsg;
	unsigned long int ilu;
	unsigned long lu;
	float f;
	double d;
	long double ld;
	cout
		<< "\n bool= " << sizeof(b)
		<< "\n char= " << sizeof(c)
		<< "\n unsigned char = " << sizeof(cu)
		<< "\n signed char = " << sizeof(csg)
		<< "\n short = " << sizeof(s)
		<< "\n short int= " << sizeof(is)
		<< "\n signed short int = " << sizeof(issg)
		<< "\n unsigned short int = " << sizeof(ius)
		<< "\n unsigned short = " << sizeof(su)
		<< "\n int = " << sizeof(i)
		<< "\n signed int = " << sizeof(isg)
		<< "\n unsigned int = " << sizeof(iu)
		<< "\n signed = " << sizeof(sg)
		<< "\n unsigned= " << sizeof(u)
		<< "\n long int= " << sizeof(il)
		<< "\n signed long int= " << sizeof(ilsg)
		<< "\n long = " << sizeof(l)
		<< "\n signed long = " << sizeof(lsg)
		<< "\n unsigned long int= " << sizeof(ilu)
		<< "\n unsigned long = " << sizeof(lu)
		<< "\n float = " << sizeof(f)
		<< "\n double = " << sizeof(d)
		<< "\n long double = " << sizeof(ld)
		<< endl;
	return 0;
}
