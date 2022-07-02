#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j=1, k=2;

    for (i=0 ; i<k ; i++) {
        k = k + (i % 2 );

        printf("%d, %d, %d", i, j, k);
    }
    return 0;
}

// Resposta C.3, 1, 3