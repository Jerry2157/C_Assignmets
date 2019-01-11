/*#include <stdio.h>
#define SIZE 10000

int ArrayCountInArray(int nMin, int nMax, int nCounter) {
	int a1[SIZE];
	int n = 0;
	int numbers = 0;
	for (int i = 0; i < nCounter; i++) {
		n = 0;
		scanf("%d", &n);
		a1[i] = n;
	}
	for (int i = 0; i < nCounter; i++) {
		n = 0;
		n = a1[i];
		if (n > nMin && n <= nMax) {
			numbers += 1;
		}
	}

	return numbers;
}

int main(void) {

	int nMin = 0;
	scanf("%d", &nMin);
	int nMax = 0;
	scanf("%d", &nMax);
	int nCounter = 0;
	scanf("%d", &nCounter);
	

	printf("%d", ArrayCountInArray(nMin, nMax, nCounter));

	return 1;
}

*/