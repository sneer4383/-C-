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
    printf("�̸�, �ֹι�ȣ, �޿��� �Է����ּ���\n");
    scanf("%s", man1.name);
    scanf("%s", man1.id);
    scanf("%d", &man1.pay);

    printf("�̸�: %s \n", man1.name);
    printf("�ֹι�ȣ: %s \n", man1.id);
    printf("�޿�: %d \n", man1.pay);

    return 0;
}