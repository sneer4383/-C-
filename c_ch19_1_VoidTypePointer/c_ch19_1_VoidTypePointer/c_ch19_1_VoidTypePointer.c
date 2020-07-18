#include <stdio.h>
void SoSimpleFunc(void)
{
    printf("I'm so SIMPLE");
}

int main(void)
{
    int num = 20;
    void* ptr;

    ptr = &num; //변수 num의 주소 값 저장
    printf("%p \n", ptr);

    ptr = SoSimpleFunc; //함수 주소 값 저장
    printf("%p \n", ptr); //*ptr(참조)는 불가능! 
    return 0;
}

//void 포인터는 ONLY 주소값 저장만! 포인트 연산, 값 변경, 참조 불가능