#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, contador;

    printf("Digite um número inteiro...: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Numero invalido");
    else
        for (contador = 0; contador <= numero; contador++)
            if (contador < 10)
                printf("0%d \t ", contador);
            else
                printf("%d \t ", contador);

    return 0;
}
