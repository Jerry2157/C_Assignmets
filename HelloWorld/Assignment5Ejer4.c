/******************************************************************************

Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted
(i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
Take into account that p=0 represent the less significant bit.

*******************************************************************************/

/*#include <stdio.h>
#include <stdlib.h>

int invert(int x, int p, int n)
{


	int counter = 0;

	int bitMulti = 1;

	//int * apNum = num;
	for (int i = 0; i <= 31; i++) {
		int k = x >> i; //crea una cadena de bits convirtiendo n a binario y recorriendolo i veces a la derecha
		//printf("\n%d", k);

		int inRangeNum = 0;
		for (int j = p; j < (p + n); j++) {
			if (i == j) {
				inRangeNum = 1;
			}
		}
		if (k & 1) {
			//printf("1");
			if (inRangeNum == 1) {
				//printf("0");
			}
			else {
				//printf("1");
				counter = counter + (1*bitMulti);
			}
			//counter++;
			
		}
		else {
			//printf("0");
			if (inRangeNum == 1) {
				//printf("1");
				counter = counter + (1 * bitMulti);
			}
			else {
				//printf("0");
			}
		}
		//printf("\n%d", counter);
		bitMulti = bitMulti * 2;
		
	}
	//printf("counter i: ", counter);
	//int numInt = atoi(num);
	//printf("\n");
	return counter;

}

int main(void) {

	long unsigned x = 0;
	scanf("%ld", &x);
	x = abs(x);

	long unsigned p = 0;
	scanf("%ld", &p);
	p = abs(p);

	long unsigned n = 0;
	scanf("%ld", &n);
	n = abs(n);


	int temp = x;
	printf("%d", invert(x,p,n));
	//printf("%ld\n",toBinary(num));
	//printf("%ld", getOnes(toBinary(num)));	
	return 1;
}


*/