#include <stdio.h>

void ShowOdd(int* arr)
{
    printf("Ȧ�� ���: ");
    for (int i = 0;i < 10;i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
}

void ShowEven(int* arr)
{
    printf("¦�� ���: ");
    for (int i = 0;i < 10;i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[10];
    printf("�� 10���� ���� �Է� \n");
    
    for (int i = 0;i < 10;i++)
    {
        printf("�Է�: ");
        scanf("%d", &arr[i]);
    }

    ShowOdd(arr);
    printf("\n");
    ShowEven(arr);

    return 0;
}