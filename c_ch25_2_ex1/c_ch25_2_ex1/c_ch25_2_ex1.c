#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int max,len;
    char* str;
    
    printf("���ڿ��� �ִ� ����: ");
    scanf("%d", &max);
    getchar();
    str = (char*)malloc(sizeof(char)*(max + 2)); // ����, null���� ���

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, max+2, stdin);
    str[strlen(str)-1] = 0;    //���� ����
    len = strlen(str);

    for (int i = 0;i < len;i++)
    {
        if (str[i] == ' ')
            str[i] = 0;
    }

    for (int j = len - 1;j >= 0;j--)
    {
        if (str[j] == 0)
            printf("%s ", str+j+1);
        if (j == 0)
            printf("%s", str);
    }

    free(str);

    return 0;

}