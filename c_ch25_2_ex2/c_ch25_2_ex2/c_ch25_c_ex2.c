#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* arr;
    int arrlen = 5;
    int cnt = 0;

    arr = (int*)malloc(sizeof(int) * arrlen);

    for (int i = 0;i < arrlen;i++)
    {
        scanf("%d", &arr[i]);
        cnt++;

        if (arr[i] == -1)
            break;
        if (i == arrlen - 1)
        {
            arrlen += 3;
            arr = (int*)realloc(arr, sizeof(int) * arrlen);
        }
    }

    for (int i = 0;i < cnt;i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}