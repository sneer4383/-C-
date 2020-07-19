#include <stdio.h>

int main(void)
{
    int n;
    int arr[100][100] = { 0 };
    int cnt = 0;
    int i, j, max, end;
    int x = -1, y = 0, dx=1, dy=1;
    scanf("%d", &n);
    end = n;
    max = n * n;

    while (1)
    {
        for (i = 0;i < end;i++) //가로 입력
        {
            x += dx;
            arr[y][x] = ++cnt;
        }
        
        end--;
        if (cnt == max)
            break;
        
        for (i = 0;i < end;i++) //세로 입력
        {
            y += dy;
            arr[y][x] = ++cnt;
        }

        dx *= -1;
        dy *= -1;
    }

        
    for (i = 0;i < n;i++) //출력
    {
        for (j = 0;j < n;j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

    