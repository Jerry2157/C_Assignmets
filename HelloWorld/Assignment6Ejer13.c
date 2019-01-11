/*#include <stdio.h>
#define SIZE 10000



long int fillTables(long int nNumber) {
	
	long int a1[SIZE];
	long int n = 0;
	for (long int i = 0; i < nNumber; i++) {
		n = i;
		a1[i] = n;
	}
	for (long int i = 0; i < nNumber; i++) {
		
		if (a1[i] == 3) {
			printf("\n3");
		}
		if (a1[i] == 5) {
			printf("\n5");
		}
		if (a1[i] == 7) {
			printf("\n7");
		}

		if (a1[i] % 2 == 0 || a1[i] % 3 == 0 || a1[i] % 5 == 0 || a1[i] % 7 == 0)
		{
			a1[i] = 0;
		}
		else {
			//printf("/n");

		}
	}
	
	for (long int i = 3; i < nNumber; i++) {
		if (a1[i] != 0)
		{
			printf("\n%ld", a1[i]);
		}
	}
	return 0;
}



int main(void) {

	long int nSize = 0;
	scanf("%ld", &nSize);


	fillTables(nSize);

	return 1;
}*/