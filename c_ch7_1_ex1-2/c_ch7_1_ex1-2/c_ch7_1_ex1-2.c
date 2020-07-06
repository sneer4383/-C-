#include <stdio.h>

int main(void)
{
    int num;
    int i = 1;
    
    printf("양의 정수 입력: ");
    scanf("%d", &num);

    while (i++ <= num)  //조건문에 i++으로 씀으로써 body 속에 i++를 넣지 않아도 됨
    {
        printf("%d ", 3 * i);
    }
        return 0;
}