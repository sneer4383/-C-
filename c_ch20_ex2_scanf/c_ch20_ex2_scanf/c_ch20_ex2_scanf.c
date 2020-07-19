#include <stdio.h>
void Snail(int(*arr)[10], int n);
void Show(int(*arr)[10], int n);

int main(void)
{
    int n;
    int arr[10][10] = { 0 };

    printf("10 이하의 숫자를 입력하시오: ");
    scanf("%d", &n);

    Snail(arr, n);
    Show(arr, n);

    return 0;
}

void Snail(int(*arr)[10], int n)
{
    for (int i = 0;i < 2 * n - 1;i++)
    {
        if (i % 4 == 0)
        {
            for (int j = 0;j < n - 2 * (i / 4);j++)
                scanf("%d", &arr[i / 4][i / 4 + j]);
        }
        else if (i % 4 == 1)
        {
            for (int j = 0;j < n - 1 - 2 * (i / 4);j++)
                scanf("%d", &arr[(i / 4 + 1) + j][(n - 1) - (i / 4)]);
        }
        else if (i % 4 == 2)
        {
            for (int j = 0;j < n - 1 - 2 * (i / 4);j++)
                scanf("%d", &arr[(n - 1) - (i / 4)][(n - 1) - (i / 4 + 1) - j]);
        }
        else
        {
            for (int j = 0;j < n - 2 - 2 * (i / 4);j++)
                scanf("%d", &arr[(n - 1) - (i / 4 + 1) - j][i / 4]);
        }
    }
}

void Show(int(*arr)[10], int n)
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }

}
