#include <stdio.h>

int main(void)
{
    int num;
    int i = 1;
    
    printf("���� ���� �Է�: ");
    scanf("%d", &num);

    while (i++ <= num)  //���ǹ��� i++���� �����ν� body �ӿ� i++�� ���� �ʾƵ� ��
    {
        printf("%d ", 3 * i);
    }
        return 0;
}