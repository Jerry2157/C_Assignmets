/*#include <stdio.h>
#define SIZE 100000

long int range(long int nCounter) {
	if (nCounter == 1) {
		return 1;
	}
	long int a1[SIZE];
	long int n = 0;
	long int numbers = 0;
	scanf("%ld", &n);
	long int minNum = n;
	long int maxNum = n;
	a1[0] = n;
	maxNum = minNum;
	//printf("\n minNum: %ld", maxNum);
	//printf("\n maxNum: %ld", maxNum);

	for (long int i = 1; i < nCounter; i++) {
		n = 0;
		scanf("%ld", &n);

		//printf("\n n: %ld", n);
		a1[i] = n;
		if (minNum > a1[i]) {
			minNum = a1[i];
		}
		if (a1[i] > maxNum) {
			maxNum = a1[i];
		}
	}
	



	numbers = maxNum - minNum + 1;


	return numbers;
}

int main(void) {

	long int nSize = 0;
	scanf("%ld", &nSize);
	


	printf("%ld", range(nSize));

	return 1;
}

*/