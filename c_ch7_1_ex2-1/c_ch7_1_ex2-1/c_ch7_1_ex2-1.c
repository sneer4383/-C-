#include <stdio.h>

int main(void)
{
    int total = 0;
    int num;
    int i = 0;
    while (i++ < 5)
    {
        printf("%d��° ���� �Է�: ", i);
        scanf("%d", &num);
        
        while (num == 0) //����Ȯ�ν� == (=�� ���� ������)
        {
            printf("������ �ٽ� �Է����ּ���: ");
            scanf("%d", &num);
        }

        total += num;
    }
    printf("Total: %d", total);
    return 0;
}
          