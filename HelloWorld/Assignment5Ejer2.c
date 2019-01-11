/******************************************************************************

Create a complete program with a function that counts how many bits are 1 given some int value.

*******************************************************************************/

/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

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

	long unsigned num = 0;
	scanf("%ld", &num);
	num = abs(num);
	
	int temp = num;
	
	printf("%d", decToBinary(num));

	//printf("%ld\n",toBinary(num));
	//printf("%ld", getOnes(toBinary(num)));	

	return 1;
}*/