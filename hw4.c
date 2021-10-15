#include <stdio.h>

int main(void)
{
    int num;
    printf("Please enter the number :");
    scanf("%d", &num);
    bin_num(num);

    return 0;

}

int bin_num(int num)
{
    if (num == 1 || num == 0)
        printf("%d", num);
    else {
        bin_num(num / 2);
        printf("%d", num % 2);

    }

    return 0;


}