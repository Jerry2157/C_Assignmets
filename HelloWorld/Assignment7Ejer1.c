/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int numerador;
	int denominador;
}Fraction;

int simplifyFraction(Fraction unsimplifiedFraction, Fraction* simplifiedfraction) {
	//printf("\n%d", unsimplifiedFraction.numerador);
	//printf("%d", unsimplifiedFraction.denominador);
	//Fraction convertedFraction;
	int tempA = unsimplifiedFraction.numerador;
	int tempB = unsimplifiedFraction.denominador;
	for (int i = 2; i <= tempA; i++) {

		//printf("\n%d", i);
		if (tempA % i == 0 && tempB % i == 0) {
			tempA = (tempA/i);
			tempB = (tempB/i);
			//printf("\n%d", tempA);
			//printf("%d", tempB);
			i--;
		}
	}
	

	(*simplifiedfraction).numerador = tempA;
	(*simplifiedfraction).denominador = tempB;

	printf("\n%d", tempA);
	printf("\n%d", tempB);

	return 0;
}

int main(void) {

	int numNumerador = 0;
	scanf("%d", &numNumerador);
	int numDenominador = 0;
	scanf("%d", &numDenominador);

	Fraction myFraction;
	myFraction.numerador = numNumerador;
	myFraction.denominador = numDenominador;

	Fraction simplifiedFraction; 

	simplifyFraction(myFraction,&simplifiedFraction);
	

	return 0;
}*/

