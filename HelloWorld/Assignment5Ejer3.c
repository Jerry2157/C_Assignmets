/******************************************************************************

Write a function named cmp_bits that accepts two int arguments a and b, and compares the
number of "on" bits (number of 1s) between them. Return -1 if the bitwise representation
of a has fewer 1s than b; return 1 if a has more 1s than b; and return zero if both have
the same number of 1s. For example, if a is 5 (binary 101) and b is 32 (binary 10000),
then cmp_bits returns 1.

*******************************************************************************/


/*#include <stdio.h>
#include <stdlib.h>


int decToBinary(int n)
{
	int counter = 0;
	//int * apNum = num;
	for (int i = 31; i >= 0; i--) {
		int k = n >> i; //crea una cadena de bits convirtiendo n a binario y recorriendolo i veces a la derecha
		//printf("\n%d", k);
		if (k & 1) {
			//printf("1");
			counter++;
			//apNum++;
		}
		else {
			//printf("0");

			//apNum++;
		}
	}
	//printf("counter i: ", counter);
	//int numInt = atoi(num);
	return counter;
}

int main(void) {

	long unsigned num1 = 0;
	scanf("%ld", &num1);
	num1 = abs(num1);

	int a = decToBinary(num1);

	long unsigned num2 = 0;
	scanf("%ld", &num2);
	num2 = abs(num2);

	int b = decToBinary(num2);
	
	if (a == b) {
		printf("0");
	}
	else if (a > b) {
		printf("1");
	}
	else {
		printf("-1");
	}

	//printf("%d", decToBinary(num2));

	//printf("%ld\n",toBinary(num));
	//printf("%ld", getOnes(toBinary(num)));	

	return 1;
}

*/