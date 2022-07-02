// Exercicio 04
/*
Ler a base e a altura de uma sala retangular
Calcura a área de uma sala retangular.

Entrada --. Processamento --> Saida
Ler: Base = float     Calcular a área   Mostra o resultado 
Ler: altura = float
*/

#include <stdio.h>
int main(void)
{
  float b, alt, area;
  printf ("Digite a medida da base <em metros>: ");
  scanf ("%f",&b);

  printf ("Digite a medida da altura <em metros>: ");
  scanf ("%f",&alt);

  area = b * alt;
  
  printf ("A área da sala é %.2f metros quadrados",area);
  return 0;
};
