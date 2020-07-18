#include <stdio.h>
void Snail(int(*arr)[10], int n);
void Show(int(*arr)[10], int n);

int main(void)
{
    int n;
    int arr[100][100] = { 0 };
    
    printf("10 이하의 숫자를 입력하시오: ");
    scanf("%d", &n);

    Snail(arr,n);
    Show(arr,n);

    return 0;
}

void Snail(int(*arr)[100], int n)
{
    
}

void Show(int(*arr)[100], int n)
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    
}
