// 3º Considere o seguinte promaga e informe o que será impreso no video.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num, res;

    num = 1;  res = 0;

    for (i=0 ; i < 5  ; i++) {
        num = num * i;
        res = res + num;
    }

    printf("%d ", res);

    return 0;
}

// Resposta: 0
