/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numA = 0;
	scanf("%d", &numA);
	int numB = 0;
	scanf("%d", &numB);
	int numC = 0;
	scanf("%d", &numC);
	
	int midNum = getMid(getMax(numA, numB, numC), getMin(numA, numB, numC));

	if (midNum == numA || midNum == numB || midNum == numC) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 1;
}

int getMax(int numA, int numB, int numC) {
	int tempNum = 0;

	if (numA >= tempNum) {
		tempNum = numA;
	}
	else {

	}
	if (numB >= tempNum) {
		tempNum = numB;
	}
	else {

	}
	if (numC >= tempNum) {
		tempNum = numC;
	}
	else {

	}

	return tempNum;
}

int getMin(int numA, int numB, int numC) {
	
	int min = 0;

	min = numA;

	if (numB < min) {
		min = numB;
	}
	else {

	}
	if (numC < min) {
		min = numC;
	}
	else {

	}
	return min;
}

int getMid(int max, int min) {
	int midNum = 0;
	midNum = ((max - min)/2 + min);

	return midNum;
}
*/