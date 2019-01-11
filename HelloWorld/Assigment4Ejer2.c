/*#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numToProcess;
	scanf("%d", &numToProcess);

	//printf("numero revuelto :%d\n", digitRange(numToProcess));
	printf("%d", digitRange(numToProcess));

	return 0;
}

int digitRange(int num) {
	num = abs(num);
	
	int valid = num;
	valid = valid / 10;
	if (valid == 0) {
		return 1;
	}

	int returnNum = 0;

	returnNum = (getMax(num) - getMin(num) + 1);

	return returnNum;
}


int getMax(int numToSeparate) {
	int max = 0;
	int temp = 0;
	while (numToSeparate != 0)
		//for (int i = 0; i<2; i++)
	{
		temp = temp * 10;
		temp = numToSeparate % 10;
		//printf("numToQuarter: %d\n", numToSeparate);
		//printf("temp: %d\n", temp);
		if (temp >= max) {
			max = temp;
		}
		numToSeparate = numToSeparate / 10;
	}
	//printf("mayor :%d\n", max);
	return max;
}

int getMin(int numToSeparate) {
	int min = 0;
	int took = 0;
	int temp = 0;
	while (numToSeparate != 0)
		//for (int i = 0; i<2; i++)
	{
		temp = temp * 10;
		temp = numToSeparate % 10;
		//printf("temp: %d\n", temp);
		if (took == 0) {
			min = temp;
			took = 1;
		}
		else {
			if (temp <= min) {
				min = temp;
			}
			else {
			}
		}
		numToSeparate = numToSeparate / 10;
	}
	//printf("menor :%d\n", min);
	return min;
}

*/