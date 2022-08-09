#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];

    scores[0] = 1;
    scores[1] = 3;
    scores[2] = 2;

    printf("Resultado: f%\n", (scores[2] + scores[2] + scores[2]) / 3.0 );
}