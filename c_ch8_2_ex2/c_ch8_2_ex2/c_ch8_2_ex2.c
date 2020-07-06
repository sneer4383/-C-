#include <stdio.h>

int main(void)
{
    int A, Z;

    for (A = 0;A < 10;A++)
    {
        for (Z = 0;Z < 10; Z++)
        {
            if ((10 * A + Z) + (10 * Z + A) == 99) printf("%d%d+%d%d=99\n", A, Z, Z, A);
            else continue;
        }
    }
    return 0;
}