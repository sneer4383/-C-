#include <stdio.h>

int main(void)
{
    printf("���� ����� �����ϰ� �ִ� �ݾ� : 3500\n");
    const int bread = 500;
    const int snack = 700;
    const int coke = 400;
    const int money = 3500;
    int x, y, z;
    for (x = 1;x <= money / bread;x++)
    {
        for (y = 1;y <= (money - bread * x) / snack;y++)
        {
            for (z = 1;z <= (money - bread * x - snack * y) / coke;z++)
            {
                if (bread * x + snack * y + coke * z == money)
                {
                    printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", x, y, z);
                }
            }
        }
    }
    printf("��� �����Ͻðڽ��ϱ�?");
    return 0;
}