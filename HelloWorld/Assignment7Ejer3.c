/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int anchura;
	int altura;

}Rectangle;

int IntersectRectangles(Rectangle firstRectangle, Rectangle secondRectangle, Rectangle* resultRectangle) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (firstRectangle.Xtopleft <= secondRectangle.Xtopleft) {
		resultRectangle->Xtopleft = firstRectangle.Xtopleft;
	}
	else {
		resultRectangle->Xtopleft = secondRectangle.Xtopleft;
	}
	if (firstRectangle.Ytopleft <= secondRectangle.Ytopleft) {
		resultRectangle->Ytopleft = firstRectangle.Ytopleft;
	}
	else {
		resultRectangle->Ytopleft = secondRectangle.Ytopleft;
	}

	if ((firstRectangle.Xtopleft+firstRectangle.anchura) <= (secondRectangle.Xtopleft+secondRectangle.anchura)) {
		resultRectangle->anchura = (secondRectangle.Xtopleft + secondRectangle.anchura-firstRectangle.Xtopleft);
	}
	else {
		resultRectangle->anchura = (firstRectangle.Xtopleft + firstRectangle.anchura-secondRectangle.Xtopleft);
	}
	if ((firstRectangle.Ytopleft + firstRectangle.altura) <= (secondRectangle.Ytopleft + secondRectangle.altura)) {
		resultRectangle->altura = (secondRectangle.Ytopleft + secondRectangle.altura-firstRectangle.Ytopleft);
	}
	else {
		resultRectangle->altura = (firstRectangle.Ytopleft + firstRectangle.altura-secondRectangle.Ytopleft);
	}

	printf("\n%d", resultRectangle->Xtopleft);
	printf("\n%d", resultRectangle->Ytopleft);
	printf("\n%d", resultRectangle->anchura);
	printf("\n%d", resultRectangle->altura);

	return 0;
}


int main(void) {

	int Xtopleft = 0;
	scanf("%ld", &Xtopleft);
	int Ytopleft = 0;
	scanf("%ld", &Ytopleft);
	int Anchura = 0;
	scanf("%ld", &Anchura);
	int Altura = 0;
	scanf("%ld", &Altura);


	Rectangle firstRectangle = {
		Xtopleft,
		Ytopleft,
		Anchura,
		Altura
	};
	scanf("%ld", &Xtopleft);
	scanf("%ld", &Ytopleft);
	scanf("%ld", &Anchura);
	scanf("%ld", &Altura);
	Rectangle secondRectangle = {
		Xtopleft,
		Ytopleft,
		Anchura,
		Altura
	};

	Rectangle resultRectangle = {
		0,
		0,
		0,
		0
	};

	IntersectRectangles(firstRectangle, secondRectangle, &resultRectangle);
	

}*/