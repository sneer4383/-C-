#include <stdio.h>
void table(int num)
{
    printf("\n%d��", num);

    for (int i = 1;i < 10;i++)
    {
        printf("%d*%d=%d \n", num, i, num * i);
    }
}

int main(void)
{
    int num1, num2;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        for (;num1 < num2;num1++)
        {
            table(num1);
        }
    }
    else
    {
        for (;num2 < num1;num2++)
        {
            table(num2);
        }
    }
    return 0;
}