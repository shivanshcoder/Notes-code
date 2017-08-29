#include<stdio.h>
//This program prints the decmal number into Binary Form
#include<climits>
void bits(int num) {
	for (int i = 0; i < 29; ++i)printf(" ");
	while (num) {
		printf("%d", num & 0x1);
		num = num >> 1;
	//	num = temp;
		printf("\b\b");
	}
}
void test(int num) {
	int val = 0;
	int out[50];
	int temp = num;
	for (val = 0; temp; ++val) {
		out[val] = temp & 0x1;
		temp = num >> 1;
		num = temp;
	}
	val--;
	while (val>=0) {
		printf("%d", out[val]);
		val--;
	}
}
//
//int temp = num;
//int output[0] =  temp & 0x1;
//temp = num >> 1;
//num = temp;



void main() {
	int num;
	printf("%d\n", INT_MAX);
	scanf("%d", &num);
	//num = ~0;
	bits(num);
	printf("\n");
	test(num);
	printf("\n");
//	system("pause");
	main();
}