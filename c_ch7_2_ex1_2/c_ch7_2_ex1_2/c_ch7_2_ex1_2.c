#include <stdio.h>

int main(void)
{
    int total;
    int num;

    printf("정수를 입력해주세요: ");
    scanf("%d", &num);
    total = num;

    while (num != 0)
    {
        printf("정수를 입력해주세요: ");
        scanf("%d", &num);
        total += num;
    }
    printf("total = %d", total);

    return 0;
}