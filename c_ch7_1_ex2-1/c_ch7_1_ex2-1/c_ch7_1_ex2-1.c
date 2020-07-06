#include <stdio.h>

int main(void)
{
    int total = 0;
    int num;
    int i = 0;
    while (i++ < 5)
    {
        printf("%d번째 정수 입력: ", i);
        scanf("%d", &num);
        
        while (num == 0) //관계확인시 == (=는 대입 연산자)
        {
            printf("정수를 다시 입력해주세요: ");
            scanf("%d", &num);
        }

        total += num;
    }
    printf("Total: %d", total);
    return 0;
}
          