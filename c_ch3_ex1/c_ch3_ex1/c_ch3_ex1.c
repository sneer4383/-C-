#include <stdio.h>

int main(void)
{
    int num1, num2, result1, result2;
    printf("두개의 정수를 입력하십시오 ");
    scanf("%d %d", &num1, &num2);
    result1 = num1 - num2;
    result2 = num1 * num2;
    printf("두 정수의 차: %d\n두 정수의 곱: %d\n", result1, result2);

    return 0;
}