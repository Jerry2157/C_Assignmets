/*#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);

	printf("%d", getZeros(num));

	return 1;
}

int getZeros(int numToGetZeros) {

	if (numToGetZeros == 0) {
		return 1;
	}
	int counterOnes = 0;
	int temp = 0;
	while (numToGetZeros != 0)
	{
		temp = temp * 10;
		temp = numToGetZeros % 10;
		//printf("temp: %d\n", temp);
		if (temp == 0) {
			counterOnes++;
		}

		numToGetZeros = numToGetZeros / 10;
	}
	return counterOnes;
}*/