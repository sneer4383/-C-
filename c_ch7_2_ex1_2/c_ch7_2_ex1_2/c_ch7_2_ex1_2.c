#include <stdio.h>

int main(void)
{
    int total;
    int num;

    printf("������ �Է����ּ���: ");
    scanf("%d", &num);
    total = num;

    while (num != 0)
    {
        printf("������ �Է����ּ���: ");
        scanf("%d", &num);
        total += num;
    }
    printf("total = %d", total);

    return 0;
}