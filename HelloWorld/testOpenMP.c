/*#include <omp.h>
#include <stdio.h>
#include <time.h>
#define NUM_THREADS 8

/*int main(void) {
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		printf("Thread id: %d\n", id);
	}
	getchar();
	return;
}*/
/*
int main(void) {
	const int numSteps = 100000000;
	const int highX = 10;
	const double deltaX = 1.0 * highX / numSteps;

	double auc = 0;

	clock_t begin = clock();

	//#pragma omp parallel for reduction ( +: auc)
	for (int i = 0; i < numSteps; i++) {
		double leftX = (i - 1) * deltaX;
		double rightX = (i + 1) * deltaX;
		double b1 = leftX * leftX;
		double b2 = rightX * rightX;
		auc += 0.5*(b1 + b2) * deltaX;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("The intregal is: %f\n", auc);
	printf("%f", time_spent);

	getchar();
	return 0;
}*/

/*int main(void) {
	const int numSteps = 100000000;
	const int highX = 10;
	const double deltaX = 1.0 * highX / numSteps;
	int nThreads = 0;
	int i = 0;
	double sum[NUM_THREADS];
	clock_t begin = clock();
	omp_set_num_threads(NUM_THREADS);
	double auc = 0;
	#pragma omp parallel for*
	{
		int id = omp_get_thread_num();
		int currentNThreads = omp_get_num_threads();
		if (id == 0) {
			nThreads = currentNThreads;
		}

		sum[id] = 0.0f;
		for (i = id; i < numSteps; i += currentNThreads) {
			double leftX = (i - 1) * deltaX;
			double rightX = (i + 1) * deltaX;
			double b1 = leftX * leftX;
			double b2 = rightX * rightX;
			sum[id] += 0.5*(b1 + b2) * deltaX;
		}

		#pragma omp critical
		{
			for (int i = 0; i < nThreads; i++) {
				auc += sum[i];
			}
		}
	}

	
	
	printf("The integral is: %f\n", auc);
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%f", time_spent);

	getchar();
	
	return 0;
	



}*/