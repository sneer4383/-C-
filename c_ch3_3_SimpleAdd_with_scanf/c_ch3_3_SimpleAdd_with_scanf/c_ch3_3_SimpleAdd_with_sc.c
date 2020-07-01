#include <stdio.h>


int main(void)
{
    //1
    int result1;
    int num1, num2;

    printf("정수 one: ");
    scanf("%d", &num1); //첫번째 정수 입력
    printf("정수 two: ");
    scanf("%d", &num2); //두번째 정수 입력

    result1 = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result1);

    //2
    int num3, num4, num5;
    int result2;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num3, &num4, &num5);
    result2 = num3 + num4 + num5;
    printf("%d + %d + %d = %d\n", num3, num4, num5, result2);
    return 0;
}