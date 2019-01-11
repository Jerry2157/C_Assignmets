/*
#include <stdio.h>


int main(void) {
	printf("invocando la prueba \n");

	int  result = test_nXOR_o_o();
	printf("%d", result);
	return 0;
}

unsigned int nXOR(unsigned int a, unsigned int b) {

	return ~(a^b);
}
int test_nXOR_o_o() {
	//if (nXOR(0, 0) == 0xFFFFFFFF) return 1;
	//else return 0;
	return nXOR(0, 0) == 0xFFFFFFFF;
}
*/