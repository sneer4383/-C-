#include <stdio.h>
int main(void)
{
    int num;
    int i = 0;
    int bi[30];
    printf("10���� ���� �Է�: ");
    scanf("%d", &num);

    while (num > 0)
    {
        bi[i++] = num % 2;
        num /= 2;
    }

    printf("2���� ���: ");
 
    while (i>0)
    {
        printf("%d", bi[--i]); 
    }
    
    return 0;
}
