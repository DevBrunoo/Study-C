#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}

/* Usaremos mallocpara obter memória suficiente para 3 vezes o tamanho de um int, que podemos descobrir com sizeof.


 */