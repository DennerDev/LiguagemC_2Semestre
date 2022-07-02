// 5º Considere o progama a abaixo:

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1, v2, v3;

    printf("Digete v1: ");
    scanf ("%d",&v1);

    printf("Digete v2: ");
    scanf ("%d",&v2);

    printf("Digete v3: ");
    scanf ("%d",&v3);

    printf("%d \t", v1);

    while (v3 > 1) {
        v1 = v1 * v2;
        v3 = v3 -1;
        printf("%d \t ", v1);
    }
    return 0;
}
// Resposta: 81
