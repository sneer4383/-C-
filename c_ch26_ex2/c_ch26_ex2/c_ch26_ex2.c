#include <stdio.h>
#define PI 3.141592
#define AREA(r) ((r)*(r)*PI)

int main(void)
{
    double rad;
    printf("���� ������: ");
    scanf("%lf", &rad);

    printf("���� ����: %g", AREA(rad));
    return 0;
}