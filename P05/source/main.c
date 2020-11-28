#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int a;
	int* ap;

	a = 7;
	ap = &a;

	printf("The address of a is %p"
		"\nThe value of aptr is %p", &a, ap);
	printf("The address of a is %d"
		"\nThe value of aptr is %d", &a, *ap);
	printf("\n\nShowing that * and & are complements of"
		"each other\n&*aptr = %p"
		"\n*&aptr = %p\n", &*ap,&*ap);
	system("pause");
	return 0;
}