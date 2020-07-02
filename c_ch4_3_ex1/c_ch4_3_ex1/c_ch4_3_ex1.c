#include <stdio.h>
//입력한 정수의 부호를 반대로 바꾸는 코드 with 비트연산자

int main(void)
{
    int num, result;
    printf("정수 입력: ");
    scanf("%d", &num);

    result = ~num + 1;
    printf("부호 반전: %d", result);

    return 0;
}