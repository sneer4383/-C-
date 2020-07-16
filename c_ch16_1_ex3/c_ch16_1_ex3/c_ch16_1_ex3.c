#include <stdio.h>

int main(void)
{
    int record[5][5];
    int i, j;
    for ( i = 0;i < 4;i++)
    {
        printf("%d번째 학생 성적: ", i + 1);
        int sum = 0;
        for (j = 0;j < 4;j++)
        {
            scanf("%3d", &record[i][j]);
            sum += record[i][j];
        }
        record[i][4] = sum;
    }

    for ( j = 0;j < 5;j++)
    {
        int sum = 0;
        for ( i = 0;i < 4;i++)
        {
            sum += record[i][j];
        }
        record[4][j] = sum;
    }

    

    for (i = 0;i < 5;i++)
    {
        for (j = 0;j < 5;j++)
            printf("%3d ", record[i][j]);
        printf("\n");
    }

    return 0;
}