#include <stdio.h>

#define ADD(a,b,c) ((a)+(b)+(c))
#define MUL(a,b,c) ((a)*(b)*(c))

int main(void)
{
    int a, b, c;
    printf("�� ���� ������ �Է����ּ���: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("���� ���: %d \n", ADD(a, b, c));
    printf("���� ���: %d \n", MUL(a, b, c));
    return 0;
}