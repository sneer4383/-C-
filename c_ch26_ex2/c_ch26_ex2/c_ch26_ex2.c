#include <stdio.h>
#define PI 3.141592
#define AREA(r) ((r)*(r)*PI)

int main(void)
{
    double rad;
    printf("원의 반지름: ");
    scanf("%lf", &rad);

    printf("원의 넓이: %g", AREA(rad));
    return 0;
}