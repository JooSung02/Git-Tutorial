#include <stdio.h>
#include <math.h>

int main(void) {
	double pow(double a, double b);
	double sqrt(double x);
	int arr[5];
	int i;
	double s=0, s1 = 0, average, deviation;
	printf("Enter 5 real numbers :");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++) {
		s += arr[i];
	}

	average = s / 5;

	for (i = 0; i < 5; i++) {
		s1 += pow(arr[i] - average, 2);
	}

	deviation = sqrt(s1 / 5);

	printf("Standard Deviation :%.3f", deviation);
	
}