#include <stdio.h>

int main(void)
{
    int num, input, i;
    int total = 0;

    printf("�� ���� ������ �Է��Ͻðڽ��ϱ�?: ");
    scanf("%d", &num);
    i = num;
    printf("������ �Է��Ͻʽÿ�: ");
    
    while (i>0)
    {
        scanf("%d", &input);
        total += input;
        i--;
    }
    printf("��հ�: %f", (double)total / num ); //����� ����ȯ�� ���ٸ� �Ҽ����� ǥ������ �ʴ´�.
    return 0;
}