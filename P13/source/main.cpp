#include<stdio.h>
#include<stdlib.h>

void cc( int &np );

int main(void) {
	int num = 5;
	printf("The original value of number is %d", num);
	cc(num);

	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}
void cc( int &np ) {
	np = np * np * np;
}