#include <stdio.h>

int main(void)
{
    printf("현재 당신이 소유하고 있는 금액 : 3500\n");
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
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", x, y, z);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?");
    return 0;
}