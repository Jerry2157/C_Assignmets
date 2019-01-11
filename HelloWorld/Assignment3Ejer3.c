/*#include <stdio.h>

int main(void) {
	printSquare();
	return 0;
}


int printSquare(void) {
	int min;
	scanf("%d", &min);
	int max;
	scanf("%d", &max);

	for (int i = min; i <= max; i++) {
		int contador = 0;
		int j = i;
		while (contador<((max+1) - min)) {
			
			if (j <= max) {
				printf("%d", j);
			}
			else {
				j = min;
				printf("%d", j);
			}
			j++;
			contador++;
		}
		printf("\n");
	}

	return 0;
}*/