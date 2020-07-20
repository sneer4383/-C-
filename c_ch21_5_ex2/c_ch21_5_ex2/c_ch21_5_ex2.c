#include <stdio.h>
#include <string.h>

void Clear(char* str)
{
    int len = strlen(str);
    str[len - 1] = '\0';
}

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[40];

    printf("첫번째 문자열 입력: ");
    fgets(str1, sizeof(str1), stdin);
    printf("두번째 문자열 입력: ");
    fgets(str2, sizeof(str2), stdin);

    Clear(str1);
    Clear(str2);

    strcpy(str3, str1);
    strcat(str3, str2);
    
    printf("문자열 조합의 결과: %s", str3);
 
    return 0;
}