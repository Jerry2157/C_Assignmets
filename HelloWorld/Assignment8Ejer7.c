/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

void SwapAndNegate(Point2D* firstRectangle) {

	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	int a = firstRectangle->Xtopleft;
	int b = firstRectangle->Ytopleft;

	firstRectangle->Xtopleft = b;
	firstRectangle->Ytopleft = a;

	printf("\n%d", firstRectangle->Xtopleft * -1);
	printf("\n%d", firstRectangle->Ytopleft * -1);

	
}


int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);



	Point2D* firstRectangle = malloc(sizeof(Point2D));

	firstRectangle->Xtopleft = Xtopleft;
	firstRectangle->Ytopleft = Ytopleft;

	


	SwapAndNegate(firstRectangle);
	printf("\n%d", firstRectangle->Xtopleft * -1);
	printf("\n%d", firstRectangle->Ytopleft * -1);
	free(firstRectangle);


}*/