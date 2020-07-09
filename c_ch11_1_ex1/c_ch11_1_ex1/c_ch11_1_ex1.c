#include <stdio.h>

int main(void)
{
    int arr[5];
    int max, min, tot;
    int i;
    printf("5개의 정수 입력: ");

    for (i = 0;i < 5;i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = tot = arr[0];
    
  
    for (i = 1;i < 5;i++)
    {
        if (max < arr[i])
            max = arr[1];
        if (min > arr[i])
            min = arr[i];
        tot += arr[i];
    }
  

    printf("MAX=%d \n", max);
    printf("MIN=%d \n", min);
    printf("TOT=%d \n", tot);
    return;
}