#include <stdio.h>

double CelToFah(double Cel)
{
    return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
    return (Fah - 32) / 1.8;
;}

int main(void)
{
    int choice;
    double num;
    printf("1.�����µ�->ȭ���µ�    2.ȭ���µ�->�����µ� \n");
    printf("����>> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("�����µ�: ");
        scanf("%lf", &num);
        printf("ȭ���µ�: %f", CelToFah(num));
        break;

    case 2:
        printf("ȭ���µ�: ");
        scanf("%lf", &num);
        printf("�����µ�: %f", FahToCel(num));
        break;
    }
    return 0;
}