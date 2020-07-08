#include <stdio.h>

void Fibo(int num)
{
    int f1 = 0, f2 = 1;
    if (num == 1)
        printf("%d",f1);
    else if (num== 2)
        printf("%d %d",f1,f2);
    else
    {
        printf("%d %d ",f1,f2);
        for (int i = 0;i < num-2;i++)
        {
            int f3;
            f3 = f1 + f2;
            printf("%d ", f3);
            f1 = f2;
            f2 = f3;
        }
    }
 
}

int main(void)
{
    int num;
    printf("출력할 수열의 개수 입력: ");
    scanf("%d", &num);
    Fibo(num);
    return 0;
}