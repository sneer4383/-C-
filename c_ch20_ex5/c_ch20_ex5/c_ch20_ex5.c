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
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &User);

        char* result[3] = { "바위","가위","보" };

        Computer = rand() % 3 + 1;

        printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", result[User - 1], result[Computer - 1]);

        if (User == Computer)
        {
            printf("비겼습니다! \n\n");
            Draw++;
        }

        else if (Computer - User == 1 || Computer - User == -2)
        {
            printf("이겼습니다! \n\n");
            Win++;
        }

        else
        {
            printf("당신이 졌습니다! \n\n");
            Lose++;
        }
    } while (Lose != 1);

    printf("게임의결과 : %d승, %d무\n", Win, Draw);
    return 0;
}