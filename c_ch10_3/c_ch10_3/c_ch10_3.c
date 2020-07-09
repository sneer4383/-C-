#include <stdio.h>

int GCD(int num1, int num2);

int main(void)
{
    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("두 수의 최대공약수: %d", GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2)
{
    int num = (num1 < num2) ? num1 : num2;

    if (num == 1)
        num = 1;
    else
    {
        while (!(num1 % num == 0 && num2 % num == 0))
        {
            num--;
        }
    }
    return num;
}