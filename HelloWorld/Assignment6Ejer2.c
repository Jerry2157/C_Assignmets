/*#include <stdio.h>
#define SIZE 10000


int isMagicSquare(unsigned counter) {

	unsigned magicSquare[SIZE][SIZE];
	
	unsigned pivote = 0;
	unsigned testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		for (unsigned j = 0; j < counter; j++) {
			unsigned n = 0;
			scanf("%u", &n);
			magicSquare[i][j] = n;
		}
	}

	for (unsigned i = 0; i < counter; i++) {
		pivote += magicSquare[0][i];
	}
	//printf("\nel pivote es: %u", pivote);


	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[1][i];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}


	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[2][i];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}

	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[i][0];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}

	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[i][1];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}

	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[i][2];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}

	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[i][i];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}

	testNum = 0;
	for (unsigned i = 0; i < counter; i++) {
		testNum += magicSquare[counter - i - 1][counter - i - 1];
	}
	//printf("\n el testNum: %u", testNum);
	if (testNum != pivote) {
		return 0;
	}


	return 1;
}

int main(void) {
	
	unsigned n = 0;
	scanf("%u", &n);
	int itIs = 0;

	itIs = isMagicSquare(n);

	if (itIs == 1) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 1;
}

*/