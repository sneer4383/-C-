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
    printf("���簢���� ����: %d", area);
}

void Show_Pos(Rectangle rec)
{
    printf("----���簢���� ��ǥ---- \n");
    printf("�� ��� (%d, %d) \n", rec.lower_left.xpos, rec.upper_right.ypos);
    printf("�� ��� (%d, %d) \n", rec.upper_right.xpos, rec.upper_right.ypos);
    printf("�� �ϴ� (%d, %d) \n", rec.lower_left.xpos, rec.lower_left.ypos);
    printf("�� �ϴ� (%d, %d) \n\n", rec.upper_right.xpos, rec.lower_left.ypos);
}


int main(void)
{
    Rectangle rec;
    printf("���� �ϴ��� ��ǥ: ");
    scanf("%d %d", &rec.lower_left.xpos, &rec.lower_left.ypos);
    printf("���� ����� ��ǥ: ");
    scanf("%d %d", &rec.upper_right.xpos, &rec.upper_right.ypos);

    Show_Pos(rec);
    Show_Area(rec);
    return 0;
}