/*
Ler o peso e a altura de uma pessoa, Calcular
e mostra o Imc na tela
Formula = peso / altura ao quadrado
*/


#include <stdio.h>
int main(void) {
    float alt, pes, imc;    

    printf ("Digite a altura: ");
    scanf  ("%f",&alt);

    printf ("Digite o peso: ");
    scanf  ("%f",&pes);

    imc = pes / (alt*alt);
    printf ("Seu Imc e %.2f ", imc);

    if (imc <= 18.5)        printf ("Voce esta Magro");
    else   if (imc <= 25 )  printf ("Peso Ideal");
    else   if (imc <= 30 )  printf ("Sobrepeso");
    else                    printf ("Obeso");
    

    return 0;
}
