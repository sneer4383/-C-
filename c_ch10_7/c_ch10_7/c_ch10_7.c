#include <stdio.h>

int KMAX(int n);

int main(void)
{
    int n;
    printf("��� n �Է�: ");
    scanf("%d", &n);
    printf("������ �����ϴ� k�� �ִ��� %d", KMAX(n));
    return 0;
}

int KMAX(int n)
{
    static int k = 0; //�ʱ�ȭ���������� 0���� �ʱ�ȭ�ȴ�
    int num = 1;
    for (;num <= n;k++)
    {
        num *= 2;
    }
    return (k-1);
}

    