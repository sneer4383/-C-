#include <stdio.h>

int main(void)
{
    int num1, num2, sub;
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;

    if (sub > 0)
        printf("�� ���� ��: %d", sub);
    else
        printf("�� ���� ��: %d", -sub);
    return 0;
}
