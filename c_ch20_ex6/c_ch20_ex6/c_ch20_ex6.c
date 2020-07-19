#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Computer(int* com);
void User(int* user, int(*Valid)(int*));
int Valid(int* user);
void Result(int com[], int user[], int* strike, int* ball, int* cnt);

int main(void)
{
    srand((int)time(NULL));
    int com[3];
    int user[3];
    int cnt = 0;
    int strike, ball;

    Computer(com);
    printf("%d %d %d \n", com[0], com[1], com[2]);
    printf("Start Game! \n");
    
    do {
        User(user,&Valid);
        Result(com, user, &strike, &ball, &cnt);
    } while (strike != 3);

    printf("\nGame Over!");
    return 0;
}

void Computer(int* com)
{
    com[0] = rand() % 10;
    do {
        com[1] = rand() % 10;
    } while (com[0] == com[1]);

    do {
        com[2] = rand() % 10;
    } while (com[0] == com[2] || com[1] == com[2]);
}

void User(int* user, int(*Valid)(int*))
{
    while (1)
    {
        printf("세 개의 숫자를 입력하세요: ");
        for (int i = 0;i < 3;i++)
        {
            scanf("%d", &user[i]);
        }
        if (Valid(user) == 0)
            break;
        else
            printf("잘못된 입력입니다.\n\n");
    }
}

int Valid(int* user)
{
    int valid = 0;
    for (int i = 0;i < 3;i++)
    {
        for (int j = i + 1;j < 3;j++)
        {
            if (user[i] == user[j])
                valid++;
        }
    }
    return valid;
}

void Result(int com[], int user[], int* strike, int* ball, int* cnt)
{
    (*strike) = 0, (*ball) = 0, ++(*cnt);

    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            if (com[i] == user[j])
            {
                if (i == j)
                    (*strike)++;
                else
                    (*ball)++;
            }
        }
    }
    printf("%d번째 도전 결과: %dstrike, %dball!!\n\n", *cnt, *strike, *ball);
}

        