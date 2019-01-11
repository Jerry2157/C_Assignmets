/*#include "stdio.h"

#include "stdlib.h"

#include "stdbool.h"

typedef struct {
	void* value;
} QueueNode;
typedef struct {
	//bool* arrBool;
	QueueNode* arr;
} Queue;
Queue* initializeQueue(int n) {
	Queue* queuePtr = (Queue*)malloc(sizeof(Queue));
	//queuePtr->arrBool = (bool*)calloc(n, sizeof(bool));
	queuePtr->arr = (QueueNode*)calloc(n, sizeof(QueueNode));
	return queuePtr;
}
Queue* freeQueue(Queue* queuePtr) {
	//free(queuePtr->arrBool);
	free(queuePtr->arr);
	free(queuePtr);
}


int main(void) {
	Queue* queuePtr = initializeQueue(100);
	//queuePtr->arrBool[0] = 1;
	int someIntValue = 20;
	queuePtr->arr[0].value = &someIntValue;
	//queuePtr->arrBool[1] = 1;
	int someIntValue1 = 30;
	queuePtr->arr[1].value = &someIntValue1;
	//queuePtr->arrBool[2] = 1;
	int someIntValue2 = 50;
	queuePtr->arr[99].value = &someIntValue2;

	queuePtr->arr[0] = queuePtr->arr[1];

	printf("Element 0: %d\n", *((int*)queuePtr->arr[0].value));
	printf("Element 1: %d\n", *((int*)queuePtr->arr[1].value));
	printf("Element 2: %d\n", *((int*)queuePtr->arr[99].value));
	freeQueue(queuePtr);
	return 0;
}*/