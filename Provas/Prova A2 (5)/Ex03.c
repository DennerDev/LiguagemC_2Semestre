#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont, x;

    x = 5;
    cont = 1;

    while (cont < 6 ) {
        x = x * (-1);
        if ( x < cont ) x = x + cont;
        cont++;
    }

    printf("\n %d", x );

    return 0;
}

// Resposta 0
