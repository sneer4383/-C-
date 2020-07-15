#include <stdio.h>
int len(char* arr)
{
    int len = 0;
    for (int i = 0; arr[i] != 0;i++)
        len++;
    return len;
}

void Palindrome(char* arr, int len)
{
    int front = 0, end = len - 1;
    int cnt = 0;
    for (int i = 0;i < len / 2;i++)
    {
        if (arr[front] == arr[end])
            cnt++;
        front++;
        end--;
    }

    if (cnt == len / 2)
        printf("회문 입니다.");
    else
        printf("회문이 아닙니다.");
}

int main(void)
{
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);
    Palindrome(str, len(str));

    return 0;
}


    