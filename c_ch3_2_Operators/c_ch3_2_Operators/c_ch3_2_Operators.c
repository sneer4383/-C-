#include <stdio.h>

int main(void)
{
    //1 ���Կ�����(=),���������(+,-,*,/,%) ����

    //2 ���մ��� ������
    int num1 = 2, num2 = 4, num3 = 6;
    num1 += 3; //num1=num1+3;
    num2 *= 4; //num2=num2*4;
    num3 %= 5; //num3=num3%5;
    printf("Two Result: %d, %d, %d\n\n", num1, num2, num3);
   
    //3 ��ȣ����
    int num4 = +2, num5 = -4;
    num4 = -num4;
    num5 = -num5;
    printf("num4: %d\nnum5: %d\n\n", num4, num5);

    //4 ����, ���� ������
    int num6 = 12;
    int num7 = 12;
    printf("num6: %d\n", num6);
    printf("num6++: %d\n", num6++); //��������
    printf("num6: %d \n\n", num6);

    printf("num7: %d\n", num7);
    printf("++num7: %d\n", ++num7); //��������
    printf("num7: %d \n\n", num7);
    
    //5 
    int num8 = 10;
    int num9 = (num8--) + 2;    //��������
    printf("num8: %d\n", num8);
    printf("num9: %d\n\n", num9);

    //6 ���迬����
    int num10 = 10;
    int num11 = 12;
    int result1, result2, result3;
    
    result1 = (num10 == num11);
    result2 = (num10 <= num11);
    result3 = (num10 > num11);
    printf("result 1: %d\nresult 2: %d\nresult 3: %d\n\n", result1, result2, result3);

    //7 ��������
    int result4, result5, result6;
    result4 = (num10 == 10 && num11 == 12);
    result5 = (num10 < 12 || num11>12);
    result6 = (!num10);

    printf("result 4: %d\nresult 5: %d\nresult 6: %d\n\n", result4, result5, result6);

    return 0;
}