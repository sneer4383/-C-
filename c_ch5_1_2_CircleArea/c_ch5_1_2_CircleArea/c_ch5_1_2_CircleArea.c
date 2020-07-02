#include <stdio.h>

int main(void)
{
    double rad;
    double area;
    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);     //double의 입력 %lf

    area = rad * rad * 3.141592;
    printf("원의 넓이 : %f", area);     //double의 출력 %f

    return 0;
}