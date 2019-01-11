/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int anchura;
	int altura;

}Rectangle;

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

int RectangleContainsPoint(const Rectangle * const firstRectangle, const Point2D * const punto) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (punto->Xtopleft >= firstRectangle->Xtopleft && punto->Xtopleft <= (firstRectangle->Xtopleft + firstRectangle->anchura) && punto->Ytopleft >= firstRectangle->Ytopleft && punto->Ytopleft <= (firstRectangle->Ytopleft + firstRectangle->altura)) {
		return 1;
	}

	return 0;
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

	scanf("%ld", &Xtopleft);
	scanf("%ld", &Ytopleft);
	Point2D* firstPoint = malloc(sizeof(Point2D));
	firstPoint->Xtopleft = Xtopleft;
	firstPoint->Ytopleft = Ytopleft;

	int resultRectangle = RectangleContainsPoint(firstRectangle,firstPoint);
	printf("\n%d", resultRectangle);

	free(firstRectangle);
	free(firstPoint);

}*/