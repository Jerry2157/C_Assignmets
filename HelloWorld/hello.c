/*#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	srand(time(NULL));   // should only be called once
	//int r = rand();      // returns a pseudo-random integer between 0 and RAND_MAX

	printf("hola mundo\n");

	int i = 0;
	while (i<10) {
		printf("Ejemplo 1:.\n");
		i++;
	}


	i = 10;
	while (i>=0) {
		printf("Ejemplo 2:(%d)\t",i);
		i--;
	}

	i = 10;
	do{
		printf("Ejemplo 3:(%d)\t", i);
		i--;
	} while (i >= 0);

	i = 0;
	while (i++ < 0) {
		printf("Ejemplo 4:(%d)\t", i);
		
	}


	for (int j = 0; j < 100; j++){
		printf("%d elefente se columpiaba \t", j);
	}

	for (int j = 0; j < 100; j++) {
		printf("Ejemplo 6: %d \t", j);
	}
	//Ctrl + k + c
	//Ctrl + k + d

	int a, b, c, d = 0;
	int x, y = 0;
	for (size_t j = 0; j < 10000; j++)
	{
		for (size_t k = 0; k < 2; k++)
		{
			int x = rand() % 10000;
			int y = rand() % 10000;
			
		}
		printf("\n");
	}

	int n = 0;
	if (n % 2 == 0)
		puts("n is even");

	return 0;
}
*/