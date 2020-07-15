#include <stdio.h>

int main(void)
{
    int arr[10];
    int temp;
    int front = 0, back = 9;
    printf("총 10개의 숫자 입력\n");

    for (int i = 0;i < 10;i++)
    {
        printf("입력: ");
        scanf("%d", &temp);
        if (temp % 2 == 1)
        {
            arr[front] = temp;
            front++;
        }
        else
        {
            arr[back] = temp;
            back--;
        }
    }
    printf("배열 요소의 출력 : ");
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}