#include <stdio.h>

int main(void)
{
    int lxpos, lypos, rxpos, rypos, area;

    printf("�� ����� x, y ��ǥ: ");
    scanf("%d %d", &lxpos, &lypos);

    printf("�� �ϴ��� x, y ��ǥ: ");
    scanf("%d %d", &rxpos, &rypos);

    area = abs(rxpos - lxpos) * abs(rypos - lypos);
    printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", area);

    return 0;
}