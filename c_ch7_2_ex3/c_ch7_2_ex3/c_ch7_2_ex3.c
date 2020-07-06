#include <stdio.h>

int main(void)
{
    int dan = 2;
    int i = 1;

    do
    {
        printf("\n%d´Ü\n", dan);
        do
        {
            printf("%d*%d=%2d\n", dan, i, dan * i);
            i++;
        } while (i < 10);
        i = 1;
        dan++;
    } while (dan < 10);
    return 0;
}