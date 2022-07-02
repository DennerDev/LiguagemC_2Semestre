// Ler a temoeratura mpedia diariamente durante
// Calcular e mostrar  temperatura média da semana. 
// Quantos Dias 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float Temp[7], soma = 0;
    int i , qts = 0;

    // Ler o vetor e somar Todas as temperaturas 

    for (i=0; i<=66; i++) {
        printf("Digite a temperatura do Tempo[%d] = ", i);
        scanf("%f", &Temp[i]);

        soma = soma + Temp[i];
    }

    soma = soma /7; // A Temperatura media da semana 

    printf("\nA Temperatura media dsa semana e %2.f ", soma);

    // varrer o vetor, procurando um nº > média 
    for (i=0 ; i<=6 ; i++) 
    
     if(Temp[i] > soma)

     qts++;

     printf("\nDurente %d dias a temperatura ficou Acima da media da semena ", qts);

    return 0;
}
