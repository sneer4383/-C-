#include <stdio.h>

int main(void)
{
    FILE* fp = fopen("data.txt", "wt");
    if (fp == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    
    fclose (fp); //��Ʈ���� ����
    return 0;
}