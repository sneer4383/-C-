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

    printf("ù��° ���ڿ� �Է�: ");
    fgets(str1, sizeof(str1), stdin);
    printf("�ι�° ���ڿ� �Է�: ");
    fgets(str2, sizeof(str2), stdin);

    Clear(str1);
    Clear(str2);

    strcpy(str3, str1);
    strcat(str3, str2);
    
    printf("���ڿ� ������ ���: %s", str3);
 
    return 0;
}