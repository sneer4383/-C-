#include <stdio.h>

int main(void)
{
    int total = 0;
    int num = 1;

    while (num != 0)
    {
        printf("���� �Է�(0 to quit): ");
        scanf("%d", &num);
        total += num;
    }
    printf("total=%d\n", total);
    return 0;
}