#include <stdio.h>

int main(void)
{
    int num=1;
    int total = 0;

    while (num != 0)
    {
        printf("정수를 입력해주세요: ");
        scanf("%d", &num);

        total += num;
    }
    printf("Total=%d", total);
    return 0;
}