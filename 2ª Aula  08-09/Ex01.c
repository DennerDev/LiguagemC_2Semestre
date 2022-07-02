// Data 8/9/2021 Luiguagem C
/*
1º Ler Dois numerios interios informe se os números são iguais ou Diferentes
*/


#include <stdio.h>

int main(void) {
   int A, B;
   printf ("\n Digiteo o primeiro numero: ");
   scanf ("%d",&A);

   printf ("\n Digite o segundo número:");
   scanf ("%d",&B);

   if( A == B) printf ("Os numeros sao Iguais");
   else        printf ("Os numeros sao diferentes");
   return 0;
}

