#include <stdio.h>

int main(void)
{
    int lxpos, lypos, rxpos, rypos, area;

    printf("좌 상단의 x, y 좌표: ");
    scanf("%d %d", &lxpos, &lypos);

    printf("우 하단의 x, y 좌표: ");
    scanf("%d %d", &rxpos, &rypos);

    area = abs(rxpos - lxpos) * abs(rypos - lypos);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);

    return 0;
}