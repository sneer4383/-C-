#include <stdio.h>

int main(void)
{
    char str[100];
    char max = str[0];
    printf("단어 입력: ");
    scanf("%s", str);

    for (int i = 0;str[i] != 0;i++)
    {
        if (max < str[i])
            max = str[i];
    }

    printf("MAX: %c", max);
    return 0;
}