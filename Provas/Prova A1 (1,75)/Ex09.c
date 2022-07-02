// 9º Assinale a alternativa que apresenta a saida resultante da execução do progama abaixo.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, a, b, f;

    a= 0;  b = 1;  f = 1;

    for (i=2 ; i<=6 ; i++) {
        f = a + b;
        a = b;
        b = f;

        printf("%d \t", b);
    }

    return 0;
}
// Resposta: 1  2  3  5  8
