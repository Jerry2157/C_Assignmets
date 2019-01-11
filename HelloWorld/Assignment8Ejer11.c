/*#include <stdio.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;

}Point2D;

int Quadrant(const Point2D * const firstRectangle, const Point2D * const  secondRectangle, const Point2D * const  thirdRectangle, const Point2D * const  fourRectangle, const Point2D * const  testRectangle) {
	
	int Xmin = firstRectangle->Xtopleft;
	int Ymin = firstRectangle->Ytopleft;
	int Xmax = firstRectangle->Xtopleft;
	int Ymax = firstRectangle->Ytopleft;
	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);
	if (secondRectangle->Xtopleft < Xmin) {
		Xmin = secondRectangle->Xtopleft;
	}
	else {

	}
	if (thirdRectangle->Xtopleft < Xmin) {
		Xmin = thirdRectangle->Xtopleft;
	}
	else {

	}
	if (fourRectangle->Xtopleft < Xmin) {
		Xmin = fourRectangle->Xtopleft;
	}
	else {

	}


	if (secondRectangle->Xtopleft > Xmax) {
		Xmax = secondRectangle->Xtopleft;
	}
	else {

	}
	if (thirdRectangle->Xtopleft > Xmax) {
		Xmax = thirdRectangle->Xtopleft;
	}
	else {

	}
	if (fourRectangle->Xtopleft > Xmax) {
		Xmax = fourRectangle->Xtopleft;
	}
	else {

	}

	//---------------Ytopleft------------------------

	if (secondRectangle->Ytopleft < Ymin) {
		Ymin = secondRectangle->Ytopleft;
	}
	else {

	}
	if (thirdRectangle->Ytopleft < Ymin) {
		Ymin = thirdRectangle->Ytopleft;
	}
	else {

	}
	if (fourRectangle->Ytopleft < Ymin) {
		Ymin = fourRectangle->Ytopleft;
	}
	else {

	}


	if (secondRectangle->Ytopleft > Ymax) {
		Ymax = secondRectangle->Ytopleft;
	}
	else {

	}
	if (thirdRectangle->Ytopleft > Ymax) {
		Ymax = thirdRectangle->Ytopleft;
	}
	else {

	}
	if (fourRectangle->Ytopleft > Ymax) {
		Ymax = fourRectangle->Ytopleft;
	}
	else {

	}

	if ((testRectangle->Xtopleft > Xmin && testRectangle->Xtopleft < Xmax) && (testRectangle->Ytopleft > Xmin && testRectangle->Ytopleft < Ymax)) {
		return 1;
	}


	return 0;
}


int main(void) {

	int n = 0;
	scanf("%d", &n);

	int Xtopleft = 0;
	int Ytopleft = 0;



	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* firstRectangle = malloc(sizeof(Point2D));
	firstRectangle->Xtopleft = Xtopleft;
	firstRectangle->Ytopleft = Ytopleft;

	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* secondRectangle = malloc(sizeof(Point2D));
	secondRectangle->Xtopleft = Xtopleft;
	secondRectangle->Ytopleft = Ytopleft;

	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* thirdRectangle = malloc(sizeof(Point2D));
	thirdRectangle->Xtopleft = Xtopleft;
	thirdRectangle->Ytopleft = Ytopleft;
	
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* fourRectangle = malloc(sizeof(Point2D));
	fourRectangle->Xtopleft = Xtopleft;
	fourRectangle->Ytopleft = Ytopleft;
	
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	Point2D* testRectangle = malloc(sizeof(Point2D));
	testRectangle->Xtopleft = Xtopleft;
	testRectangle->Ytopleft = Ytopleft;

	int resultRectangle = Quadrant(firstRectangle, secondRectangle, thirdRectangle,fourRectangle,testRectangle);
	
	free(firstRectangle);
	free(secondRectangle);
	free(thirdRectangle);
	free(fourRectangle);
	free(testRectangle);
	printf("\n%d", resultRectangle);

}

*/