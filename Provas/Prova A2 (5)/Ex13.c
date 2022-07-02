#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont, a = 0, b=1 , f=1;

    for (cont=2 ; cont <=6 ; cont++){
        f = a+b;
        a = b;
        b = f;

        printf("%d \t ", b);
    }
    return 0;
}

// Resposta  A.	1 2 3 5 8