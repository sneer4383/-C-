#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main(void)
{
    int num1, num2;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);

    printf("MAX: %d", MAX(num1, num2));
    return 0;
}