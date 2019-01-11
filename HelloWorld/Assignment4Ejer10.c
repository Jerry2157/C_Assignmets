/*#include <stdio.h>


int getQuadrant(float x, float y) {
	int quadrant = 0;

	if (x == 0 || y == 0) {
		return 0;
	}
	if (x > 0 && y > 0) {
		return 1;
	}
	if (x < 0 && y>0) {
		return 2;
	}
	if (x < 0 && y < 0) {
		return 3;
	} if (x > 0 && y < 0) {
		return 4;
	}


	return 0;
}


int main(void)
{
	float x = 0.0;
	scanf("%f", &x);
	float y = 0.0;
	scanf("%f", &y);

	int a = getQuadrant(x, y);
	printf("%d", a);
	return 1;
}*/