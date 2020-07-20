#include <stdio.h>
int Conv(int ch)
{
    int conv;
    int diff = 'a' - 'A';
    if ('a' <= ch && ch <= 'z')
    {
        conv = ch - diff;
    }

    else if ('A' <= ch && ch <= 'Z')
    {
        conv = ch + diff;
    }

    else
        conv = -1;

    return conv;
}

int main(void)
{
    int ch = getchar();
    ch = Conv(ch);
    if (ch == -1)
    {
        puts("범위를 벗어난 입력입니다.");
    }

    else
        putchar(ch);

    return 0;
}
    