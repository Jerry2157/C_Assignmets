/******************************************************************************

Create a function multipleSwaps(N,a,b) which swaps bits from N starting at index
a and ending at b. For example, multiple swapping 10011010 from 4 to 0 will return
10001011, i. e. the bit at position 4 swaps with the bit at position 0, the bit at
position 3 swaps with the bit at position 1, and the bit at position 2 remains intact.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>



unsigned ChangeBits(unsigned num, unsigned a, unsigned b) {
	unsigned changedNumber = num;
	unsigned bitMulti = 1;
	unsigned tempA = a;
	unsigned tempB = b;

	unsigned tempAnumber;
	unsigned tempBnumber;
	unsigned tempAbitMulti = 1;
	unsigned tempBbitMulti = 1;

	while ((b-a)>2){
		
		for (int i = 0; i < a; i++) {
			tempAbitMulti *= 2;
		}
		for (int i = 0; i < b; i++) {
			tempBbitMulti *= 2;
		}
		if (num & tempAbitMulti) {
			changedNumber += tempBbitMulti;
		}
		else {
			changedNumber -= tempBbitMulti;
		}
		if (num & tempBbitMulti) {
			changedNumber += tempAbitMulti;
		}
		else {
			changedNumber -= tempAbitMulti;
		}
		a += 1;
		b -= 1;
	}
	if ((b-a)==1) {
		for (int i = 0; i < a; i++) {
			tempAbitMulti *= 2;
		}
		for (int i = 0; i < b; i++) {
			tempBbitMulti *= 2;
		}
		if (num & tempAbitMulti) {
			changedNumber += tempBbitMulti;
		}
		else {
			changedNumber -= tempBbitMulti;
		}
		if (num & tempBbitMulti) {
			changedNumber += tempAbitMulti;
		}
		else {
			changedNumber -= tempAbitMulti;
		}
		a += 1;
		b -= 1;
	}
	
	return changedNumber;
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

	
	n = ChangeBits(n, x,y);

	printf("%u", n);

	return 0;
}*/