#include <stdio.h>

int Fac(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Fac(n - 1);
}

int main(void)
{
    printf("1! = %d \n", Fac(1));
    printf("2! = %d \n", Fac(2));
    printf("3! = %d \n", Fac(3));
    printf("5! = %d \n", Fac(5));
    printf("10! = %d \n", Fac(10));
    return 0;
}