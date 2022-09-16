//
// Developed by Kucherenko Daniil on 9/16/22
//

int nsdLoop(int firstNum, int secondNum) {
	while (firstNum != secondNum)
		firstNum > secondNum ? firstNum -= secondNum : secondNum -= firstNum;
	return firstNum;
}

int nsdReccursive(int firstNum, int secondNum) {
	if (firstNum == secondNum)
		return firstNum;
	else
		return	firstNum > secondNum ? nsdReccursive(firstNum - secondNum, secondNum) : nsdReccursive(firstNum, secondNum - firstNum);
}
