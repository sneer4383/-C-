#include <stdio.h>
void SoSimpleFunc(void)
{
    printf("I'm so SIMPLE");
}

int main(void)
{
    int num = 20;
    void* ptr;

    ptr = &num; //���� num�� �ּ� �� ����
    printf("%p \n", ptr);

    ptr = SoSimpleFunc; //�Լ� �ּ� �� ����
    printf("%p \n", ptr); //*ptr(����)�� �Ұ���! 
    return 0;
}

//void �����ʹ� ONLY �ּҰ� ���常! ����Ʈ ����, �� ����, ���� �Ұ���