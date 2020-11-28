#include<stdio.h>
#include<stdlib.h>

void cube(int* np) {
	*np = *np * *np * *np;
}
int main(void) {
	int num = 5;
	printf("The original value of number is %d", num);

	cube(&num);
	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}