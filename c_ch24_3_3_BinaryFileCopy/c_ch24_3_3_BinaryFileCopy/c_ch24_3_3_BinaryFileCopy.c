#include <stdio.h>

int main(void)
{
    FILE* src = fopen("origin.jpg", "rb");
    FILE* des = fopen("copy.jpg", "wb");
    char buf[1000000];
    int readCnt;

    if (src == NULL || des == NULL)
    {
        puts("���� ���� ����!");
        return -1;
    }
    while (1)
    {
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        if (readCnt < sizeof(buf));
        {
            if (feof(src) != 0)
            {
                fwrite((void*)buf, 1, readCnt, des);
                puts("���Ϻ��� �Ϸ�");
                break;
            }
            else
                puts("���� ���� ����");
            break;
        }

        fwrite((void*)buf, 1, sizeof(buf), des);
    }
    fclose(src);
    fclose(des);
    return 0;
}