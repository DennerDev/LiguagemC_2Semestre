/* 
 Calcular o Valor total de Compra, Sabendo que:
 Se a quantidade >= 12, o desconto será de 20%  
 Se a quantidade >= 6, o desconto sera de 10% 
 Se a quantidade < 6, o cliente não terá desconto  
*/

#include <stdio.h>
int main(void) {
    
    int mac;
    float prec;

    printf ("Digite a quantidade de macas compradas: ");
    scanf  ("%d", &mac);

    printf ("Digite o preco unitario de cada maca: ");
    scanf  ("%f", &prec);
    
    if (mac >= 12)        printf("Voce ganhou 20%% de desconto e vai pagar %2.f  Reais",(mac * prec) * 0.80);
    else if (mac >= 6 )   printf("Voce ganhou 10%% de desconto e vai pagar %2.f  Reais",(mac * prec) * 0.90);
    else                  printf("Voce nao tem  desconto e vai pagar %2.f  Reais",mac * prec);
    return 0;
}