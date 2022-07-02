// 10º Analise o program abaixo.
/*
Caso o usuário digite o valor 8 para a variavel B, os os valores que serão escritos para A e para B,
serão respectivamente:
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, B;

    A = 2;

    printf("Numero: ");
    scanf ("%d",&B);

    while(A <= 30) {
        B =B + 2;
        if (B > 18) B--;
        A = A+B;
    }
    printf("\nValor de A: %d", A);
    printf("\nValor de B: %d", B);

    return 0;
}
// Resposta: Valor de A: 38
// Resposta: Valor de B: 14
