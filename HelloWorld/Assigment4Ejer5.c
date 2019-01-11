/*#include <stdio.h>

int main(void) {
	int numHops = 0;
	scanf("%d", &numHops);
	int pointer = 1;


	for (int i = 1; i <= (numHops * 2 + 1); i++) {
		if (i % 2 != 0) {
			printf("   %d   ",pointer);
			printf("\n");
			pointer++;
		}
		else {
			printf("%d     %d", pointer, (pointer + 1));
			printf("\n");
			pointer++;
			pointer++;
		}
		
	}


	return 1;
}*/