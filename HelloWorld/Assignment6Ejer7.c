/*#include <stdio.h>
#define SIZE 10000

long int searchValue(long int a1[SIZE], long int nCounter, long int nNumber) {
	long int izq = 0;
	long int der = nCounter;
	while (izq < nCounter) {
		if (a1[izq] == nNumber) {
			return izq;
		}
		else if (a1[izq] > nNumber) {
			return izq;
		}
		izq += 1;
	}
	return 1;
}

long int BubbleSort(long int nCounter,long int nNumber) {
	if (nCounter == 1) {
		return 1;
	}
	long int a1[SIZE];

	long int n = 0;

	for (long int i = 0; i < nCounter; i++) {
		n = 0;
		scanf("%ld", &n);
		a1[i] = n;
	}


	long int tempA = 0;
	long int tempB = 0;
	for (long int j = 0; j < nCounter; j++) {
		for (long int i = 0; i < nCounter; i++) {
			//printf("iteracion: %ld = ", i);
			//for (long int i = 0; i < nCounter; i++) {
			//	printf("%ld", a1[i]);
			//}
			//printf("\n");
			if (i < (nCounter - 1)) {
				tempA = a1[i];
				tempB = a1[i + 1];

				if (tempB < tempA) {
					a1[i] = tempB;
					a1[i + 1] = tempA;
				}
				else {

				}
			}
		}
	}


	//for (long int i = 0; i < nCounter; i++) {
	//	printf("\n%ld", a1[i]);
	//}

	printf("\n%ld", searchValue(a1, nCounter, nNumber));

	return 0;
}



int main(void) {

	long int nSize = 0;
	scanf("%ld", &nSize);
	long int nNumber = 0;
	scanf("%ld", &nNumber);

	BubbleSort(nSize,nNumber);

	return 1;
}*/