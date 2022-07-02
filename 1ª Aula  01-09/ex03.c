// Exercicio 03 - float - com %f
// ler 2 notas de um aluno. Mostrar a média do aluno

/*
3) Ler 2 notas de um aluno.
Mostrar a média do aluno na tela.

Entrada ---> Processamento -----> Saída
Ler nota1    calcular a média   Mostrar o resultado
Ler nota2
*/
#include <stdio.h>
int main(void) 
{
  float nota1, nota2, med;
  printf ("Digite a primeira nota: ");
  scanf ("%f",&nota1);

  printf ("Digite a segunda nota: ");
  scanf ("%f",&nota2);

  med = (nota1 + nota2) /2;
  
  printf ("Sua média é %.2f",med);
  printf ("\n");
  return 0;
}
