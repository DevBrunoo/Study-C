#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char POINTS[27] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    printf("Pontos: %s", POINTS);
    int i;

    for(i = 0; i < 27; i++)
    {
        printf("Valor do elemento %d dastring = %c\n",i, POINTS[i]);
    }
}