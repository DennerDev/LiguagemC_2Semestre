// 7º No programa apresentado, qual o valor impresso de t, sabendo que os valores lidos r,s,t, 
// respectivamente são: 5,2,10.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, s, t, i;

    printf("Numero 1: ");
    scanf ("%d",&r);

    printf("Numero 2: ");
    scanf ("%d",&s);

    printf("Numero 3: ");
    scanf ("%d",&t);

    for (i=1 ; i<=5 ; i++) {
        if (r >= s) t = t+s;
        else        t = t-s;

        r++;
        s = s+2;
    }
    printf("%d ", t);

    return 0;
}
// Resposta: 20

