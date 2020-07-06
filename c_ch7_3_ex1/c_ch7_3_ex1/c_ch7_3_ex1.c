#include <stdio.h>

int main(void)
{
    int num1, num2;
    int total=0;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
  
    for (;num1 <= num2;num1++)
    {
        total += num1;
    }
    printf("total = %d", total);
    return 0;
}