#include <stdio.h>
struct employee
{
    char name[20];
    char id[25];
    int pay;
};

int main(void)
{
    struct employee man[3];
    for (int i = 0;i < 3;i++)
    {
        printf("\n이름, 주민번호, 급여를 입력해주세요\n");
        scanf("%s", man[i].name);
        scanf("%s", man[i].id);
        scanf("%d", &man[i].pay);
    }

    for (int i = 0;i < 3;i++)
    {
        printf("이름: %s \n", man[i].name);
        printf("주민번호: %s \n", man[i].id);
        printf("급여: %d \n", man[i].pay);
        printf("\n");
    }
    return 0;
}