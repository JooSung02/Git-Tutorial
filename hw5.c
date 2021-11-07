#include <stdio.h>
int main(void) {
	int arr[5], i;
	printf("5개의 정수를 입력해주세요 :");
	scanf("%d, %d, %d, %d, %d", &arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	for (i = 0 ; i < 5 ; i++) {
		if (arr[i] % 2 == 1) {
			printf("홀수 출력: %d", arr[i]);
		}
	}
	for (i = 0 ; i < 5 ; i++) {
		if (arr[i] % 2 == 0) {
			printf("짝수 출력: %d", arr[i]);
		}
	}
}
