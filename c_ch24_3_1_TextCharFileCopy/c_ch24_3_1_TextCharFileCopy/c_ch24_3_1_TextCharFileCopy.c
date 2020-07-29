#include <stdio.h>

int main(void)
{
    FILE* src = fopen("src.txt", "rt");
    FILE* des = fopen("dst.txt", "wt");

    int ch;
    if (src == NULL || des == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, des);

    if (feof(src) != 0)
        puts("���� ���� �Ϸ�!");
    else
        puts("���� ���� ����!");

    fclose(src);
    fclose(des);
    return 0;
}