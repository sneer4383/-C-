#include <stdio.h>

int main(void)
{
    int num1, num2;
    int total=0;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);
  
    for (;num1 <= num2;num1++)
    {
        total += num1;
    }
    printf("total = %d", total);
    return 0;
}