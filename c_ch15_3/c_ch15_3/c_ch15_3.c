#include <stdio.h>

int main(void)
{
    int arr[10];
    int temp;
    int front = 0, back = 9;
    printf("�� 10���� ���� �Է�\n");

    for (int i = 0;i < 10;i++)
    {
        printf("�Է�: ");
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
    printf("�迭 ����� ��� : ");
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}