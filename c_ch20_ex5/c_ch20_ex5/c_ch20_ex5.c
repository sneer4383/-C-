#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int User, Computer;
    int Win, Lose, Draw;
    Win = Lose = Draw = 0;

    srand((int)time(NULL));

    do
    {
        printf("������ 1, ������ 2, ���� 3: ");
        scanf("%d", &User);

        char* result[3] = { "����","����","��" };

        Computer = rand() % 3 + 1;

        printf("����� %s ����, ��ǻ�ʹ� %s ����, ", result[User - 1], result[Computer - 1]);

        if (User == Computer)
        {
            printf("�����ϴ�! \n\n");
            Draw++;
        }

        else if (Computer - User == 1 || Computer - User == -2)
        {
            printf("�̰���ϴ�! \n\n");
            Win++;
        }

        else
        {
            printf("����� �����ϴ�! \n\n");
            Lose++;
        }
    } while (Lose != 1);

    printf("�����ǰ�� : %d��, %d��\n", Win, Draw);
    return 0;
}