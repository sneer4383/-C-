#include <stdio.h>

int main(void)
{
    int dan = 0, num = 1;
    printf("�� ��?: ");
    scanf("%d", &dan);

    while (num < 10)
    {
        printf("%dx%d=%3d \n", dan, num, dan * num);
        num++;
    }
    return 0;
}