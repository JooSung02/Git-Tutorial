#include <stdio.h>
int main(void) {
	int arr[5], i;
	printf("5���� ������ �Է����ּ��� :");
	scanf("%d, %d, %d, %d, %d", &arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	for (i = 0 ; i < 5 ; i++) {
		if (arr[i] % 2 == 1) {
			printf("Ȧ�� ���: %d", arr[i]);
		}
	}
	for (i = 0 ; i < 5 ; i++) {
		if (arr[i] % 2 == 0) {
			printf("¦�� ���: %d", arr[i]);
		}
	}
}
