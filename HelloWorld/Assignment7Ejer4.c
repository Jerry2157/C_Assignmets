/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int anchura;
	int altura;

}Rectangle;

RectangleContainsPoint(Rectangle firstRectangle, int x, int y) {
	
	int resultRectangle = 0;
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (x >= firstRectangle.Xtopleft && x <= (firstRectangle.Xtopleft + firstRectangle.anchura) && y >= firstRectangle.Ytopleft && y <= (firstRectangle.Ytopleft + firstRectangle.altura)) {
		resultRectangle = 1;
	}

	printf("\n%d", resultRectangle);

	
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


	Rectangle firstRectangle = {
		Xtopleft,
		Ytopleft,
		Anchura,
		Altura
	};
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	


	RectangleContainsPoint(firstRectangle, Xtopleft, Ytopleft);
	//printf("\n%d", resultRectangle);
}*/