/*#include <stdio.h>
#define SIZE 10000

int main(void) {
	int priceNum = 0;
	scanf("%d", &priceNum);
	int counter = 0;
	scanf("%d", &counter);
	int a1[SIZE];

	

	for (int i = 0; i < counter; i++) {
		int n = 0;
		scanf("%d", &n);
		a1[i] = n;
	}
	printf("%d", pricelRights(a1,counter,priceNum));
	return 1;
}

int pricelRights(int a1[],int counter,int priceNum) {
	
	int tempNum = 0;
	
	int tryIntents = 0;
	
	for (int i = 0; i < counter; i++) {
		if (priceNum > a1[i] && a1[i]> tempNum) {
			tempNum = a1[i];
			tryIntents += 1;
		}
	}
	
	if (tryIntents == 0) {
		return -1;
	}
	else {
		return tempNum;
	}


	return -1;
}
*/