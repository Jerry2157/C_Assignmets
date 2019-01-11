/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int numerador;
	int denominador;
}Fraction;

Fraction*  simplifyFraction(const Fraction* const unsimplifiedFraction) {
	Fraction* simplifiedFraction = malloc(sizeof(Fraction));
	//printf("\n%d", unsimplifiedFraction.numerador);
	//printf("%d", unsimplifiedFraction.denominador);
	//Fraction convertedFraction;
	int tempA = unsimplifiedFraction->numerador;
	int tempB = unsimplifiedFraction->denominador;
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


	(*simplifiedFraction).numerador = tempA;
	(*simplifiedFraction).denominador = tempB;


	return simplifiedFraction;
}

int main(void) {

	int numNumerador = 0;
	scanf("%d", &numNumerador);
	int numDenominador = 0;
	scanf("%d", &numDenominador);

	Fraction* myFraction = malloc(sizeof(Fraction));
	myFraction->numerador = numNumerador;
	myFraction->denominador = numDenominador;



	

	Fraction* returnedFraction = simplifyFraction(myFraction);

	free(myFraction);

	printf("\n%d", returnedFraction->numerador);
	printf("\n%d", returnedFraction->denominador);

	free(returnedFraction);

	return 0;
}*/