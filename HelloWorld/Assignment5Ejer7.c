/******************************************************************************

Create a function that swaps bits in a given position,
for example swapBits(10, 3, 0) returns 3 because it swaps bits at position
3 and 0 in the number 1010 returning 0011.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>



unsigned ChangeBit(unsigned num, unsigned bitMultiTimes) {
	unsigned ChangeBit = num;
	int bitMulti = 1;
	for (int i = 0; i < bitMultiTimes; i++) {
		bitMulti *= 2;
	}

	if (num & bitMulti) {
		ChangeBit -= bitMulti;
	}
	else {
		ChangeBit += bitMulti;
	}

	return ChangeBit;
}

int main(void) {

	unsigned n = 0;
	scanf("%u", &n);
	n = abs(n);

	unsigned x = 0;
	scanf("%u", &x);
	x = abs(x);

	unsigned y = 0;
	scanf("%u", &y);
	y = abs(y);

	n = ChangeBit(n, x);
	//printf("%u\n", n);
	n = ChangeBit(n, y);

	printf("%u", n);

	return 0;
}*/