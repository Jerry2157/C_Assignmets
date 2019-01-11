/*#pragma once

typedef enum {
	Ending,
	Bifurcation,
	Unknown
}MinutiaType;

typedef struct
{
	unsigned short x;
	unsigned short y;
	float angle;
	MinutiaType type;

}Minutia;

typedef struct {
	unsigned short length;
	Minutia* minutiae;
}MinutiaArray;

Minutia* createMinutia(unsigned short x, unsigned short y, float angle, MinutiaType type);
MinutiaArray* createMinutaArray(const unsigned short numElements);
void releaseMinuteArray(MinutiaArray* structToFree);
Minutia* findCentroid(const MinutiaArray * const minuteArray, double(*computeDistancePassed)(Minutia* aPtr, Minutia* bPtr));
double computeDistance(const Minutia* const aMinutiaPtr, const Minutia* const bMinutiaPtr);
int testFindCentroid();
*/