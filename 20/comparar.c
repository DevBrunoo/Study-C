#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("i: "); /* O mac nao consegue rodar get tente outro editor de codigo ou maquina */
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}