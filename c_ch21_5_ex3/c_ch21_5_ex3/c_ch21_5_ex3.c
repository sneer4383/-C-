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
            printf("이름이 같습니다. \n");
        }
        else
            printf("이름이 다릅니다. \n");
    }
    else
        printf("이름이 다릅니다. \n");
}

void agecompare(char* user1, char* user2, int(*namelen)(char*))
{
    char AGE1[10];
    char AGE2[10];
    int age1, age2;

    strcpy(AGE1, user1 + namelen(user1)+1); //i+1번째 문자부터 복사하기위해서는 strcpy(STR, &(str[i]))
    strcpy(AGE2, user2 + namelen(user2)+1);

    age1 = atoi(AGE1);
    age2 = atoi(AGE2);

    if (age1 == age2)
        printf("나이가 같습니다.");
    
    else
        printf("나이가 다릅니다.");
}

int main(void)
{
    char user1[30];
    char user2[30];

    puts("사용자 정보를 입력하세요: ");
    fgets(user1, sizeof(user1), stdin);
    puts("사용자 정보를 입력하세요: ");
    fgets(user2, sizeof(user2), stdin);

    namecompare(user1, user2, namelen);
    agecompare(user1, user2, namelen);

    return 0;

}
