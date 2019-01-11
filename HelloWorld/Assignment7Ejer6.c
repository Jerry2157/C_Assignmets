/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

double ComputeSlope(Point2D firstRectangle, Point2D secondRectangle) {
	double tempSlopeA = 0;
	tempSlopeA = (((double)secondRectangle.Ytopleft - (double)firstRectangle.Ytopleft) / ((double)secondRectangle.Xtopleft - (double)firstRectangle.Xtopleft));
	return tempSlopeA;
}




int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);
	int Anchura = 0;



	Point2D firstRectangle = {
		Xtopleft,
		Ytopleft,

	};
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D secondRectangle = {
		Xtopleft,
		Ytopleft
	};



	//int resultRectangle = AreCollinear(firstRectangle, secondRectangle, thirdRectangle);
	
	double resultSlope = ComputeSlope(firstRectangle, secondRectangle);
	printf("\n%.1f", resultSlope);

}*/