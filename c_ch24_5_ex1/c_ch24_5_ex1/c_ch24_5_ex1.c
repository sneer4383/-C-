#include <stdio.h>

long FileSize(FILE* fp)
{
    long fsize;
    long fpos;
    fpos = ftell(fp);

    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fseek(fp, fpos, SEEK_SET);

    return fsize;
}



int main(void)
{
    char str[100];
    FILE* fp = fopen("ABC.text", "wt");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);

    fp = fopen("ABC.text", "rt");
    printf("파일의 크기: %ld \n", FileSize(fp));
    fgets(str, sizeof(str), fp);
    fputs(str, stdout);
    fclose(fp);
    return 0;
}