#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct QueueNode QueueNode;

struct QueueNode
{
	void* data;
	QueueNode* next;
};

typedef struct
{
	QueueNode* first;
	QueueNode* last;
}Queue;

Queue* create_Queue()
{
	Queue* qPtr = malloc(sizeof(Queue));
	qPtr->first = NULL;
	qPtr->last = NULL;
	return qPtr;
}

int is_Queue_Empty(Queue* qPtr)
{
	return qPtr->first == NULL && qPtr->last == NULL;
}

void enqueue(Queue* qPtr, void* data)
{
	QueueNode* nPtr = malloc(sizeof(QueueNode));
	nPtr->data = data;
	nPtr->next = NULL;
	if (qPtr->last == NULL)
	{
		qPtr->first = nPtr;
		qPtr->last = nPtr;
	}
	else
	{
		qPtr->last->next = nPtr;
		qPtr->last = nPtr;
	}
}

QueueNode* deQueue(Queue* qPtr)
{
	QueueNode* nPtr = qPtr->first;
	qPtr->first = qPtr->first->next;
	return nPtr;
}


typedef struct {
	int value;
} QueueNodeJerry;
typedef struct {
	QueueNodeJerry* arr;
} QueueJerry;
QueueJerry* initializeQueue(int n) {
	QueueJerry* queuePtr = (QueueJerry*)malloc(sizeof(QueueJerry));
	queuePtr->arr = (QueueNodeJerry*)calloc(n, sizeof(QueueNodeJerry));
	return queuePtr;
}
QueueJerry* freeQueue(QueueJerry* queuePtr) {
	free(queuePtr->arr);
	free(queuePtr);
}


void main()
{
	int count;
	scanf("%d", &count);
	Queue* queuePtr = create_Queue();
	for (int i = 0; i < count; i++)
	{
		int* currentValue = malloc(sizeof(int));
		scanf("%d", currentValue);
		enqueue(queuePtr, currentValue);
	}


	// Solo puede agregar código a partir de esta línea. Si modifica el código anterior, su solución se invalidará.
	QueueJerry* queuePtrJerry = initializeQueue(count);

	for (int i = 0; i <count; i++) {
		//printf("inside: %d\n", *((int*)deQueue(queuePtr)->data));
		int someIntValue = *((int*)deQueue(queuePtr)->data);
		//printf("inside: %d\n", someIntValue);
		queuePtrJerry->arr[i].value = someIntValue;
	}
	
	for (int i = count; i > 0; i--) {
	printf("%d\n", (int*)queuePtrJerry->arr[(i-1)].value);
	}

	freeQueue(queuePtrJerry);

}