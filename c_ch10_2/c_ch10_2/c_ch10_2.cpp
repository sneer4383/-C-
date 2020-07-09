#include <stdio.h>
void table(int num)
{
    printf("\n%d단", num);

    for (int i = 1;i < 10;i++)
    {
        printf("%d*%d=%d \n", num, i, num * i);
    }
}

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력: ");
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