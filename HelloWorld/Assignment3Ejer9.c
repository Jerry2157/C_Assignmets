/*#include <stdio.h>

int main(void) {
	
	int numToQuarter;
	scanf("%i", &numToQuarter);
	if (reverseNum(reverseNum(numToQuarter)) <= 25) {
		printf("%d", 1);
	}
	else if (reverseNum(reverseNum(numToQuarter)) > 25 && reverseNum(reverseNum(numToQuarter)) <=50) {
		printf("%d", 2);
	}
	else if (reverseNum(reverseNum(numToQuarter)) > 50 && reverseNum(reverseNum(numToQuarter)) <= 99) {
		printf("%d", 3);
	}
	else {
		printf("%d", 4);
	}
	return 0;
}

int reverseNum(int numToQuarter) {

	int temp = 0;
	//while (numToQuarter != 0)
	for(int i = 0; i<2;i++)
	{
		temp = temp * 10;
		temp = temp + numToQuarter % 10;
		numToQuarter = numToQuarter / 10;
	}
	return temp;
}*/