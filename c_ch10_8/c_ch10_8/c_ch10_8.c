#include <stdio.h>
int SQR(int n)
{
    static int i = 1;
    if (n == 0)
        return 1;
    else
        return 2 * SQR(n - 1);
}
    

int main(void)
{
    int n;
    printf("���� �Է�: ");
    scanf("%d", &n);
    printf("2�� %d���� %d", n, SQR(n));
    return 0;
}
