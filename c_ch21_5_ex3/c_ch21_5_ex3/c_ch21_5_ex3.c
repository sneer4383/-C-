#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int namelen(char* user)
{
    int namelen = 0;
    while (user[namelen] != ' ')
    {
        namelen++;
    }
    return namelen;
}

void namecompare(char* user1, char* user2, int(*namelen)(char*))
{
    if (namelen(user1) == namelen(user2))
    {
        if (!strncmp(user1, user2, namelen(user1)))
        {
            printf("�̸��� �����ϴ�. \n");
        }
        else
            printf("�̸��� �ٸ��ϴ�. \n");
    }
    else
        printf("�̸��� �ٸ��ϴ�. \n");
}

void agecompare(char* user1, char* user2, int(*namelen)(char*))
{
    char AGE1[10];
    char AGE2[10];
    int age1, age2;

    strcpy(AGE1, user1 + namelen(user1)+1); //i+1��° ���ں��� �����ϱ����ؼ��� strcpy(STR, &(str[i]))
    strcpy(AGE2, user2 + namelen(user2)+1);

    age1 = atoi(AGE1);
    age2 = atoi(AGE2);

    if (age1 == age2)
        printf("���̰� �����ϴ�.");
    
    else
        printf("���̰� �ٸ��ϴ�.");
}

int main(void)
{
    char user1[30];
    char user2[30];

    puts("����� ������ �Է��ϼ���: ");
    fgets(user1, sizeof(user1), stdin);
    puts("����� ������ �Է��ϼ���: ");
    fgets(user2, sizeof(user2), stdin);

    namecompare(user1, user2, namelen);
    agecompare(user1, user2, namelen);

    return 0;

}
