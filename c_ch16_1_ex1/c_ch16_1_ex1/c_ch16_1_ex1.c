#include <stdio.h>

int main(void)
{
    int Two_Four_Dan [3][9];
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 9;j++)
            Two_Four_Dan[i][j] = (i + 2) * (j + 1);
    }

    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 9;j++)
            printf("%2d ", Two_Four_Dan[i][j]);
        printf("\n");
    }

    return 0;
}