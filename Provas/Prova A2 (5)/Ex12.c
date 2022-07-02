#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, d;

    printf ("Digite um numero: ");
    scanf  ("%d", &d);

    for (c = 0 ; c < 2 ; c++ )
        d = d * d;

        printf("%d", d);

    return 0;
}

// Resposta A.	81