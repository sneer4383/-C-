#include <stdio.h>

int main(void)
{
    int dan;
    int i = 9;
    printf("단 수를 입력해주세요: ");
    scanf("%d", &dan);

    while (0 < i)
    {
        printf("%dx%d=%2d \n", dan, i, dan * i);
        i--;
    }
    return 0;
}