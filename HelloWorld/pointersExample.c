/*#include "stdio.h"

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

Instance* exampleReturnInt() {
	
	return 1;
}

int main(void) {

	int *aPtr;

	int a = 10;

	aPtr = &a;

	printf("%p\n", &a); //0095FB6C

	printf("%p\n", aPtr); //0095FB6C

	printf("%p\n", &aPtr); //0095FB78

	printf("%d\n", *aPtr); //10
	
	printf("%d\n", exampleReturnInt()); //10



	return 0;

}


*/