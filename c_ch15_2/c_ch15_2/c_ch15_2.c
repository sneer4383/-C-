#include <stdio.h>
int main(void)
{
    int num;
    int i = 0;
    int bi[30];
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    while (num > 0)
    {
        bi[i++] = num % 2;
        num /= 2;
    }

    printf("2진수 출력: ");
 
    while (i>0)
    {
        printf("%d", bi[--i]); 
    }
    
    return 0;
}
