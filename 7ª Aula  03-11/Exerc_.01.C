// Exercicio 01

#include <stdio.h>
#include <locale.h> // Biblioteca de acentuação  (LC_ALL,"Portuguese"),Tudo em pt-br / setlocale(LC_CTYPE,"Portuguese");
#include <stdlib.h> // rand ()
#include <time.h>   // srand (time (NULL))
#include <unistd.h>

int main(int argc, char const *argv[])
{   
    setlocale(LC_CTYPE,"Portuguese");

    int x1, x2, x3, x4;
    int n1, n2, n3, n4;
    srand(time(NULL));
    system("cls");

    x1 = rand() % 51; // resto de 0 até 50
    x2 = rand() % 51; // resto de 0 até 50
    x3 = rand() % 51; // resto de 0 até 50
    x4 = rand() % 51; // resto de 0 até 50

    printf("\n\nMEMORIZANDO");
    printf("\n%d \t %d \t %d \t %d", x1, x2, x3, x4);
    printf("\nAgora é sua vez....");
    sleep(5);
    system("clear");
    printf("\nDigite os 4 números apresentados no vídeo\n\n");
    printf("1º número...: ");
    scanf("%d", &n1);
    printf("2º número...: ");
    scanf("%d", &n2);
    printf("3º número...: ");
    scanf("%d", &n3);
    printf("4º número...: ");
    scanf("%d", &n4);

    return 0;

    return 0;
}
