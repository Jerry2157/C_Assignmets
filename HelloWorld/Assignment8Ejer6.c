/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

double ComputeSlope(const Point2D * const firstRectangle, const Point2D * const  secondRectangle) {
	double tempSlopeA = 0;
	tempSlopeA = (((double)secondRectangle->Ytopleft - (double)firstRectangle->Ytopleft) / ((double)secondRectangle->Xtopleft - (double)firstRectangle->Xtopleft));
	return tempSlopeA;
}




int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);
	int Anchura = 0;



	Point2D* firstRectangle = malloc(sizeof(Point2D));
	firstRectangle->Xtopleft = Xtopleft;
	firstRectangle->Ytopleft = Ytopleft;

	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* secondRectangle = malloc(sizeof(Point2D));
	secondRectangle->Xtopleft = Xtopleft;
	secondRectangle->Ytopleft = Ytopleft;



	//int resultRectangle = AreCollinear(firstRectangle, secondRectangle, thirdRectangle);

	double resultSlope = ComputeSlope(firstRectangle, secondRectangle);
	free(firstRectangle);
	free(secondRectangle);
	printf("\n%.1f", resultSlope);

}*/