/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	
	printf("%d",digitSum(num));
	
	return 0;
}



int digitSum(int numToSum) {
	numToSum = abs(numToSum);
	int sum = 0;
	int temp = 0;
	while (numToSum != 0)
		//for (int i = 0; i<2; i++)
	{
		temp = temp * 10;
		temp = numToSum % 10;
		//printf("numToQuarter: %d\n", numToSeparate);
		//printf("temp: %d\n", temp);
		sum = sum + temp;
		numToSum = numToSum / 10;
	}
	//printf("mayor :%d\n", max);
	return sum;
}
*/