#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* temp = NULL;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    S
    /* ptr1=&num2;
       ptr2=&num1; */

    printf("%d %d", *ptr1, *ptr2);

    return 0;
}