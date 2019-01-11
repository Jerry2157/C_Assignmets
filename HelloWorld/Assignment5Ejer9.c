/******************************************************************************

Implement a program in C with a function named fourIntOne that has four parameters
(a, b, c, d) which are unsigned integers of 8 bits. The function returns an unsigned
integer of 32 bits which is the result of concatenating the four parameters a, b, c,
and d, as follows: the bits 0 to 7 contain a, the bits 8 to 15 contain b, the bits 16
to 23 contain c, and the bits 24 to 31 contain d.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>



unsigned ChangeBits(unsigned a, unsigned b, unsigned c, unsigned d) {
	unsigned changedNumber = 0;
	unsigned bitMulti = 1;
	unsigned bitMultiLocal = 1;
	for (int i = 0; i < 8; i++) {
		if (a & bitMultiLocal) {
			changedNumber += bitMulti;
		}
		else {

		}
		bitMulti *= 2;
		bitMultiLocal *= 2;
	}
	bitMultiLocal = 1;
	for (int i = 8; i < 16; i++) {
		if (b & bitMultiLocal) {
			changedNumber += bitMulti;
		}
		else {

		}
		bitMulti *= 2;
		bitMultiLocal *= 2;
	}
	bitMultiLocal = 1;
	for (int i = 16; i < 24; i++) {
		if (c & bitMultiLocal) {
			changedNumber += bitMulti;
		}
		else {

		}
		bitMulti *= 2;
		bitMultiLocal *= 2;
	}
	bitMultiLocal = 1;
	for (int i = 24; i < 33; i++) {
		if (d & bitMultiLocal) {
			changedNumber += bitMulti;
		}
		else {

		}
		bitMulti *= 2;
		bitMultiLocal *= 2;
	}
	return changedNumber;
}

int main(void) {

	unsigned a = 0;
	scanf("%u", &a);
	a = abs(a);

	unsigned b = 0;
	scanf("%u", &b);
	b = abs(b);

	unsigned c = 0;
	scanf("%u", &c);
	c = abs(c);

	unsigned d = 0;
	scanf("%u", &d);
	d = abs(d);

	unsigned result = 0;

	result = ChangeBits(a,b,c,d);

	printf("%u", result);

	return 0;
}*/