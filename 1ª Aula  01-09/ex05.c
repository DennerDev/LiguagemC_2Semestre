// Exercicio 
/*
Realizar a soma de diversos contas no printf.
*/

#include <stdio.h>

int main(){
    float A,B;

    printf("Digite o primeiro numero: ");
    scanf("%f",&A);
    printf("Digite o segundo numero: ");
    scanf("%f",&B);

    printf("\n A soma é %.2f ",          A+B);
    printf("\n A subitração é %.2f ",    A-B);
    printf("\n A divisão é %.2f ",       A/B);
    printf("\n A multiplicação é %.2f ", A*B);
    printf("\n");
    return 0;

}