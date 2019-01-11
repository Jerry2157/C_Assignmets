/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

int SwapAndNegate(Point2D firstRectangle) {
	
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (firstRectangle.Xtopleft > 0 && firstRectangle.Ytopleft > 0) {
		return 1;
	}
	else if (firstRectangle.Xtopleft < 0 && firstRectangle.Ytopleft > 0) {
		return 2;
	}
	else if (firstRectangle.Xtopleft < 0 && firstRectangle.Ytopleft < 0) {
		return 3;
	}
	else if(firstRectangle.Xtopleft > 0 && firstRectangle.Ytopleft < 0) {
		return 4;
	}
	else {
		return 0;
	}

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

	int result = SwapAndNegate(firstRectangle);
	printf("\n%d", result);

}*/