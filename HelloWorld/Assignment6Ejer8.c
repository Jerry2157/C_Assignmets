/*#include <stdio.h>
#define SIZE 10000

long int searchValue(long int a1[SIZE], long int nCounter) {
	if (nCounter % 2 == 0) {
		long int b = (nCounter / 2);
		long int a = (b - 1);
		double median = (((double)a1[b] + (double)a1[a]) / (double)2);
		printf("\n%.1lf", median);
	}
	else {
		int index = 0;

		index = (int)((double)nCounter / 2);

		printf("\n%d", a1[index]);
	}
	
	return 1;
}

long int BubbleSort(long int nCounter) {
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
	searchValue(a1, nCounter);
	//printf("\n%ld", searchValue(a1, nCounter));
	return 0;
}



int main(void) {

	long int nSize = 0;
	scanf("%ld", &nSize);
	

	BubbleSort(nSize);

	return 1;
}*/