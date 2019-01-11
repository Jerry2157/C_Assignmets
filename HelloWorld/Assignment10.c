/*#include <stdio.h>
#include <math.h>
#include "stdbool.h"
#include <stdbool.h>

typedef struct {
	void* value;
} QueueNode;

typedef struct { //columna
	//bool* arrBool;
	void* name;
	QueueNode* arr;
} Queue;
typedef struct { //fila
	Queue* arrOfArr;
}QueueOfQueue;

QueueOfQueue* initializeQueueQueue(int n) {
	
	QueueOfQueue* queuequeuePtr = (QueueOfQueue*)malloc(sizeof(QueueOfQueue));
	queuequeuePtr->arrOfArr = (Queue*)calloc(n, sizeof(Queue));

	//Queue* queeexample= createQueue(n);

	//queuequeuePtr->arrOfArr[0].arr = queuePtr;
	//queuequeuePtr->arrOfArr[0].arr = queeexample;
	return queuequeuePtr;
}

Queue* createQueue(int n) {
	Queue* queuePtr = (Queue*)malloc(sizeof(Queue));
	queuePtr->arr = (QueueNode*)calloc(n, sizeof(QueueNode));
	return queuePtr;
}

QueueOfQueue* freeQueue(QueueOfQueue* queuePtr) {
	//free(queuePtr->arrBool);
	//free(queuePtr->arr);
	free(queuePtr);
}

//----------------------------------------------------- array of attributes ---------------------

typedef struct {
	void* value;
} QueueNodeAttribute;
typedef struct {
	void* name;
} QueueNodeAttributeName;
typedef struct {
	void* Len;
} QueueNodeAttributeLen;

typedef struct { //columna
	//bool* arrBool;
	
	QueueNodeAttribute* arr;
} QueueAttribute;
typedef struct { //fila
	QueueAttribute* arrOfArr;
	QueueNodeAttributeName* name;
	QueueNodeAttributeLen* len;
}QueueOfQueueAttribute;

QueueOfQueueAttribute* initializeArrayOfAttributes(int n) {

	QueueOfQueueAttribute* queuequeuePtr = (QueueOfQueueAttribute*)malloc(sizeof(QueueOfQueueAttribute));
	queuequeuePtr->arrOfArr = (QueueAttribute*)calloc(n, sizeof(QueueAttribute));
	queuequeuePtr->name = (QueueNodeAttributeName*)calloc(n, sizeof(QueueNodeAttributeName));
	queuequeuePtr->len = (QueueNodeAttributeLen*)calloc(n, sizeof(QueueNodeAttributeLen));

	//Queue* queeexample= createQueue(n);

	//queuequeuePtr->arrOfArr[0].arr = queuePtr;
	//queuequeuePtr->arrOfArr[0].arr = queeexample;
	return queuequeuePtr;
}

QueueAttribute* createTuplaOfAttributes(int n) {
	QueueAttribute* queuePtr = (QueueAttribute*)malloc(sizeof(QueueAttribute));
	queuePtr->arr = (QueueNodeAttribute*)calloc(n, sizeof(QueueNodeAttribute));
	return queuePtr;
}

QueueOfQueueAttribute* freeQueueOfAttributes(QueueOfQueueAttribute* queuePtr) {
	//free(queuePtr->arrBool);
	//free(queuePtr->arr);
	free(queuePtr);
}


//----------------------------------------------------- end of array of attributes ---------------------


int createDinArray_ofDinArrays() {

	QueueOfQueue* queuequeuePtr = initializeQueueQueue(4);
	//queuePtr->arrBool[0] = 1;
	int someIntValue = 20;
	queuequeuePtr->arrOfArr[0].arr[0].value = &someIntValue;
	int someIntValue1 = 30;
	queuequeuePtr->arrOfArr[0].arr[1].value = &someIntValue1;

	//queuequeuePtr->arrOfArr[0]->arr[0].value = &someIntValue;
	//queuequeuePtr->arr[0].value = &someIntValue;

	printf("Element 0: %d\n", *((int*)queuequeuePtr->arrOfArr[0].arr[0].value));
	printf("Element 1: %d\n", *((int*)queuequeuePtr->arrOfArr[0].arr[1].value));
	freeQueue(queuequeuePtr);

	return 0;
}



int readfile() {
	int i;
	FILE* filePointer = fopen("nursery.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		printf("%02d: %s", i, output);
	}
	fclose(filePointer);
	system("PAUSE");
	return 0;
}

int countlinesDebug() {
	int j = 0;
	bool findedData = false;
	FILE* filePointer = fopen("car.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (int i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		printf("%02d: %s", i, output);
		if (strstr(output, "@attribute") != NULL) {
			j++;
		}
		if (strstr(output, "@data") != NULL) {
			fclose(filePointer);
			printf("\n total lines: %d", j);
			system("PAUSE");

			return 0;
		}
	}
	fclose(filePointer);
	printf("\n total lines: %d", j);
	system("PAUSE");

	return 0;
}

int countAttribute() {
	int j = 0;
	bool findedData = false;
	FILE* filePointer = fopen("car.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (int i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		//printf("%02d: %s", i, output);
		if (strstr(output, "@attribute") != NULL) {
			j++;
		}
	}
	fclose(filePointer);
	//printf("\n total lines: %d", j);
	return j;
}

int countData() { // cuenta el numero de tuplas
	int j = 0;
	bool findedData = false;
	FILE* filePointer = fopen("car.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (int i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		//printf("%02d: %s", i, output);
		if (!findedData) {
			if (strstr(output, "@data") != NULL) {
				findedData = true;
			}
		}
		else {
			if (strstr(output, ",") != NULL) {
				//printf("%02d: %s", i, output);
				j++;
			}
		}
	}
	fclose(filePointer);
	//printf("\n total lines: %d", j);
	return j;
}

//++++++++++++++++++++++++++++++++++ Fullfill attributes array section ++++++++++++++++++++++++++++++++++

int fullfillAttributesPerLine(QueueOfQueueAttribute* AttributesArrayPtr, int AttributeIndex) { // cuenta el numero de tuplas
	int j = 0;
	bool findedData = false;
	FILE* filePointer = fopen("car.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (int i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		//printf("%02d: %s", i, output);
		if (strstr(output, "@attribute") != NULL) {
			findedData = true;
		}
		
		
	}
	fclose(filePointer);
	//printf("\n total lines: %d", j);
	return j;
}


int divideStringForAttributtesPhaseOne(char *stringToDivide, QueueOfQueueAttribute* AttributesArrayPtr, int IndexAttribute) {
	//char buf[] ="abc/qwe/ccd";
	//char buf[512] = "hola";
	//char buf[512] = stringToDivide;
	//printf("%d \n:", stringToDivide);
	int i = 0;
	char *p = strtok(stringToDivide, "{");
	char *array[2];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, "{");
	}
	for (i = 0; i < 2; ++i) {
		if (i == 1) {
			printf("%s\n", array[i]);
			divideStringForAttributtesPhaseTwo(array[i]);
		}
	}
	return 0;
}
int divideStringForAttributtesPhaseTwo(char *stringToDivide, QueueOfQueueAttribute* AttributesArrayPtr, int IndexAttribute) {
	//char buf[] ="abc/qwe/ccd";


	int i = 0;
	char *p = strtok(stringToDivide, "}");
	char *array[2];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, "}");
	}
	for (i = 0; i < 2; ++i) {
		if (i == 0) {
			printf("%s\n", array[i]);
			divideStringForAttributtesPhaseThree(array[i]);
		}
	}
	return 0;
}
int divideStringForAttributtesPhaseThree(char stringToDivide[], QueueOfQueueAttribute* AttributesArrayPtr, int IndexAttribute) {
	//char buf[] ="abc/qwe/ccd";

	//count attributes values
	int i = 0;
	int j = 0;
	char *p = strtok(stringToDivide, ",");
	char *array[20];
	while (p != NULL)
	{
		array[i++] = p;
		j++;
		p = strtok(NULL, ",");
	}
	AttributesArrayPtr->len[IndexAttribute].Len = &j;
	QueueAttribute* TuplaAttribute = createTuplaOfAttributes(j);
	
	for (i = 0; i < 20; ++i) {
		printf("%s\n", array[i]);
		
	}



	return 0;
}

//++++++++++++++++++++++++++++++++++ End of Fullfill attributes array section ++++++++++++++++++++++++++++++++++


int divideStringPhaseOne(char *stringToDivide) {
	//char buf[] ="abc/qwe/ccd";
	//char buf[512] = "hola";
	//char buf[512] = stringToDivide;
	//printf("%d \n:", stringToDivide);
    int i = 0;
    char *p = strtok (stringToDivide, "{");
    char *array[2];

    while (p != NULL)
    {
        array[i++] = p;
        p = strtok (NULL, "{");
    }
	for (i = 0; i < 2; ++i) {
		if (i == 1) {
			printf("%s\n", array[i]);
			divideStringPhaseTwo(array[i]);
		}
	}
	return 0;
}
int divideStringPhaseTwo(char *stringToDivide) {
	//char buf[] ="abc/qwe/ccd";
	

	int i = 0;
	char *p = strtok(stringToDivide, "}");
	char *array[2];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, "}");
	}
	for (i = 0; i < 2; ++i) {
		if (i == 0) {
			printf("%s\n", array[i]);
			divideStringPhaseThree(array[i]);
		}
	}
	return 0;
}
int divideStringPhaseThree(char stringToDivide[]) {
	//char buf[] ="abc/qwe/ccd";
	

	int i = 0;
	char *p = strtok(stringToDivide, ",");
	char *array[4];

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok(NULL, ",");
	}
	for (i = 0; i < 4; ++i) {
		printf("%s\n", array[i]);
		
	}
	return 0;
}


int createNamesAttributes() {
	int j = 0;
	bool findedData = false;
	FILE* filePointer = fopen("car.arff", "r");
	if (filePointer == NULL) {
		printf("Cant openfile");
		return 0;
	}
	char output[256]; //longitud del renglon
	for (int i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++) {
		//printf("%02d: %s", i, output);
		
		if (strstr(output, "@attribute") != NULL) {
			findedData = true;
			//divideString(output);
			j++;
		}
		

	}
	fclose(filePointer);
	//printf("\n total lines: %d", j);
	system("PAUSE");

	return j;
}

int main(void) {
	//int totalAttributes = 0;
	//totalAttributes = countAttribute();
	//QueueOfQueue* queuequeuePtr = initializeQueueQueue(totalAttributes);
	//printf("created an array of array of: %d \n: ", totalAttributes);
	
	//int totalTuplas = 0;
	//totalTuplas = countData();
	//printf("total of tuplas: %d \n: ", totalTuplas);
	
	//----------create an array of Attributes, no values added still ------------
	int totalAttributes = 0;
	totalAttributes = countAttribute();
	QueueOfQueueAttribute* AttributesArrayPtr = initializeArrayOfAttributes(totalAttributes);
	//----------full fill of attributes ------------


	//createNamesAttributes();

	//char buf[512] = "@attribute buying {vhigh,high,med,low}";
	//divideStringPhaseOne(buf);
	
	

	//createDinArray_ofDinArrays();
	//countlinesDebug();


	return 0;
}


*/