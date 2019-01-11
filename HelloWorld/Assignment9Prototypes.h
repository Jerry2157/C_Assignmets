/*#pragma once

typedef enum {
	numerical,
	nominal
}FeatureType;

typedef struct
{
	double* features;
	FeatureType* featureTypes;
	int lenght;
}Instance;

const char* getFeatureType(enum FeatureType type);
double computeEuclideanDissimilarity(const Instance* const instanceA, const Instance* const instanceB);
Instance* findNearestNeighbor(const Instance* const arrayInstances, const int const length, const Instance * const query, double(*computeDissimilarity)(const Instance* const instanceA, const Instance* const instanceB));
pruebaComputeEuclideanDissimilarityOne();
pruebaComputeEuclideanDissimilarityTwo();
pruebaComputeEuclideanDissimilarityThree();
pruebaComputeEuclideanDissimilarityFour();

findNearestNeighborOne();
findNearestNeighborTwo();
findNearestNeighborThree();
findNearestNeighborFour();
*/
