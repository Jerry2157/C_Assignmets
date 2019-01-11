/*#include <stdio.h>
#include <math.h>
#define SIZE 10000

typedef struct
{
	int Xtopleft;
	int Ytopleft;
	int Ztopleft;

}Point3D;

double Euclidean(const Point3D* const firstRectangle, const Point3D* const secondRectangle) {

	//printf("\n%d %d %d %d", firstRectangle.Xtopleft, firstRectangle.Ytopleft, firstRectangle.anchura, firstRectangle.altura);
	//printf("\n%d %d %d %d", secondRectangle.Xtopleft, secondRectangle.Ytopleft, secondRectangle.anchura, secondRectangle.altura);

	double temp = 0;

	double Atemp = 0;
	double Btemp = 0;
	double Ctemp = 0;

	Atemp = ((double)firstRectangle->Xtopleft - (double)secondRectangle->Xtopleft);
	Btemp = ((double)firstRectangle->Ytopleft - (double)secondRectangle->Ytopleft);
	Ctemp = ((double)firstRectangle->Ztopleft - (double)secondRectangle->Ztopleft);

	double tempSum = 0;

	tempSum = (Atemp*Atemp) + (Btemp*Btemp) + (Ctemp*Ctemp);

	temp = sqrt(tempSum);


	return temp;
}


int main(void) {

	int Xtopleft = 0;
	scanf("%d", &Xtopleft);
	int Ytopleft = 0;
	scanf("%d", &Ytopleft);
	int Ztopleft = 0;
	scanf("%d", &Ztopleft);




	Point3D* firstPoint = malloc(sizeof(Point3D));
	firstPoint->Xtopleft = Xtopleft;
	firstPoint->Ytopleft = Ytopleft;
	firstPoint->Ztopleft = Ztopleft;
	
	scanf("%d", &Xtopleft);
	scanf("%d", &Ytopleft);
	scanf("%d", &Ztopleft);

	Point3D* secondPoint = malloc(sizeof(Point3D));
	secondPoint->Xtopleft = Xtopleft;
	secondPoint->Ytopleft = Ytopleft;
	secondPoint->Ztopleft = Ztopleft;




	double resultRectangle = Euclidean(firstPoint, secondPoint);
	free(firstPoint);
	free(secondPoint);
	printf("\n%.2f", resultRectangle);

}*/