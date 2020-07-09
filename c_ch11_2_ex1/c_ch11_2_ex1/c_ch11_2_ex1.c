#include <stdio.h>

int main(void)
{
    char str[100];
    int len=0;
    
    printf("단어 입력: ");
    scanf("%s", str);

    for (int i=0;str[i] != 0;i++)
    {
        len++;
    }

    printf("단어 길이: %d", len);

    return 0;
}
    