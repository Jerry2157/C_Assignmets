/*#include <stdarg.h>
#include <stdio.h>



int test_exam_one() {
	int encode = 0;
	encode = encodeMinutia(1023, 1023, 359, 2);
	printf("%d\n", encode);
	//encode = encodeMinutia(1, 1, 1, 1);
	//printf("%d", encode);
	if (encode == 537920513) {
		return 1;
	}
	else {
		return 0;
	}
}

int encodeMinutia(int x, int y, int d, int t) {
	int finalEncodeNum = 0;
	int bitMulti = 1;
	int bitMultiX = 1;
	int bitMultiY = 1;
	int bitMultiD = 1;
	int bitMultiT = 1;
	for (int i = 0; i < 10; i++) {
		if (x & bitMultiX) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiX *= 2;
	}
	//printf("encode: %d \n", finalEncodeNum);
	for (int i = 0; i < 10; i++) {
		if (y & bitMultiY) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiY *= 2;
	}
	//printf("encode: %d \n", finalEncodeNum);
	for (int i = 0; i < 9; i++) {
		if (d & bitMultiD) {
			finalEncodeNum += bitMulti;
		}
		bitMulti *= 2;
		bitMultiD *= 2;
	}
	//printf("encode: %d \n", finalEncodeNum);
	for (int i = 0; i < 2; i++) {
		if (t & bitMultiT) {
			finalEncodeNum += bitMulti;
		}
		//printf("encodeinside: %d \n", finalEncodeNum);
		bitMulti *= 2;
		bitMultiT *= 2;
	}
	//printf("encode: %d \n", finalEncodeNum);
	return finalEncodeNum;
}


int main(void) {
	//int test = 2147483647;
	//printf("testint: %d\n", test);
	
	int x;
	scanf("%d", &x);
	int y;
	scanf("%d", &y);
	int d;
	scanf("%d", &d);
	int t;
	scanf("%d", &t);

	int encode = 0;
	encode = encodeMinutia(x, y, d, t);

	printf("%d", encode);

	//test_exam_one();

	//printf("test exam : %d\n", test_exam_one());

	return 1;
}*/