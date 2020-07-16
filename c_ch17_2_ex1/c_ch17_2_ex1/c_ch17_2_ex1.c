#include <stdio.h>
void MaxAndMin(int** maxPtr, int** minPtr, int arr[])
{
    int* max;
    int* min;
    max = min = &arr[0];

    for (int i = 0;i < 5;i++)
    {
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }
    *maxPtr = max;
    *minPtr = min;
}

int main(void)
{
    int* maxPtr = 0;
    int* minPtr = 0;
    int arr[5];
    for (int i = 0;i < 5;i++)
    {
        scanf("%d", &arr[i]);
    }
    MaxAndMin(&maxPtr, &minPtr, arr);
    printf("Max=%d Min=%d\n", *maxPtr, *minPtr);
    return 0;
}

    