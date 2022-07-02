/*
Operadores Relacionais (>, >=, <; =<, ==, !=)
Frases = 1 if else 
Frases = 2 if else encadeado 
Frases = 3 if else encadeado
Frases = 4 if else encadeado
*/

/*Ler 2 Notas de um aluno. Calcular e mostra a media do aloni na tela.
  Informe se aluno está aprovado, reprovado 
*/

#include <stdio.h>
int main (void) {
    float n1, n2, med;

    printf ("Digite a primeira nota do aluno: ");
    scanf  ("%f", &n1);

    printf ("Digite a segunda nota do aluno: ");
    scanf  ("%f", &n2);

    med = (n1+n2)/2;
    printf ("Sua media e %2.f ", med);

    if (med >= 7)   printf ("\nAprovado");
    else            printf ("\nReprovado");

    return 0;
}
