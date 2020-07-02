#include <stdio.h>

/* Bit Operator : &(AND) |(OR) ^(XOR) ~(NOT) << >> (SHIFR) */

int main(void)
{
    //Right Shift CPU 연산 확인

    int num = -16; //11111111 11111111 11111111 11110000
    printf("2칸 오른쪽 이동 결과 : %d \n", num >> 2);
    printf("3칸 오른쪽 이동 결과 : %d \n", num >> 3);

    return 0;
}

/*만약 -4, -2가 나온다면 부호비트를 유지하는 시스템에서의 실행 결과*/
    
   