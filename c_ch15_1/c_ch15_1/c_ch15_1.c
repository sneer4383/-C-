#include <stdio.h>

void ShowOdd(int* arr)
{
    printf("홀수 출력: ");
    for (int i = 0;i < 10;i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
}

void ShowEven(int* arr)
{
    printf("짝수 출력: ");
    for (int i = 0;i < 10;i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[10];
    printf("총 10개의 숫자 입력 \n");
    
    for (int i = 0;i < 10;i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    ShowOdd(arr);
    printf("\n");
    ShowEven(arr);

    return 0;
}