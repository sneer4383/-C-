#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    while (i < 5)
    {
        while (j < i)
        {
            printf("o ");
            j++;
        }
        printf("*\n");
        i++;
        j = 0;
    }
    return 0;
}