#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //declarando e inicializando vetor notas
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int i;

    printf("Exibindo os Valores do Vetor \n\n");

    for(i = 0; i <= 4; i++ )
    {
        printf("POINTS[%d]\n",i,POINTS[i]);
    }

    return 0;
}