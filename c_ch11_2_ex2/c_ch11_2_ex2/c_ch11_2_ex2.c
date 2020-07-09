#include <stdio.h>

int main(void)
{
    char str[100];
    char rev[100];
    int len=0;
    printf("단어 입력: ");
    scanf("%s", str);

    for (int i = 0; str[i] != 0 ;i++)
    {
        len++;
    }

    for (int i = 0; i < len ;i++)
    {
        rev[i] = str[(len-1)-i];
    }
    rev[len] = 0;
   
    printf("%s", rev);
    return 0;
}