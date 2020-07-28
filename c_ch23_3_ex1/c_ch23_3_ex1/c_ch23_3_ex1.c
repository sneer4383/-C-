#include <stdio.h>
#include <math.h>

typedef struct point
{
    int xpos;
    int ypos;
}Point;

typedef struct rectangle
{
    Point lower_left;
    Point upper_right;
}Rectangle;

void Show_Area(Rectangle rec)
{
    int area;
    area = (rec.upper_right.xpos - rec.lower_left.xpos) * abs(rec.upper_right.ypos - rec.lower_left.ypos);
    printf("직사각형의 넓이: %d", area);
}

void Show_Pos(Rectangle rec)
{
    printf("----직사각형의 좌표---- \n");
    printf("좌 상단 (%d, %d) \n", rec.lower_left.xpos, rec.upper_right.ypos);
    printf("우 상단 (%d, %d) \n", rec.upper_right.xpos, rec.upper_right.ypos);
    printf("좌 하단 (%d, %d) \n", rec.lower_left.xpos, rec.lower_left.ypos);
    printf("우 하단 (%d, %d) \n\n", rec.upper_right.xpos, rec.lower_left.ypos);
}


int main(void)
{
    Rectangle rec;
    printf("좌측 하단의 좌표: ");
    scanf("%d %d", &rec.lower_left.xpos, &rec.lower_left.ypos);
    printf("우측 상단의 좌표: ");
    scanf("%d %d", &rec.upper_right.xpos, &rec.upper_right.ypos);

    Show_Pos(rec);
    Show_Area(rec);
    return 0;
}