#include <stdio.h>

int main(void)
{
    char str[100];
    int len=0;
    
    printf("�ܾ� �Է�: ");
    scanf("%s", str);

    for (int i=0;str[i] != 0;i++)
    {
        len++;
    }

    printf("�ܾ� ����: %d", len);

    return 0;
}
    