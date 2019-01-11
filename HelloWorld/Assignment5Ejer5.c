/******************************************************************************

Create a program that shifts bits to the left in a circular fashion. This is,
the most significant bit will be now the less significant bit; while the less
significant bit moves to the second less significant place. For example, the
result of circularLeftShift(160,28) will result 10. Assume that the number to
be shifted has 32 bits.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>



unsigned ShiftNumber(unsigned num) {
	unsigned shiftedNumber = 0;
	unsigned n = num;
	unsigned bitMulti = 1;
	unsigned tempBitMulti = 0;
	for (unsigned i = 0; i < 32; i++) {
		//printf("bitmult: %lu\n", bitMulti);
		if (i != 31) {
			if (num & bitMulti) {
				tempBitMulti = bitMulti * 2;
				shiftedNumber += tempBitMulti;
				//printf("1\n");
			}
			else {
				//printf("0\n");
			}
		}
		else {
			if (num & bitMulti) {
				shiftedNumber += 1;
			}
			else {

			}
		}
		
		//printf("shiftedNumber: %lu\n", shiftedNumber);
		bitMulti *= 2;
	}

	return shiftedNumber;
}

unsigned repeater(unsigned x, unsigned n) {
	//printf("\n");
	unsigned numberShifted = x;
	for (unsigned i = 0; i < n; i++) {
		numberShifted = ShiftNumber(numberShifted);
	}

	return numberShifted;
}

int main(void) {

	unsigned x = 0;
	scanf("%u", &x);
	x = abs(x);



	unsigned n = 0;
	scanf("%u", &n);
	n = abs(n);

	printf("%u", repeater(x, n));

	return 0;
}*/