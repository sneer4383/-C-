#include <stdio.h>

int main(void)
{
    int num;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &num);
    num /= 10;

    switch (num)
    {
    case 0:
        printf("0�̻� 10 �̸�");
        break;
    case 1:
        printf("10�̻� 20�̸�");
        break;
    case 2:
        printf("20�̻� 30�̸�");
        break;
    default:
        printf("30�̻�");
    }
    return 0;
}