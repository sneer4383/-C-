#include <stdio.h>

#define ADD(a,b,c) ((a)+(b)+(c))
#define MUL(a,b,c) ((a)*(b)*(c))

int main(void)
{
    int a, b, c;
    printf("세 개의 정수를 입력해주세요: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("덧셈 결과: %d \n", ADD(a, b, c));
    printf("곱셈 결과: %d \n", MUL(a, b, c));
    return 0;
}