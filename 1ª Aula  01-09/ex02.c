// Exercicio 02
// Ler dois numeros inteiros e somar e depois mostar na tela.
// Processo: Digitar os numeros, calcular, mostra o resultado do calculo na tela.

/*
Siga as regras para poder realizar a soma como sucesso.
Ele tem dois paremtros, o primeiro é dentro das apasas, (& = é obrigatorio, depois a variavél, ex:num1)
%d no Final das apasas coloque (%d) para que ele leia a variavél que que vem após a virgula (Ex:printf("Restuldao é: %d",&res)),
*/

#include <stdio.h>

int main (void){
    int n1,n2,res;
    printf("Digite o Primeiro numero");
    scanf("%d",&n1);

    printf("Digite o Primeiro numero");
    scanf("%d",&n2);

    res = n1 + n2;
    printf("Restuldao é: %d",&res);

    return 0;

}