#include <stdio.h>

int main(void)
{
    int num1, num2, result1, result2;
    printf("�ΰ��� ������ �Է��Ͻʽÿ� ");
    scanf("%d %d", &num1, &num2);
    result1 = num1 - num2;
    result2 = num1 * num2;
    printf("�� ������ ��: %d\n�� ������ ��: %d\n", result1, result2);

    return 0;
}