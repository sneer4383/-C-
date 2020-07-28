#include <stdio.h>
struct employee
{
    char name[20];
    char id[25];
    int pay;
};

int main(void)
{
    struct employee man1;
    printf("이름, 주민번호, 급여를 입력해주세요\n");
    scanf("%s", man1.name);
    scanf("%s", man1.id);
    scanf("%d", &man1.pay);

    printf("이름: %s \n", man1.name);
    printf("주민번호: %s \n", man1.id);
    printf("급여: %d \n", man1.pay);

    return 0;
}