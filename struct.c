#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
}

/* 
Primeiro, vamos alocar memória suficiente para três inteiros e apontar para o primeiro com int *list. (Se mallocfalhar, nosso ponteiro será nulo e sairemos do programa com return 1.)
Como arrays em C são equivalentes a ponteiros, podemos usar a mesma notação para definir os valores em nossa lista com list[0], list[1], e list[2]. O compilador executará a aritmética de ponteiro correta para definir valores nos endereços corretos.

 */