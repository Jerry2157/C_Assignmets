/*#include "Prototypes.h"
#include <stdio.h>
#include <math.h>
#define SIZE 10000




Minutia* createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type) {
	Minutia* returnMinutia = calloc(1,sizeof(Minutia));
	returnMinutia->x = x;
	returnMinutia->y = y;
	returnMinutia->angle = angle;
	returnMinutia->type = type;

	return returnMinutia;
}


MinutiaArray* createMinutaArray(const unsigned short numElements) {
	MinutiaArray* returnedMinutaArray = (MinutiaArray*)malloc(sizeof(MinutiaArray));
	returnedMinutaArray->length = numElements;
	returnedMinutaArray->minutiae = (Minutia*)calloc(numElements, sizeof(Minutia));
	return returnedMinutaArray;
}

void releaseMinuteArray(MinutiaArray* structToFree) {
	free(structToFree->minutiae);
	free(structToFree);
}

Minutia* findCentroid(const MinutiaArray * const minuteArray, double(*computeDistancePassed)(Minutia* aPtr, Minutia* bPtr)) {
	
	double minimumDistance = 0.0f;
	double tempDistance = 0.0f;

	Minutia * tempMinutia;

	for (int i = 0; i < minuteArray->length; i++) {
		//printf("\n arreglo[i]");
		for (int j = 0; j < minuteArray->length; j++) {
			if (i == j) {

			}
			else {
				tempDistance = tempDistance + (*computeDistancePassed)(&minuteArray->minutiae[i], &minuteArray->minutiae[j]);
				//printf(" , %f", tempDistance);
			}
		}
		//printf("\n%f\n", tempDistance);
		if (i == 0) {
			minimumDistance = tempDistance;
			tempMinutia = &minuteArray->minutiae[i];
			
		}
		else {
			if (tempDistance <= minimumDistance) {
				tempMinutia = &minuteArray->minutiae[i];
				minimumDistance = tempDistance;
				
			}
		}
		tempDistance = 0.0f;
	}
	//free(tempMinutia);
	return tempMinutia;
	//free(computeDistance);

}

double computeDistance(const Minutia* const aMinutiaPtr, const Minutia* const bMinutiaPtr) {

	double tempDistance = 0.0f;
	tempDistance = sqrt(((double)bMinutiaPtr->x - (double)aMinutiaPtr->x)*((double)bMinutiaPtr->x - (double)aMinutiaPtr->x) + ((double)bMinutiaPtr->y - (double)aMinutiaPtr->y)*((double)bMinutiaPtr->y - (double)aMinutiaPtr->y));

	return tempDistance;
}

int testFindCentroid() {
	int resultNumCode = 0;

	MinutiaArray* MinArray;
	MinArray = createMinutaArray(13);
	//MinArray->minutiae[0] = createMinutia(0, 3, 0.0f, Unknown);
	MinArray->minutiae[0].x = 0;
	MinArray->minutiae[0].y = 4;
	MinArray->minutiae[0].angle = 0.0f;
	MinArray->minutiae[0].type = Unknown;

	MinArray->minutiae[1].x = 1;
	MinArray->minutiae[1].y = 4;
	MinArray->minutiae[1].angle = 0.0f;
	MinArray->minutiae[1].type = Unknown;

	MinArray->minutiae[2].x = 2;
	MinArray->minutiae[2].y = 4;
	MinArray->minutiae[2].angle = 0.0f;
	MinArray->minutiae[2].type = Unknown;

	MinArray->minutiae[3].x = 2;
	MinArray->minutiae[3].y = 3;
	MinArray->minutiae[3].angle = 0.0f;
	MinArray->minutiae[3].type = Unknown;

	MinArray->minutiae[4].x = 2;
	MinArray->minutiae[4].y = 2;
	MinArray->minutiae[4].angle = 0.0f;
	MinArray->minutiae[4].type = Unknown;

	MinArray->minutiae[5].x = 2;
	MinArray->minutiae[5].y = 1;
	MinArray->minutiae[5].angle = 0.0f;
	MinArray->minutiae[5].type = Unknown;

	MinArray->minutiae[6].x = 2;
	MinArray->minutiae[6].y = 0;
	MinArray->minutiae[6].angle = 0.0f;
	MinArray->minutiae[6].type = Unknown;

	MinArray->minutiae[7].x = 1;
	MinArray->minutiae[7].y = 0;
	MinArray->minutiae[7].angle = 0.0f;
	MinArray->minutiae[7].type = Unknown;

	MinArray->minutiae[8].x = 0;
	MinArray->minutiae[8].y = 0;
	MinArray->minutiae[8].angle = 0.0f;
	MinArray->minutiae[8].type = Unknown;


	MinArray->minutiae[9].x = 0;
	MinArray->minutiae[9].y = 1;
	MinArray->minutiae[9].angle = 0.0f;
	MinArray->minutiae[9].type = Unknown;

	MinArray->minutiae[10].x = 0;
	MinArray->minutiae[10].y = 2;
	MinArray->minutiae[10].angle = 0.0f;
	MinArray->minutiae[10].type = Unknown;

	MinArray->minutiae[11].x = 0;
	MinArray->minutiae[11].y = 3;
	MinArray->minutiae[11].angle = 0.0f;
	MinArray->minutiae[11].type = Unknown;

	MinArray->minutiae[12].x = 1;
	MinArray->minutiae[12].y = 2;
	MinArray->minutiae[12].angle = 0.0f;
	MinArray->minutiae[12].type = Ending;

	Minutia* tempArray = findCentroid(MinArray, computeDistance);
	
	
	if (tempArray->x == 1 && tempArray ->y == 2 && tempArray->angle == 0.0f && tempArray->type == Ending) {
		releaseMinuteArray(MinArray);
		return 1;
	}
	
	return resultNumCode;
}

int main(void) {

	printf("\n%d", testFindCentroid());

	return 0;
}*/