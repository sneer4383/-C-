#include <stdio.h>
void Swap3(int* num1, int* num2, int* num3)
{
    int temp = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = temp;
}

 

int main(void)
{
    int num1=1, num2=2, num3=3;
   
    printf("%d %d %d \n", num1, num2, num3);
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d \n", num1, num2, num3);
    return 0;

}