#include <stdio.h>
//�Է��� ������ ��ȣ�� �ݴ�� �ٲٴ� �ڵ� with ��Ʈ������

int main(void)
{
    int num, result;
    printf("���� �Է�: ");
    scanf("%d", &num);

    result = ~num + 1;
    printf("��ȣ ����: %d", result);

    return 0;
}