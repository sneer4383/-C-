#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct circle
{
    double rad;
    struct point* center;
};

int main(void)
{
    struct point cen = { 2,7 };
    double rad = 5.5;

    struct circle ring = { rad, &cen };
    printf("���� ������: %g \n", ring.rad);
    printf("�����߽� [%d, %d] \n", (*ring.center).xpos , (ring.center)->ypos);
    return 0;
}