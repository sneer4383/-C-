#include <stdio.h>

int main(void)
{
    int dan;
    int i = 9;
    printf("�� ���� �Է����ּ���: ");
    scanf("%d", &dan);

    while (0 < i)
    {
        printf("%dx%d=%2d \n", dan, i, dan * i);
        i--;
    }
    return 0;
}