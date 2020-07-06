#include <stdio.h>

int main(void)
{
    int dan = 1;

    for (int i = 0;i < 9;i++)
    {
        if (dan % 2 == 1)
        {
            dan++;
            continue;
        }

        for (int j = 1;j <= dan;j++)
        {
            printf("%d*%d=%2d\n", dan, j, dan * j);
        }
        printf("\n");
        dan++;
    }
    return 0;
}
                
