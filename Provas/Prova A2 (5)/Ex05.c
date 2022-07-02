#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, x = 0 ;

    for (a=4 ; a >-3 ; a--) {
        x = x + a;
        switch (a) {
            case 0: x = x -2 * a ; break;
            case 1: x = x + a;     break;  
        }
    }

    printf(" %d \n ", x);

    return 0;
}

//Resposta 8
