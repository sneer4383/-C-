#include <stdio.h>

int KMAX(int n);

int main(void)
{
    int n;
    printf("상수 n 입력: ");
    scanf("%d", &n);
    printf("공식을 만족하는 k의 최댓값은 %d", KMAX(n));
    return 0;
}

int KMAX(int n)
{
    static int k = 0; //초기화하지않으면 0으로 초기화된다
    int num = 1;
    for (;num <= n;k++)
    {
        num *= 2;
    }
    return (k-1);
}

    