/*
Ler um número float. informe se o numero lido é Positivo ou negativo.
considere que o numero Zero e positivo. 
*/

#include <stdio.h>
int main (void) {
   float num;

   printf ("Digite um numero: ");
   scanf  ("%f",&num);

   if (num >= 0)  printf ("Positivo");
   else           printf ("Negativo");

   return 0;
}
