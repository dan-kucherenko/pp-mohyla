//
// Developed by Kucherenko Daniil on 9/16/22
//

int divWithRem(int m, int n) {
	int wholeNum = 0;
	do {
		m -= n;
		wholeNum++;
	} while (m > n); 
	return wholeNum;
}
