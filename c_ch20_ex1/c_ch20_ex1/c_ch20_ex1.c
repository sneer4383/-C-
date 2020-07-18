#include <stdio.h>
void ment(void)
{
    printf("\n----ARR----\n");
}
void Show(int(* arr)[4])
{
    for (int i = 0;i < 4;i++)
    {
        for (int j = 0;j < 4;j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}

void Rotation(int(* arr)[4])
{
    int temp[4][4];

    for (int i = 0;i < 4;i++)
    {
        for (int j = 0;j < 4;j++)
            temp[i][j] = arr[i][j];
    }

    for (int i = 0;i < 4;i++)
    {
        for (int j = 0;j < 4;j++)
            arr[i][j] = temp[3-j][i];
    }
}

int main(void)
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    ment();
    Show(arr);

    ment();
    Rotation(arr);
    Show(arr);

    ment();
    Rotation(arr);
    Show(arr);

    ment();
    Rotation(arr);
    Show(arr);
    return 0;
}