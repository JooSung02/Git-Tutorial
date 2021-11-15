#include<stdio.h>

int main(void) {

	int* temp;
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;

	int i;

	temp = ptr1;
	ptr1 = ptr2;
	printf("after swap \n");

	for (i = 0; i < 6; i++) {

		printf("%d ", *ptr1);
		ptr1++;
	}

	printf(" \n");
	for (i = 0; i < 6; i++) {

		printf("%d ", *temp);
		temp++;
	}


	

}