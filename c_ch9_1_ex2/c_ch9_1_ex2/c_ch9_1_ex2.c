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
    printf("1.¼·¾¾¿Âµµ->È­¾¾¿Âµµ    2.È­¾¾¿Âµµ->¼·¾¾¿Âµµ \n");
    printf("¼±ÅÃ>> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("¼·¾¾¿Âµµ: ");
        scanf("%lf", &num);
        printf("È­¾¾¿Âµµ: %f", CelToFah(num));
        break;

    case 2:
        printf("È­¾¾¿Âµµ: ");
        scanf("%lf", &num);
        printf("¼·¾¾¿Âµµ: %f", FahToCel(num));
        break;
    }
    return 0;
}