/*#include <stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);

	printf("Perfect numbers up to %d: ", num);
	for (int i = 1; i <= num; i++) {
		getPerfectsNum(i);
	}
	return 1;
}

int getPerfectsNum(int num) {
	int tempSum = 0;
	for (int i = 1; i < num; i++) {
		if ((num % i) == 0) {
			//printf("%d \n", i);
			tempSum = tempSum + i;
		}
	}
	if (tempSum == num) {
		printf("%d ", tempSum);
	}
	return 1;
}*/