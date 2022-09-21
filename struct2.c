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

Se quisermos ter um array com memória do heap com malloc, nosso programa pode ficar assim:
Primeiro, vamos alocar memória suficiente para três inteiros e apontar para o primeiro com int *list. (Se mallocfalhar, nosso ponteiro será nulo e sairemos do programa com return 1.)


 */