#include <stdio.h>
#include <string.h>

int conv(char c)
{
    int conv;
    conv = c - '0';
    return conv;
}


int main(void)
{
    char str[100];
    int len;
    int sum = 0;

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (int i = 0;i < len;i++)
    {
        if ('1' <= str[i] && str[i] <= '9')
            sum += conv(str[i]);
    }

    printf("숫자의 총 합: %d \n", sum);

    return 0;
}