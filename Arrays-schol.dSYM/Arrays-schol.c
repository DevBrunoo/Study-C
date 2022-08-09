#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //declarando e inicializando vetor notas
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    int i;

    printf("Exibindo os Valores do Vetor \n\n");

    for(i = 0; i <= 4; i++ )
    {
        printf("notas[%d] = %.1f \n",i,notas[i]);
    }

    return 0;
}