#include <stdio.h>

int main(void)
{
    int n;
    int fac = 1;
    printf("������ �Է����ּ���: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++)
    {
        fac *= i;
    }
    printf("%d!=%d", n, fac);
    return 0;
}