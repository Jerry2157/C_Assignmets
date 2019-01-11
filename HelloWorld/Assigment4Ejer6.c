/*#include <stdio.h>

int getGDC(int num1, int num2)
{
	int temp;
	if ((num1 == 0) && (num2 == 0)) {
		return 0;
	}
	else if ((num1 == 0) && (num2 != 0)) {
		return num2;
	}
	else if ((num1 != 0) && (num2 == 0)) {
		return num1;
	}
	
		
	while(1==1)
	{
		temp = num1 % num2;
		if (temp == 0)
			break;
		num1 = num2;
		num2 = temp;
	}
	return num2;
}

int main(void)
{
	int num1 = 0;
	scanf("%d",&num1);
	int num2 = 0;
	scanf("%d", &num2);

	int numGDC = getGDC(num1, num2);
	printf("%d", numGDC);
	
	return 0;
}
*/