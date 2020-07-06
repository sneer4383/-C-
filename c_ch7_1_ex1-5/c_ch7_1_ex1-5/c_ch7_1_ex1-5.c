#include <stdio.h>

int main(void)
{
    int num, input, i;
    int total = 0;

    printf("몇 개의 정수를 입력하시겠습니까?: ");
    scanf("%d", &num);
    i = num;
    printf("정수를 입력하십시오: ");
    
    while (i>0)
    {
        scanf("%d", &input);
        total += input;
        i--;
    }
    printf("평균값: %f", (double)total / num ); //명시적 형변환이 없다면 소수점이 표현되지 않는다.
    return 0;
}