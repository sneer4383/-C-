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
        printf("\n�̸�, �ֹι�ȣ, �޿��� �Է����ּ���\n");
        scanf("%s", man[i].name);
        scanf("%s", man[i].id);
        scanf("%d", &man[i].pay);
    }

    for (int i = 0;i < 3;i++)
    {
        printf("�̸�: %s \n", man[i].name);
        printf("�ֹι�ȣ: %s \n", man[i].id);
        printf("�޿�: %d \n", man[i].pay);
        printf("\n");
    }
    return 0;
}