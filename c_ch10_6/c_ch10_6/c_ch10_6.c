#include <stdio.h>

int main(void)
{
    int time;
    int hour, min, sec;
    printf("ÃÊ(second)ÀÔ·Â: ");
    scanf("%d", &time);

    hour = time / 360;
    min = (time - hour * 360) / 60;
    sec = time - (hour * 360 + min * 60);
    printf("h:%d, m:%d, s:%d", hour, min, sec);

    return 0;
}