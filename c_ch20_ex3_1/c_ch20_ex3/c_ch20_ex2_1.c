#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0;
    int num;

    printf("������ ����: 0���� 99���� \n");
    while(i<5)
    {
        num = rand();
        if (num < 100)
        {
            printf("���� ���: %d \n", num);
            i++;
        }
    }
    return 0;
}