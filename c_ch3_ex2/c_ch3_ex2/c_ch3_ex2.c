#include <stdio.h>

int main(void)
{
    int num1, num2, num3, result;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1 * num2 + num3;
    printf("%d x %d + %d = %d\n", num1, num2, num3, result);

    return 0;
}