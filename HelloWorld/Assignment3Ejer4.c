/*#include <stdio.h>

int main(void) {

	int base;
	scanf("%d", &base);
	int exp;
	scanf("%d", &exp);

	printPowersOfN(base,0,exp);
	return 0;
}

int printPowersOfN(int base,int current, int exp) {

	if (current == 0) {
		printf("%d ", 1);
		printPowersOfN(base, (current + 1), exp);
	}
	else if (current == 1) {
		printf("%d ", base);
		printPowersOfN(base, (current + 1), exp);
	}
	else if(current == exp){
		int temp = base;
		for (int i = 1; i < current; i++) {
			temp *= base;
		}
		printf("%d", temp);
	}
	else {
		int temp = base;
		for (int i = 1; i < current; i++) {
			temp *= base;
		}
		printf("%d ",temp);
		printPowersOfN(base, (current + 1), exp);
	}

	return 0;
}*/