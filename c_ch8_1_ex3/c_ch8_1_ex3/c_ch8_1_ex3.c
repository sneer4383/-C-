#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    double avg;

    printf("국어, 영어, 수학 점수를 입력하세요: ");
    scanf("%d %d %d", &kor, &eng, &math);
    avg = (kor + eng + math) / 3.0;

    if (avg > 90) printf("Grade : A");
    else if (avg > 80) printf("Grade : B");
    else if (avg > 70) printf("Grade : C");
    else if (avg > 50) printf("Grade : D");
    else printf("Grade : F");

  
    return 0;
}
