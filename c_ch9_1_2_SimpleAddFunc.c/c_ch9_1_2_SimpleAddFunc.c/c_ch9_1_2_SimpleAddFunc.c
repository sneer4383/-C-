#include <stdio.h>

int Add(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    int result;
    int num1, num2;
    result = Add(3, 4);
    printf("µ¡¼À°á°ú1: %d \n", result);
    result = Add(5, 8);
    printf("µ¡¼À°á°ú2: %d \n", result);
    printf("µÎ°³ÀÇ Á¤¼ö ÀÔ·Â: ");
    scanf("%d %d", &num1, &num2);
    result = Add(num1, num2);
    printf("µ¡¼À °á°ú: %d \n", result);

    return 0;
}