/*#include <stdio.h>
typedef struct
{
	int numerador;
	int denominador;
}Fraction;


Fraction* simplifyFraction(const Fraction* const convertedFractionpassed) {
	//printf("%d", unsimplifiedFraction.numerador);
	//printf("%d", unsimplifiedFraction.denominador);
	//Fraction convertedFraction = *outputFraction;


	Fraction* convertedFractionLocal = malloc(sizeof(Fraction));

	int tempA = convertedFractionpassed->numerador;
	int tempB = convertedFractionpassed->denominador;
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
	//free(convertedFractionpassed);
	convertedFractionLocal->numerador = tempA;
	convertedFractionLocal->denominador = tempB;
	return convertedFractionLocal;
}

Fraction* sumFraction(const Fraction* const firstFraction, const Fraction* const  secondFraction) {
	//Fraction convertedFraction;

	Fraction* sum = malloc(sizeof(Fraction));

	(*sum).denominador = firstFraction->denominador*secondFraction->denominador;
	(*sum).numerador = firstFraction->numerador*secondFraction->denominador + secondFraction->numerador*firstFraction->denominador;
	//free(firstFraction);
	Fraction* simplifiedFractionPtr = simplifyFraction(sum);

	free(sum);

	return simplifiedFractionPtr;

}

int main(void) {

	int numNumerador = 0;
	scanf("%d", &numNumerador);
	int numDenominador = 0;
	scanf("%d", &numDenominador);

	Fraction* firstFraction = malloc(sizeof(Fraction));
	firstFraction->numerador = numNumerador;
	firstFraction->denominador = numDenominador;

	scanf("%d", &numNumerador);
	scanf("%d", &numDenominador);
	Fraction* secondFraction = malloc(sizeof(Fraction));
	secondFraction->numerador = numNumerador;
	secondFraction->denominador = numDenominador;


	//Fraction* simplifiedFraction = malloc(sizeof(Fraction));

	Fraction* simplifiedFraction = sumFraction(firstFraction, secondFraction);
	free(firstFraction);
	free(secondFraction);
	printf("\n%d", simplifiedFraction->numerador);
	printf("\n%d", simplifiedFraction->denominador);
	
	free(simplifiedFraction);

	return 0;
}

*/