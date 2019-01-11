/******************************************************************************

Create a program that shifts bits to the right in a circular fashion.
This is, the less significant bit will be now the most significant bit;
while the most significant bit moves to the second most significant place.
For example, the result of circularRightShift(10,28) will result 160.
Assume that the number to be shifted has 32 bits.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>

int invert(int x, int n)
{


	int counter = 0;

	int bitMulti = 1;

	//int * apNum = num;
	for (int i = 0; i <= 31; i++) {
		int k = x >> (i + n); //crea una cadena de bits convirtiendo n a binario y recorriendolo i veces a la derecha
		//printf("\n%d", k);


		if (k & 1) {
			//printf("1");
			counter = counter + (1 * bitMulti);


		}
		else {
			//printf("0");

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



	long unsigned n = 0;
	scanf("%ld", &n);
	n = abs(n);


	int temp = x;
	printf("%d", invert(x, n));
	//printf("%ld\n",toBinary(num));
	//printf("%ld", getOnes(toBinary(num)));	
	return 1;
}*/