#include <stdio.h>

int SquareByValue(int num)
{
    return num * num;
}

int SquareByReference(int* num)
{
    *num *= *num;
    return *num;
}

int main(void)
{
    int num = 5;

    printf("%d \n", SquareByValue(num));
    printf("%d \n", num);
    printf("%d \n", SquareByReference(&num));
    printf("%d \n", num);

    return 0;
}