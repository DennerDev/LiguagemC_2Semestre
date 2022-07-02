#include <stdio.h>

int main(int argc, char const *argv[])
{
    int gama, beta;
    gama = 49;
    beta = 0;

    while (beta != 1)
    {
        if (gama % 2 == 1)
            printf("\n UNICID");

        gama = gama - 7;
        if (gama == 7)
            beta = 1;
    }
    return 0;
}
