/******************************************************************************

Write a function palindrobits which returns 1 if the binary representation of its parameter is a palindrobit, and 0 otherwise. A palindrobit is bit sequence which can me read equally from left to right and right to left. For example, 5 is a palindrobit (101).

*******************************************************************************/
/*#include <stdio.h>
#include <stdlib.h>

long toBinary(long decimalNo) {
	if (decimalNo < 2) {
		return decimalNo;
	}

	return toBinary(decimalNo / 2) * 10 + decimalNo % 2;
}
long toDecimal(long binaryNo) {

	long decimalNo = 0;
	long base = 1;
	long remainder = 0;

	while (binaryNo > 0)
	{
		remainder = binaryNo % 10;
		decimalNo = decimalNo + remainder * base;
		binaryNo = binaryNo / 10;
		base = base * 2;
	}
	return decimalNo;
}


long reverseBinary(long num) {
	long reversedNumber = 0;
	long remainder = 0;

	while (num != 0)
	{
		remainder = num % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		num /= 10;
	}


	return reversedNumber;
}


long unsigned main(void) {
	long unsigned num = 0;
	scanf("%ld", &num);
	num = abs(num);
	long num_converted = toBinary(num);
	long num_converted_reversed = reverseBinary(num_converted);
	long num_converted_decimal = toDecimal(num_converted_reversed);


	if (num == num_converted_decimal) {
		printf("1");
	}
	else {
		printf("0");
	}
	return 1;
}
*/