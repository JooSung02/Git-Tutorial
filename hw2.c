#include <stdio.h>

int main(void)
{
    float num1;
    float num2;

    printf("Please enter killometers : ");
    scanf("%f", &num1);
    num2 = num1 / 1.609;
    printf("%f km is equal to %1.1f miles.", num1, num2);
}