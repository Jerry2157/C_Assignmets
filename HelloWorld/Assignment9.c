/*#include "Assignment9Prototypes.h"
#include <stdio.h>
#include <math.h>





const char* getFeatureType(enum FeatureType type)
{
	switch (type)
	{
	case numerical: return "numerical";
	case nominal: return "nominal";
		
	}
}

double computeEuclideanDissimilarity(const Instance* const instanceA, const Instance* const instanceB) {

	if (instanceA->lenght == 0 || instanceB->lenght == 0) { // alguna de las instancias tiene length 0
		return -1.0f;
	}
	else if (instanceA->lenght != instanceB->lenght) {		// alguna de las instancias tiene distinto length
		return -2.0f;
	}
	else {
		for (int i = 0; i < instanceA->lenght; i++) {
			//printf("instanceA feature Types: %s\n", getFeatureType(instanceA->featureTypes[i]));
			//printf("instanceB feature Types: %s\n", getFeatureType(instanceB->featureTypes[i]));
			if (instanceA->featureTypes[i] == instanceB->featureTypes[i]) {

			}
			else {
				return -3.0f; // alguna de las instancias tiene diferente featureType en el mismo index que la segunda instancia
			}
		}
	}

	double finalResult = 0;
	double tempDiferencesSum = 0;
	for (int i = 0; i < instanceA->lenght; i++) {
		if (instanceA->featureTypes[i] == numerical) {
			tempDiferencesSum += ((instanceA->features[i]- instanceB->features[i])*(instanceA->features[i] - instanceB->features[i]));
		}
		else {
			if (instanceA->features[i] == instanceB->features[i]) {
				tempDiferencesSum += 0;
			}
			else {
				tempDiferencesSum += 1;
			}
		}
	}
	finalResult = sqrt(tempDiferencesSum);

	return finalResult;
}

Instance* findNearestNeighbor(const Instance* const arrayInstances, const int const length, const Instance * const query, double (*computeDissimilarity)(const Instance* const instanceA, const Instance* const instanceB)) {

	if (query->lenght == 0)
		return -1;

	for (int i = 0; i < length; i++) {
		if (arrayInstances[i].lenght == 0) {
			//printf("%d \n", arrayInstances[i].lenght);
			//printf("entro aqui ");
			return -1;
		}
		else if (arrayInstances[i].lenght != query->lenght) {
			//printf("%d \n", arrayInstances[i]->lenght);
			//printf("entro aqui ");
			return -2;
		}
		else {
			for (int j = 0; j < arrayInstances[i].lenght; j++) {
				if (query->featureTypes[j] != arrayInstances[i].featureTypes[j]) {
					return -3;
				}
			}
		}
	}
	

	Instance* minInstance = &arrayInstances[0];
	//printf("%d \n",minInstance->lenght);

	double minValue = (*computeDissimilarity)(&arrayInstances[0], query);
	//printf("%f \n", minValue);
	double tempValue = 0.0f;

	for (int i = 1; i < length; i++) {
		tempValue = (*computeDissimilarity)(&arrayInstances[i], query);
		//printf("%f \n", minValue);
		if (tempValue < minValue) {
			minValue = tempValue;
			minInstance = &arrayInstances[i];
		}
	}
	return minInstance;
}

int main() {
	puts("Assignment 9");

	printf("%d\n",pruebaComputeEuclideanDissimilarityOne());
	printf("%d\n",pruebaComputeEuclideanDissimilarityTwo());
	printf("%d\n",pruebaComputeEuclideanDissimilarityThree());
	printf("%d\n",pruebaComputeEuclideanDissimilarityFour());
	
	printf("\n");

	printf("%d\n", findNearestNeighborOne());
	printf("%d\n", findNearestNeighborTwo());
	printf("%d\n", findNearestNeighborThree());
	printf("%d\n", findNearestNeighborFour());

	//getchar();

	return 1;
}

int pruebaComputeEuclideanDissimilarityOne() {

	Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(sizeof(double));
	FeatureType* featureTypesA = malloc(sizeof(featureTypesA));
	InstanceA->features = featuresA;
	InstanceA->featureTypes = featureTypesA;
	InstanceA->lenght = 0;

	Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(sizeof(double));
	FeatureType* featureTypesB = malloc(sizeof(featureTypesB));
	InstanceB->features = featuresB;
	InstanceB->featureTypes = featureTypesA;
	InstanceB->lenght = 0;

	//printf("test1: %f\n", computeEuclideanDissimilarity(InstanceA, InstanceB));
	if (computeEuclideanDissimilarity(InstanceA,InstanceB) == -1.0f) {
		free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		return 1;
	}
	free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	return 0;
}
int pruebaComputeEuclideanDissimilarityTwo() {

	Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(sizeof(double));
	FeatureType* featureTypesA = malloc(sizeof(featureTypesA));
	InstanceA->features = featuresA;
	InstanceA->featureTypes = featureTypesA;
	InstanceA->lenght = 10;

	Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(sizeof(double));
	FeatureType* featureTypesB = malloc(sizeof(featureTypesB));
	InstanceB->features = featuresB;
	InstanceB->featureTypes = featureTypesA;
	InstanceB->lenght = 5;

	//printf("test2: %f\n", computeEuclideanDissimilarity(InstanceA, InstanceB));
	if (computeEuclideanDissimilarity(InstanceA, InstanceB) == -2.0f) {
		free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		return 1;
	}
	free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	return 0;
}
int pruebaComputeEuclideanDissimilarityThree() {

	Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(sizeof(double));
	featuresA[0] = 1.0f;
	FeatureType* featureTypesA = malloc(sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	InstanceA->features = featuresA;
	InstanceA->featureTypes = featureTypesA;
	InstanceA->lenght = 1;

	Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(sizeof(double));
	featuresB[0] = 1.0f;
	FeatureType* featureTypesB = malloc(sizeof(featureTypesB));
	featureTypesB[0] = nominal;
	InstanceB->features = featuresB;
	InstanceB->featureTypes = featureTypesB;
	InstanceB->lenght = 1;

	//printf("test3 %f\n", computeEuclideanDissimilarity(InstanceA, InstanceB));
	if (computeEuclideanDissimilarity(InstanceA, InstanceB) == -3.0f) {
		free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		return 1;
	}
	free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	return 0;
}
int pruebaComputeEuclideanDissimilarityFour() {

	Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(4 * sizeof(double));
	featuresA[0] = 1.0f;
	featuresA[1] = 2.0f;
	featuresA[2] = 3.0f;
	featuresA[3] = 4.0f;
	FeatureType* featureTypesA = malloc(4*sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	featureTypesA[1] = numerical;
	featureTypesA[2] = nominal;
	featureTypesA[3] = nominal;
	InstanceA->features = featuresA;
	InstanceA->featureTypes = featureTypesA;
	InstanceA->lenght = 4;

	Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(4*sizeof(double));
	featuresB[0] = 1.0f;
	featuresB[1] = 2.0f;
	featuresB[2] = 3.0f;
	featuresB[3] = 4.0f;
	FeatureType* featureTypesB = malloc(4*sizeof(featureTypesB));
	featureTypesB[0] = numerical;
	featureTypesB[1] = numerical;
	featureTypesB[2] = nominal;
	featureTypesB[3] = nominal;
	InstanceB->features = featuresB;
	InstanceB->featureTypes = featureTypesA;
	InstanceB->lenght = 4;

	//printf("test4 %f\n", computeEuclideanDissimilarity(InstanceA, InstanceB));
	if (computeEuclideanDissimilarity(InstanceA, InstanceB) == 0) {
		free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		return 1;
	}
	free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	return 0;
}

int findNearestNeighborOne() {
	Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(4 * sizeof(double));
	featuresA[0] = 1.0f;
	featuresA[1] = 2.0f;
	featuresA[2] = 3.0f;
	featuresA[3] = 4.0f;
	FeatureType* featureTypesA = malloc(4 * sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	featureTypesA[1] = numerical;
	featureTypesA[2] = nominal;
	featureTypesA[3] = nominal;
	InstanceA->features = featuresA;
	InstanceA->featureTypes = featureTypesA;
	InstanceA->lenght = 0;

	Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(sizeof(double));
	featuresB[0] = 1.0f;
	FeatureType* featureTypesB = malloc(sizeof(featureTypesB));
	featureTypesB[0] = numerical;
	InstanceB->features = featuresB;
	InstanceB->featureTypes = featureTypesA;
	InstanceB->lenght = 0;


	if (findNearestNeighbor(InstanceA, 0,InstanceB, computeEuclideanDissimilarity) == -1) {
		free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		return 1;
	}
	free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	return 0;

}

int findNearestNeighborTwo() {
	Instance* InstanceArray = (Instance*)malloc(2 * sizeof(Instance));

	//Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(4 * sizeof(double));
	featuresA[0] = 1.0f;
	featuresA[1] = 2.0f;
	featuresA[2] = 3.0f;
	featuresA[3] = 4.0f;
	FeatureType* featureTypesA = malloc(4 * sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	featureTypesA[1] = numerical;
	featureTypesA[2] = nominal;
	featureTypesA[3] = nominal;
	InstanceArray[0].features = featuresA;
	InstanceArray[0].featureTypes = featureTypesA;
	InstanceArray[0].lenght = 4;

	//Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(3 * sizeof(double));
	featuresB[0] = 1.0f;
	featuresB[1] = 2.0f;
	featuresB[2] = 3.0f;
	FeatureType* featureTypesB = malloc(3 * sizeof(featureTypesB));
	featureTypesB[0] = numerical;
	featureTypesB[1] = numerical;
	featureTypesB[2] = nominal;
	InstanceArray[1].features = featuresB;
	InstanceArray[1].featureTypes = featureTypesB;
	InstanceArray[1].lenght = 4;



	//------------------Instance Query
	Instance* InstanceQuery = malloc(sizeof(Instance));
	double* featuresQuery = malloc(sizeof(double));
	featuresQuery[0] = 1.0f;
	FeatureType* featureTypesQuery = malloc(sizeof(featureTypesQuery));
	featureTypesQuery[0] = numerical;
	InstanceQuery->features = featuresQuery;
	InstanceQuery->featureTypes = featureTypesQuery;
	InstanceQuery->lenght = 1;




	if (findNearestNeighbor(InstanceArray, 2, InstanceQuery, computeEuclideanDissimilarity) == -2) {
		free(InstanceArray);
		//free(InstanceA);
		free(featuresA);
		free(featureTypesA);
		//free(InstanceB);
		free(featuresB);
		free(featureTypesB);
		free(InstanceQuery);
		free(featuresQuery);
		free(featureTypesQuery);
		return 1;
	}
	free(InstanceArray);
	//free(InstanceA);
	free(featuresA);
	free(featureTypesA);
	//free(InstanceB);
	free(featuresB);
	free(featureTypesB);
	free(InstanceQuery);
	free(featuresQuery);
	free(featureTypesQuery);
	return 0;

}

int findNearestNeighborThree() {
	Instance* InstanceArray = (Instance*)malloc(2 * sizeof(Instance));
	

	//Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(4 * sizeof(double));
	featuresA[0] = 1.0f;
	featuresA[1] = 2.0f;
	featuresA[2] = 3.0f;
	featuresA[3] = 4.0f;
	FeatureType* featureTypesA = malloc(4 * sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	featureTypesA[1] = numerical;
	featureTypesA[2] = nominal;
	featureTypesA[3] = nominal;
	
	InstanceArray[0].features = featuresA;
	InstanceArray[0].featureTypes = featureTypesA;
	InstanceArray[0].lenght = 4;

	//InstanceA->features = featuresA;
	//InstanceA->featureTypes = featureTypesA;
	//InstanceA->lenght = 4;

	//Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(4 * sizeof(double));
	featuresB[0] = 1.0f;
	featuresB[1] = 2.0f;
	featuresB[2] = 3.0f;
	featuresB[3] = 4.0f;
	FeatureType* featureTypesB = malloc(3 * sizeof(featureTypesB));
	featureTypesB[0] = numerical;
	featureTypesB[1] = numerical;
	featureTypesB[2] = nominal;
	featureTypesB[3] = nominal;

	InstanceArray[1].features = featuresB;
	InstanceArray[1].featureTypes = featureTypesB;
	InstanceArray[1].lenght = 4;

	//InstanceB->features = featuresB;
	//InstanceB->featureTypes = featureTypesB;
	//InstanceB->lenght = 4;

	//InstanceArray[0] = *InstanceA;
	//InstanceArray[1] = *InstanceB;

	//------------------Instance Query
	Instance* InstanceQuery = malloc(sizeof(Instance));
	double* featuresQuery = malloc(4*sizeof(double));
	featuresQuery[0] = 1.0f;
	featuresQuery[1] = 2.0f;
	featuresQuery[2] = 3.0f;
	featuresQuery[3] = 4.0f;
	FeatureType* featureTypesQuery = malloc(sizeof(featureTypesQuery));
	featureTypesQuery[0] = nominal;
	featureTypesQuery[1] = numerical;
	featureTypesQuery[2] = nominal;
	featureTypesQuery[3] = nominal;
	InstanceQuery->features = featuresQuery;
	InstanceQuery->featureTypes = featureTypesQuery;
	InstanceQuery->lenght = 4;

	//printf("%d \n", findNearestNeighbor(InstanceArray, 2, InstanceQuery, computeEuclideanDissimilarity));

	if (findNearestNeighbor(InstanceArray, 2, InstanceQuery, computeEuclideanDissimilarity) == -3) {
		
		free(featuresA);
		free(featureTypesA);
		free(featuresB);
		free(featureTypesB);
		free(InstanceQuery);
		free(featuresQuery);
		free(featureTypesQuery);
		free(InstanceArray);
		return 1;
	}
	free(featuresA);
	free(featureTypesA);
	free(featuresB);
	free(featureTypesB);
	free(InstanceQuery);
	free(featuresQuery);
	free(featureTypesQuery);
	free(InstanceArray);
	return 0;

}

int findNearestNeighborFour() {
	Instance* InstanceArray = (Instance*)malloc(4 * sizeof(Instance));


	//Instance* InstanceA = malloc(sizeof(Instance));
	double* featuresA = malloc(4 * sizeof(double));
	featuresA[0] = 2.0f;
	featuresA[1] = 2.0f;
	featuresA[2] = 2.0f;
	featuresA[3] = 2.0f;
	FeatureType* featureTypesA = malloc(4 * sizeof(featureTypesA));
	featureTypesA[0] = numerical;
	featureTypesA[1] = numerical;
	featureTypesA[2] = nominal;
	featureTypesA[3] = nominal;

	InstanceArray[0].features = featuresA;
	InstanceArray[0].featureTypes = featureTypesA;
	InstanceArray[0].lenght = 4;

	//Instance* InstanceB = malloc(sizeof(Instance));
	double* featuresB = malloc(4 * sizeof(double));
	featuresB[0] = 1.0f;
	featuresB[1] = 1.0f;
	featuresB[2] = 1.0f;
	featuresB[3] = 1.0f;
	FeatureType* featureTypesB = malloc(3 * sizeof(featureTypesB));
	featureTypesB[0] = numerical;
	featureTypesB[1] = numerical;
	featureTypesB[2] = nominal;
	featureTypesB[3] = nominal;
	InstanceArray[1].features = featuresB;
	InstanceArray[1].featureTypes = featureTypesB;
	InstanceArray[1].lenght = 4;

	//Instance* InstanceC = malloc(sizeof(Instance));
	double* featuresC = malloc(4 * sizeof(double));
	featuresC[0] = 3.0f;
	featuresC[1] = 3.0f;
	featuresC[2] = 3.0f;
	featuresC[3] = 3.0f;
	FeatureType* featureTypesC = malloc(3 * sizeof(featureTypesB));
	featureTypesC[0] = numerical;
	featureTypesC[1] = numerical;
	featureTypesC[2] = nominal;
	featureTypesC[3] = nominal;
	InstanceArray[2].features = featuresC;
	InstanceArray[2].featureTypes = featureTypesC;
	InstanceArray[2].lenght = 4;

	//Instance* InstanceD = malloc(sizeof(Instance));
	double* featuresD = malloc(4 * sizeof(double));
	featuresD[0] = 4.0f;
	featuresD[1] = 4.0f;
	featuresD[2] = 4.0f;
	featuresD[3] = 4.0f;
	FeatureType* featureTypesD = malloc(3 * sizeof(featureTypesB));
	featureTypesD[0] = numerical;
	featureTypesD[1] = numerical;
	featureTypesD[2] = nominal;
	featureTypesD[3] = nominal;
	InstanceArray[3].features = featuresD;
	InstanceArray[3].featureTypes = featureTypesD;
	InstanceArray[3].lenght = 4;


	


	//------------------Instance Query
	Instance* InstanceQuery = malloc(sizeof(Instance));
	double* featuresQuery = malloc(4 * sizeof(double));
	featuresQuery[0] = 0.0f;
	featuresQuery[1] = 0.0f;
	featuresQuery[2] = 0.0f;
	featuresQuery[3] = 0.0f;
	FeatureType* featureTypesQuery = malloc(sizeof(featureTypesQuery));
	featureTypesQuery[0] = numerical;
	featureTypesQuery[1] = numerical;
	featureTypesQuery[2] = nominal;
	featureTypesQuery[3] = nominal;
	InstanceQuery->features = featuresQuery;
	InstanceQuery->featureTypes = featureTypesQuery;
	InstanceQuery->lenght = 4;

	//printf("%d \n", InstanceArray[0]->lenght);


	Instance* ResultQuery = findNearestNeighbor(InstanceArray, 4, InstanceQuery, computeEuclideanDissimilarity);
	

	if (ResultQuery->features[0] == 1.0f && ResultQuery->features[1] == 1.0f &&ResultQuery->features[2] == 1.0f &&ResultQuery->features[3] == 1.0f) {

		free(InstanceArray);
		free(featuresA);
		free(featureTypesA);
		free(featuresB);
		free(featureTypesB);
		free(featuresC);
		free(featureTypesC);
		free(featuresD);
		free(featureTypesD);
		free(InstanceQuery);
		free(featuresQuery);
		free(featureTypesQuery);
		//free(ResultQuery);

		return 1;
	}
	free(InstanceArray);
	free(featuresA);
	free(featureTypesA);
	free(featuresB);
	free(featureTypesB);
	free(featuresC);
	free(featureTypesC);
	free(featuresD);
	free(featureTypesD);
	free(InstanceQuery);
	free(featuresQuery);
	free(featureTypesQuery);
	//free(ResultQuery);
	return 0;

}*/