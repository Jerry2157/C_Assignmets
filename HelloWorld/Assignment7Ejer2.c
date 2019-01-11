/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int anchura;
	int altura;

}Rectangle;

void IntersectRectangles(Rectangle firstRectangle, Rectangle secondRectangle, Rectangle* resultRectangle) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	for (int i = firstRectangle.Xtopleft; i < (firstRectangle.Xtopleft + firstRectangle.anchura); i++) {
		if (i >= secondRectangle.Xtopleft) {
			resultRectangle->Xtopleft = i;
			i = 1000;
		}
	}
	for (int i = firstRectangle.Ytopleft; i < (firstRectangle.Ytopleft + firstRectangle.altura); i++) {
		if (i >= secondRectangle.Ytopleft) {
			resultRectangle->Ytopleft = i;
			i = 1000;
		}
	}
	for (int i = resultRectangle->Xtopleft; i <= (secondRectangle.Xtopleft + secondRectangle.anchura); i++) {
		if (i <= (firstRectangle.Xtopleft + firstRectangle.anchura)) {
			resultRectangle->anchura = (i - resultRectangle->Xtopleft);
			
		}
	}
	for (int i = resultRectangle->Ytopleft; i <= (secondRectangle.Ytopleft + secondRectangle.altura); i++) {
		if (i <= (firstRectangle.Ytopleft + firstRectangle.altura)) {
			resultRectangle->altura = (i - resultRectangle->Ytopleft);
			
		}
	}

	printf("\n%d", resultRectangle->Xtopleft);
	printf("\n%d", resultRectangle->Ytopleft);
	printf("\n%d", resultRectangle->anchura);
	printf("\n%d", resultRectangle->altura);

	//return resultRectangle;
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

	IntersectRectangles(firstRectangle, secondRectangle,&resultRectangle);
	/*printf("\n%d", resultRectangle.Xtopleft);
	printf("\n%d", resultRectangle.Ytopleft);
	printf("\n%d", resultRectangle.anchura);
	printf("\n%d", resultRectangle.altura);

}*/