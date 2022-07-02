#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n , cont, soma;

    m = 2;
    n = 10;

    for (cont = m ; cont < n ; cont++){
        if (cont%2 == 0)
        soma = soma + cont;

        printf ("\nSoma = %d", soma);
        printf ("\nCont = %d", cont);
        
    }
    return 0;
}
// Resposta   O valor da variável soma ao final do programa é 20.