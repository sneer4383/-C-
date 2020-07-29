#include <stdio.h>

int main(void)
{
    /* ���� ���� */
    FILE* fp = fopen("text.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    /* ���� ���� */
    fp = fopen("text.txt", "rt");

    /* SEEK_END text */
    fseek(fp, -2, SEEK_END);    //8
    putchar(fgetc(fp));

    /* SEEK_SET text */
    fseek(fp, 2, SEEK_SET); //3
    putchar(fgetc(fp));

    /* SEEK_CUR text */
    fseek(fp, 2, SEEK_CUR); //6
    putchar(fgetc(fp));

    fclose(fp);
    return 0;
}
