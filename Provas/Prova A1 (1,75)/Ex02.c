// 2º Analise o seguinte promaga em C# e informe o qque será impreso no video.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z; 

    x= 15;  y = 10; z = 0;

    while (y > 0) {
        z = z +x;
        y--;
    } 
    printf ("%d ", z );

    return 0;
}

// Resposta: 150