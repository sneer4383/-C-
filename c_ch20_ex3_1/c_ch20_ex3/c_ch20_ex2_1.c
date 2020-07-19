#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0;
    int num;

    printf("난수의 범위: 0부터 99까지 \n");
    while(i<5)
    {
        num = rand();
        if (num < 100)
        {
            printf("난수 출력: %d \n", num);
            i++;
        }
    }
    return 0;
}