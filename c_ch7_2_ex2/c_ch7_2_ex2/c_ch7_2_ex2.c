#include <stdio.h>

int main(void)
{
    int num = 0, tot = 0;

    do
    {
        tot += num;
        num += 2;
    } while (num <= 100);
    printf("total=%d", tot);
    return 0;
}