/*#include <stdarg.h>
#include <stdio.h>
//#include "Exam01.h"

unsigned test_exam_zero(void);
unsigned test_exam_three(void);
unsigned test_exam_full(void);
unsigned exam(int n, ...);

int test_exam_three() {
	unsigned temp = exam(3, 198, 161, 214);
	//printf("%u\n", temp);
	if (temp == 18) {
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}

int test_exam_zero() {
	return exam(0)==0;
}

int test_Nine_Params() {
	return exam(9,0,0,0,0,0,0,0,0,1)==65536;
}

int test_exam_full() {
	return exam(18,65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 0)==0xFFFFFFFF;
}


unsigned exam(int n, ...) {

	unsigned tempNumn = 0;

	va_list argptr;

	va_start(argptr, n);

	unsigned finalEncodeNum = 0;

	unsigned bitMulti = 1;
	if (n < 16) {
		for (unsigned i = 0; i < n; i++) {
			tempNumn = va_arg(argptr, unsigned short);

			if (tempNumn & bitMulti) {
				finalEncodeNum += bitMulti;
			}
			bitMulti *= 2;
			if (tempNumn & bitMulti) {
				finalEncodeNum += bitMulti;
			}
			bitMulti *= 2;

			//printf("\n%u", finalEncodeNum);
		}
	}
	else {
		for (unsigned i = 0; i < 16; i++) {
			tempNumn = va_arg(argptr, unsigned short);

			if (tempNumn & bitMulti) {
				finalEncodeNum += bitMulti;
			}
			bitMulti *= 2;
			if (tempNumn & bitMulti) {
				finalEncodeNum += bitMulti;
			}
			bitMulti *= 2;

			//printf("\n%u", finalEncodeNum);
		}
	}
	va_end(argptr);
	return finalEncodeNum;
}

int test_exam_one() {
	int encode = 0;
	encode = encodeMinutia(1, 1, 1, 1);
	printf("%d \n", encode);
	if (encode == 537920513) {
		return 1;
	}
	else {
		return 0;
	}
}

int encodeMinutia(int x, int y, int d, int t) {
	int finalEncodeNum = 0;
	int bitMulti = 1;
	int bitMultiX = 1;
	int bitMultiY = 1;
	int bitMultiD = 1;
	int bitMultiT = 1;
	for (int i = 0; i < 10; i++) {
		if (x & bitMultiX) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiX *= 2;
	}
	for (int i = 0; i < 10; i++) {
		if (y & bitMultiY) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiY *= 2;
	}
	for (int i = 0; i < 9; i++) {
		if (d & bitMultiD) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiD *= 2;
	}
	for (int i = 0; i < 2; i++) {
		if (t & bitMultiT) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiT *= 2;
	}
	return finalEncodeNum;
}


int main(void) {

	//return exam(5, 198, 161, 214, 123, 850);
	//printf("%u", exam);
	printf("test exam with zero arguments: %d\n", test_exam_zero());
	printf("test exam with three arguments: %d\n", test_exam_three());
	printf("test exam with full arguments: %d\n", test_exam_full());
	printf("test exam with nine parameters: %d\n", test_Nine_Params());


	printf("test exam : %d\n", test_exam_one());

	return 1;
}*/