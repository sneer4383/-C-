#include <stdio.h>

int main(void)
{
    int num1, num2, sub;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;

    if (sub > 0)
        printf("두 수의 차: %d", sub);
    else
        printf("두 수의 차: %d", -sub);
    return 0;
}
