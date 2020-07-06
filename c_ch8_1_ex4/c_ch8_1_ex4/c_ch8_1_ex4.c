#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", num1 > num2 ? num1 - num2 : num2 - num1);

    return 0;
}
        
 