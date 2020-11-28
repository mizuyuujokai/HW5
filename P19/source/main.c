#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int b[] = { 10,20,30,40 };
	int* bp= b;
	int i;
	int o;
	printf("Array b printted with;\nArray subcript notation\n");
	for (i = 0; i < 4; i++) {
		printf("b[%d=%d\n", i, b[i]);
	}
	printf("\nPointer/offset notation where\n"
		"the pointer is the array name\n");
	for (o = 0; o < 4; o++) {
		printf("*(b+%d)=%d\n", o, *(b + o));
	}
	printf("\Pointer subcript notation\n");
	for (i = 0; i < 4; i++) {
		printf("bptr[%d]=%d\n", i, bp[i]);
	}
	printf("\nPointer/offset notation where\n"
		"the pointer is the array name\n");
	for (o = 0; o < 4; o++) {
		printf("*(b+%d)=%d\n", o, *(bp + o));
	}
	system("pause");
	return 0;
}