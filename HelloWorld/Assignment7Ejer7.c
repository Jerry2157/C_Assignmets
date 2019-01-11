/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

int SwapAndNegate(Point2D firstRectangle, Point2D* resultRectangle) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	resultRectangle->Xtopleft = (firstRectangle.Ytopleft * -1);
	resultRectangle->Ytopleft = (firstRectangle.Xtopleft * -1);

	printf("\n%d", resultRectangle->Xtopleft);
	printf("\n%d", resultRectangle->Ytopleft);

	return 0;
}


int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);
	


	Point2D firstRectangle = {
		Xtopleft,
		Ytopleft
	};
	

	Point2D resultRectangle = {
		0,
		0
	};

	SwapAndNegate(firstRectangle, &resultRectangle);
	//printf("\n%d", resultRectangle.Xtopleft);
	//printf("\n%d", resultRectangle.Ytopleft);

}*/