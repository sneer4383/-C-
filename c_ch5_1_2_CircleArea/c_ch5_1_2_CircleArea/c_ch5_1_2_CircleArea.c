#include <stdio.h>

int main(void)
{
    double rad;
    double area;
    printf("���� ������ �Է�: ");
    scanf("%lf", &rad);     //double�� �Է� %lf

    area = rad * rad * 3.141592;
    printf("���� ���� : %f", area);     //double�� ��� %f

    return 0;
}