/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

int AreCollinear(Point2D firstRectangle, Point2D secondRectangle, Point2D thirdRectangle) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	
	double tempSlopeA = 0;
	double tempSlopeB = 0;

	tempSlopeA = (((double)secondRectangle.Ytopleft- (double)firstRectangle.Ytopleft)/((double)secondRectangle.Xtopleft- (double)firstRectangle.Xtopleft));
	tempSlopeB = (((double)thirdRectangle.Ytopleft - (double)secondRectangle.Ytopleft) / ((double)thirdRectangle.Xtopleft - (double)secondRectangle.Xtopleft));

	if ((tempSlopeA + 0.999f) > tempSlopeB && (tempSlopeB - 0.999f) < tempSlopeB) {
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
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D thirdRectangle = {
		Xtopleft,
		Ytopleft
	};

	

	int resultRectangle = AreCollinear(firstRectangle, secondRectangle, thirdRectangle);
	printf("\n%d", resultRectangle);

}*/