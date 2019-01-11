/*#include <stdio.h>
typedef struct
{
	int numerador;
	int denominador;
}Fraction;


void simplifyFraction(Fraction* convertedFraction) {
	//printf("%d", unsimplifiedFraction.numerador);
	//printf("%d", unsimplifiedFraction.denominador);
	//Fraction convertedFraction = *outputFraction;
	int tempA = convertedFraction->numerador;
	int tempB = convertedFraction->denominador;
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

	convertedFraction->numerador = tempA;
	convertedFraction->denominador = tempB;
}

void sumFraction(Fraction firstFraction, Fraction secondFraction, Fraction* sum) {
	//Fraction convertedFraction;

	(*sum).denominador = firstFraction.denominador*secondFraction.denominador;
	(*sum).numerador = firstFraction.numerador*secondFraction.denominador + secondFraction.numerador*firstFraction.denominador;

	simplifyFraction(sum);
}

int main(void) {

	int numNumerador = 0;
	scanf("%d", &numNumerador);
	int numDenominador = 0;
	scanf("%d", &numDenominador);

	Fraction firstFraction;
	firstFraction.numerador = numNumerador;
	firstFraction.denominador = numDenominador;
		
	scanf("%d", &numNumerador);
	scanf("%d", &numDenominador);
	Fraction secondFraction;
	secondFraction.numerador = numNumerador;
	secondFraction.denominador = numDenominador;


	Fraction simplifiedFraction;

	sumFraction(firstFraction, secondFraction, &simplifiedFraction);
	printf("\n%d", simplifiedFraction.numerador);
	printf("\n%d", simplifiedFraction.denominador);

	return 0;
}

*/