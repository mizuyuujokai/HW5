#include<stdio.h>
#include<stdlib.h>
#define Size 10

void swap(int *ele, int *ele2) {
	int h = *ele;
	*ele = *ele2;
	*ele2= h;
}
void bbs(int * const array, const int size) {
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++) {
		for (j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

int main(void) {
	int a[Size]= { 2,6,4,8,10,12,89,68,45,37 };
	int i;
	printf("Data items in original order\n");
	for (i = 0; i < Size; i++)
	{
		printf("%4d", a[i]);
	}

	bbs(a, Size);

	printf("\nData itemd in ascending order\n");
	for (i = 0; i < Size; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}