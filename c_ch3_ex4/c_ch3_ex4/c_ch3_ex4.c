#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);
    printf("��: %d\n������: %d", num1 / num2, num1 % num2);

    return 0;
}