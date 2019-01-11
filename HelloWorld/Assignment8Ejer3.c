/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int anchura;
	int altura;

}Rectangle;

Rectangle* IntersectRectangles(const Rectangle * const firstRectangle, const Rectangle * const secondRectangle) {
	Rectangle* resultRectangle = malloc(sizeof(Rectangle));
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (firstRectangle->Xtopleft <= secondRectangle->Xtopleft) {
		resultRectangle->Xtopleft = firstRectangle->Xtopleft;
	}
	else {
		resultRectangle->Xtopleft = secondRectangle->Xtopleft;
	}
	if (firstRectangle->Ytopleft <= secondRectangle->Ytopleft) {
		resultRectangle->Ytopleft = firstRectangle->Ytopleft;
	}
	else {
		resultRectangle->Ytopleft = secondRectangle->Ytopleft;
	}

	if ((firstRectangle->Xtopleft + firstRectangle->anchura) <= (secondRectangle->Xtopleft + secondRectangle->anchura)) {
		resultRectangle->anchura = (secondRectangle->Xtopleft + secondRectangle->anchura - firstRectangle->Xtopleft);
	}
	else {
		resultRectangle->anchura = (firstRectangle->Xtopleft + firstRectangle->anchura - secondRectangle->Xtopleft);
	}
	if ((firstRectangle->Ytopleft + firstRectangle->altura) <= (secondRectangle->Ytopleft + secondRectangle->altura)) {
		resultRectangle->altura = (secondRectangle->Ytopleft + secondRectangle->altura - firstRectangle->Ytopleft);
	}
	else {
		resultRectangle->altura = (firstRectangle->Ytopleft + firstRectangle->altura - secondRectangle->Ytopleft);
	}

	//printf("\n%d", resultRectangle->Xtopleft);
	//printf("\n%d", resultRectangle->Ytopleft);
	//printf("\n%d", resultRectangle->anchura);
	//printf("\n%d", resultRectangle->altura);

	return resultRectangle;
}


int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);
	int Anchura = 0;
	scanf("%d", &Anchura);
	int Altura = 0;
	scanf("%d", &Altura);


	Rectangle* firstRectangle = malloc(sizeof(Rectangle));
	firstRectangle->Xtopleft = Xtopleft;
	firstRectangle->Ytopleft = Ytopleft;
	firstRectangle->anchura = Anchura;
	firstRectangle->altura = Altura;

	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	scanf("%d", &Anchura);
	scanf("%d", &Altura);
	Rectangle* secondRectangle = malloc(sizeof(Rectangle));
	secondRectangle->Xtopleft = Xtopleft;
	secondRectangle->Ytopleft = Ytopleft;
	secondRectangle->anchura = Anchura;
	secondRectangle->altura = Altura;

	 

	 Rectangle* resultRectangle = IntersectRectangles(firstRectangle, secondRectangle);
	 printf("\n%d", resultRectangle->Xtopleft);
	 printf("\n%d", resultRectangle->Ytopleft);
	 printf("\n%d", resultRectangle->anchura);
	 printf("\n%d", resultRectangle->altura);
	 free(firstRectangle);
	 free(secondRectangle);
	 free(resultRectangle);

}*/