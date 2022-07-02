/*
Ler 2 numeros Float.
Mostrar a soma, subtração, multiplicação, divição
*/

#include <stdio.h>
int main (void) {
    float A, B;

    printf ("Digite o primeiro numero ");
    scanf  ("%f",&A);

    printf ("Digite o segundo numero ");
    scanf  ("%f",&B);

    printf ("\nA soma e  ------------> %.2f ", A+B);
    printf ("\nA subtracao e  -------> %.2f ", A-B);
    printf ("\nA multiplicacao e  ---> %.2f ", A*B);

    if (B == 0)  printf ("\nVoce nao pode dividir por 0 ");
    else;        printf ("\nA divisao é %.2f ", A/B);

    return 0;
}