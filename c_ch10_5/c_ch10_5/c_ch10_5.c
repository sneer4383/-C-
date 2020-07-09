#include <stdio.h>
int main(void)
{
    int ord = 0;
    int cnt = 0;
    int num = 2;
    while (ord < 10)
    {
        cnt = 0;
        for (int i = 1;i <= num;i++)
        {
            if (num % i == 0)
                cnt++;
        }
        if (cnt == 2)
        {
            printf("%d ", num);
            ord++;
        }
        num++;
    }
    return 0;
}
            