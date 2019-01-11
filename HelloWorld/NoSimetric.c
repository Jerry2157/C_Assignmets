/*#include <stdio.h>

int main(void) {


	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);

	draw(a);
	draw(b);
	draw(c);

	return 0;
}


int draw(int a) {
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("\\");
		}
		for (int k = ((a - (i)) * 2 - 1); k > 0; k--)
		{
			printf("!!");

		}
		for (int j = 0; j < i; j++)
		{
			printf("//");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
}
*/