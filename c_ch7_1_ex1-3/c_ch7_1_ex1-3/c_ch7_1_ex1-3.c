#include <stdio.h>

int main(void)
{
    int num=1;
    int total = 0;

    while (num != 0)
    {
        printf("������ �Է����ּ���: ");
        scanf("%d", &num);

        total += num;
    }
    printf("Total=%d", total);
    return 0;
}